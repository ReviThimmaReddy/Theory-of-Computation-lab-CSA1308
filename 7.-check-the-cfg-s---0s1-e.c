
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, zeros = 0, ones = 0, valid = 1;

    printf("Enter a string: ");
    scanf("%99s", s);

    n = strlen(s);

    for (i = 0; i < n && s[i] == '0'; i++)
        zeros++;

    while (i < n && s[i] == '1') {
        ones++;
        i++;
    }

    if (i != n || zeros != ones)
        valid = 0;

    if (valid)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
