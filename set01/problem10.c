#include <stdio.h>
#include <string.h>
void input_two_strings(char *string1, char *string2) {
    printf("Enter the two strings: ");
    scanf("%s %s", string1, string2);
}
int stringcompare(char *string1, char *string2) {
    int len1 = strlen(string1);
    int len2 = strlen(string2);
    int min_len = (len1 < len2) ? len1 : len2;
    for (int i = 0; i < min_len; i++) {
        if (string1[i] < string2[i]) {
            return -1;
        } else if (string1[i] > string2[i]) {
            return 1;
        }
    }
    if (len1 < len2) {
        return -1;
    } else if (len1 > len2) {
        return 1;
    }
    return 0; 
}
void output(char *string1, char *string2, int result) {
    if (result < 0) {
        printf("%s is lesser than %s\n", string1, string2);
    } else if (result > 0) {
        printf("%s is greater than %s\n", string1, string2);
    } else {
        printf("%s is equal to %s\n", string1, string2);
    }
}
int main() {
    char string1[100], string2[100];
    int result;
    input_two_strings(string1, string2);
    result = stringcompare(string1, string2);
    output(string1, string2, result);
    return 0;
}