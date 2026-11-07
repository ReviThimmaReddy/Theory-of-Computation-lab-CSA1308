
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, valid = 1;

    printf("Enter a string over {a,b}: ");
    scanf("%99s", s);

    n = strlen(s);

    if (s[0] != 'a' || s[n - 1] != 'a')
        valid = 0;

    for (i = 0; i < n; i++) {
        if (s[i] != 'a' && s[i] != 'b')
            valid = 0;
    }

    if (valid)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
