#include "words.h"

#define WORDLEN 100
#define CHUNK 10	/* how many elements to add to the array at a time */

int main() {
	int numWords = 0;	/* How many words have been stored in the array */
	int numElements = 0; /* How many elements are in the array */
	int foundPos;
	char thisWord[WORDLEN] = "";
	WordPtr words = NULL;
	while (getword(thisWord, WORDLEN) != EOF) {
		strToLower(thisWord);
		foundPos = findWord(thisWord, words, numWords);
		if (foundPos == -1) {
			words = storeWord(thisWord, words, &numWords, &numElements);
		} else {
			(words[foundPos].count)++;
		}
	}
	
	reportResults(words, numWords);
	return 0;
}

/* reportResults: Prints out a table of words found and number of occurrences */
void reportResults(WordPtr words, int numWords) {
	int i;
	printf("%15s %5s\n", "Word", "Count");
	for (i=0; i < numWords; i++) {
		printf("%15s %5d\n", words[i].word, words[i].count);
	}		
}


/* addWords: Uses malloc to allocate a larger space and then
copies the existing data into it, zeros out the rest of the space,
and frees the old space.  Returns the new allocation */
WordPtr addWords(WordPtr words, int *numWords, int numToAdd) {
	int newSize = *numWords + numToAdd;
	int i;
	WordPtr newWords = malloc(sizeof(WordType) * newSize);
	for (i=0; i < *numWords; i++) {
		newWords[i] = words[i];
	}
	for (; i < newSize; i++) {
		newWords[i].word = NULL;
		newWords[i].count = 0;
	}
	free(words);
	return newWords;
}

/* storeWord: Adds a new word to the list.  Checks to see if there is room first, and 
if not, calls addWords to make room. Returns the words array, which may have moved. */
WordPtr storeWord(char *newWord, WordPtr words, int *numWords, int *numElements) {
	char *newWordAlloc;
	WordPtr newWords;
	if (*numWords >= *numElements) {
		newWords = addWords(words, numWords, CHUNK);
		(*numElements) += CHUNK;
	} else {
		newWords = words;
	}
	newWordAlloc = malloc(sizeof(char) * WORDLEN);
	strcpy(newWordAlloc, newWord);
	newWords[*numWords].word = newWordAlloc;
	newWords[*numWords].count = 1;
	*numWords++;
	return newWords;
}

/* findWord: looks through the list for the given word.  Returns the position
of the word in the array, or -1 if not found. */
int findWord(char *newWord, WordPtr words, int numWords) {
	int i;
	int pos = -1;
	for (i=0; i < numWords && pos == -1; i++) {
		if (strcmp(words[i].word, newWord) == 0) {
			pos = i;
		}
	}
	return pos;
}

/* strToLower: changes a string to lower case. */
void strToLower(char *string) {
	int i;
	for (i=0; string[i] != '\0' && i <= WORDLEN; i++) {
		string[i] = tolower(string[i]);
	}
}