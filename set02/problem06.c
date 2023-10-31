/*06. Write a program to reverse a string.

***Function Declarations***
```c
void input_string(char *a);
void str_reverse(char *str, char *rev_str);
void output(char *a, char *reverse_a);
```*/
#include<stdio.h>
#include<string.h>
void input_string(char *a){
    printf("Enter a string:\n");
    scanf("%s", a);
}
void str_reverse(char *str, char *rev_str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        rev_str[i] = str[length - 1 - i];
    }
    rev_str[length] = '\0';
}
void output(char *a, char *reverse_a) {
    printf("Reversed String: %s\n", reverse_a);
}
int main() {
    char a[50], reverse_a[50];
    input_string(a);
    str_reverse(a, reverse_a);
    output(a, reverse_a);
    return 0;
}