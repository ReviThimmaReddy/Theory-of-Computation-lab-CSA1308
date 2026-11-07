
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, n, left = 0, right = 0, valid = 1;

    printf("Enter a string: ");
    scanf("%99s", s);

    n = strlen(s);
    i = 0;

    while (i < n && s[i] == '0') {
        left++;
        i++;
    }

    while (i < n && s[i] == '1')
        i++;

    while (i < n && s[i] == '0') {
        right++;
        i++;
    }

    if (i != n || left != right)
        valid = 0;

    if (valid)
        printf("String Accepted\n");
    else
        printf("String Rejected\n");

    return 0;
}
