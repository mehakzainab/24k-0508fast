#include <stdio.h>

int main() {
    char *transactions[] = {"eat", "tea", "tan", "ate", "nat", "bat"};
    int grouped[6] = {0};
    int n = 6;

    printf("Grouped Anagrams:\n");
       int i,j,k;
    for ( i = 0; i < n; i++) {
        if (grouped[i] == 1) continue;

        printf("[");
       
        grouped[i] = 1;

      
        int count[26] = {0};
        for ( k = 0; transactions[i][k] != '\0'; k++) {
            count[transactions[i][k] - 'a']++;
        }

        
        printf("'%s'", transactions[i]);

       
        for ( j = i + 1; j < n; j++) {
            if (grouped[j] == 0) { 
                int temp_count[26] = {0};

                
                for ( k = 0; transactions[j][k] != '\0'; k++) {
                    temp_count[transactions[j][k] - 'a']++;
                }

                
                int is_anagram = 1;
                for ( k = 0; k < 26; k++) {
                    if (count[k] != temp_count[k]) {
                        is_anagram = 0; 
                        break;
                    }
                }

                if (is_anagram) {
                    printf(", '%s'", transactions[j]);
                    grouped[j] = 1;
                }
            }
        }
        printf("]\n"); 
    }

    return 0;
}

