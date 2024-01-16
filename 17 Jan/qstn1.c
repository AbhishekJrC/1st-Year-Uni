#include <stdio.h>
#include <string.h>


int max(int a, int b) {
    return (a > b) ? a : b;
}


void findLCS(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    int lcs[len1 + 1][len2 + 1];

    
    for (int i = 0; i <= len1; i++) {
        for (int j = 0; j <= len2; j++) {
            if (i == 0 || j == 0) {
                lcs[i][j] = 0;
            } else if (str1[i - 1] == str2[j - 1]) {
                lcs[i][j] = lcs[i - 1][j - 1] + 1;
            } else {
                lcs[i][j] = max(lcs[i - 1][j], lcs[i][j - 1]);
            }
        }
    }

    
    int index = lcs[len1][len2];
    char lcsString[index + 1];
    lcsString[index] = '\0';

    int i = len1, j = len2;
    while (i > 0 && j > 0) {
        if (str1[i - 1] == str2[j - 1]) {
            lcsString[index - 1] = str1[i - 1];
            i--;
            j--;
            index--;
        } else if (lcs[i - 1][j] > lcs[i][j - 1]) {
            i--;
        } else {
            j--;
        }
    }

    
    printf("LCS: %s\n", lcsString);
    printf("LCS Length: %d\n", strlen(lcsString));
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string into an array: ");
    scanf("%s", str1);

    printf("Enter the second string into an array: ");
    scanf("%s", str2);

    findLCS(str1, str2);

    return 0;
}
