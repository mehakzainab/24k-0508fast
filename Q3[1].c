#include <stdio.h>
#include <string.h>

#define MAX_WORD_LENGTH 100

int Wordc(char *word, char *Wordc) {
    int removedCount = 0;
    int j = 0,i;  

    for ( i = 0; i < strlen(word); i++) {
        if (i == 0 || word[i] != word[i - 1]) {
            wordc[j++] = word[i];
        } else {
            removedCount++;
        }
    }

    Wordc[j] = '\0';
    return removedCount;
}

int main() {
    char word[MAX_WORD_LENGTH];
    char wordc[MAX_WORD_LENGTH];

    printf("Enter a word: ");
    scanf("%s", word);

    int removedCount = Wordc(word, Wordc);

    printf("Compressed word: %s\n", Wordc);
    printf("number of characters removed: %d\n", removedCount);

    return 0;
}
