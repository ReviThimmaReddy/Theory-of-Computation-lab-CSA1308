
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, valid = 1;

    printf("Enter a binary string: ");
    scanf("%99s", s);

    n = strlen(s);

    if (s[0] != '0' || s[n - 1] != '1')
        valid = 0;

    for (i = 0; i < n; i++) {
        if (s[i] != '0' && s[i] != '1')
            valid = 0;
    }

    if (valid)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
