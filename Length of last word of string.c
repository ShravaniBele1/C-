#include<stdio.h>
#include<string.h>

int lengthOfLastWord(char* s) {
    int count = 0, i, size;

    for (i = strlen(s) - 1; s[i] == ' '; i--);

    for (;i >= 0 &&  s[i] != ' '; i--) {
        count++;
    }
    return count;
}

int main() {
    char s[] = "a";  
    int length = lengthOfLastWord(s);
    printf("length: %d\n", length);  
    return 0;
}

