#include <stdio.h>
#include <limits.h>


void printParenthesis(int i, int j, int n, int bracket[][n], char *matrixName) {
    if (i == j) {
        printf("%c%d", matrixName[i], i);
        return;
    }

    printf("(");
    printParenthesis(i, bracket[i][j], n, bracket, matrixName);
    printParenthesis(bracket[i][j] + 1, j, n, bracket, matrixName);
    printf(")");
}


void matrixChainOrder(int p[], int n) {
    int m[n][n];
    int bracket[n][n];

    for (int i = 1; i < n; i++) {
        m[i][i] = 0;
    }

    for (int L = 2; L < n; L++) {
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            m[i][j] = INT_MAX;

            for (int k = i; k <= j - 1; k++) {
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j]) {
                    m[i][j] = q;
                    bracket[i][j] = k;
                }
            }
        }
    }

    printf("M Table:\n");
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }

    printf("S Table:\n");
    for (int i = 1; i < n; i++) {
        for (int j = 1; j < n; j++) {
            printf("%d ", bracket[i][j]);
        }
        printf("\n");
    }

    char matrixName[n];
    for (int i = 0; i < n; i++) {
        matrixName[i] = 'A' + i;
    }
    
    printf("Optimal parenthesization: ");
    printParenthesis(1, n - 1, n, bracket, matrixName);
    printf("\n");
    printf("The optimal ordering of the given matrices requires %d scalar multiplications.\n", m[1][n - 1]);
}

int main() {
    int n;
    printf("Enter number of matrices: ");
    scanf("%d", &n);

    int p[n + 1];
    for (int i = 0; i <= n; i++) {
        printf("Enter row and col size of A%d: ", i);
        scanf("%d %d", &p[i], &p[i + 1]);
    }

    matrixChainOrder(p, n + 1);

    return 0;
}
