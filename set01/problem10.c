#include <stdio.h>
void input_str(char *string1, char *string2) {
    printf("Enter the two strings: ");
    scanf("%s %s", string1, string2);
}
int strcmp(char *string1, char *string2) {
    
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
    input_str(string1, string2);
    result = strcmp(string1, string2);
    output(string1, string2, result);
    return 0;
}