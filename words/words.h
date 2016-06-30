#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int getch(void);
void ungetch(int c);
int getword(char *word, int lim);

typedef struct wordrec {
	char *word;
	int	count;
} WordType;

typedef struct wordrec *WordPtr;

void strToLower(char *string);
int findWord(char *newWord, WordPtr words, int numWords);
WordPtr storeWord(char *newWord, WordPtr words, int *numWords, int *numElements);
WordPtr addWords(WordPtr words, int *numWords, int numToAdd);
void reportResults(WordPtr words, int numWords);