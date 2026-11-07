
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, found = 0, valid = 1;

    printf("Enter a binary string: ");
    scanf("%99s", s);

    n = strlen(s);

    for (i = 0; i < n; i++) {
        if (s[i] != '0' && s[i] != '1')
            valid = 0;
    }

    for (i = 0; i <= n - 3; i++) {
        if (s[i] == '1' &&
            s[i + 1] == '0' &&
            s[i + 2] == '1') {
            found = 1;
            break;
        }
    }

    if (valid && found)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
