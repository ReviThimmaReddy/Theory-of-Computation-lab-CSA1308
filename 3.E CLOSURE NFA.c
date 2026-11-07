
#include <stdio.h>

int main() {
    int n, m, a, b, i, j, k;
    int e[20][20] = {0};
    int c[20][20] = {0};

    printf("Enter number of states: ");
    scanf("%d", &n);

    printf("Enter number of epsilon transitions: ");
    scanf("%d", &m);

    printf("Enter transitions (from to):\n");
    for (i = 0; i < m; i++) {
        scanf("%d %d", &a, &b);
        e[a][b] = 1;
    }

    for (i = 0; i < n; i++) {
        c[i][i] = 1;
        for (j = 0; j < n; j++)
            c[i][j] = c[i][j] || e[i][j];
    }

    for (k = 0; k < n; k++)
        for (i = 0; i < n; i++)
            for (j = 0; j < n; j++)
                c[i][j] = c[i][j] ||
                          (c[i][k] && c[k][j]);

    for (i = 0; i < n; i++) {
        printf("Epsilon-closure(q%d) = { ", i);
        for (j = 0; j < n; j++)
            if (c[i][j])
                printf("q%d ", j);
        printf("}\n");
    }

    return 0;
}
