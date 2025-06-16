#include <stdio.h>
char ch[100]= "Ab$CdE#";
int i = 0;
int main() {
    while (ch[i] != 0) {
        if (ch[i] >= 'A' && ch[i] <= 'Z') {
            printf("%c", ch[i] + 1 + 32);
        }
        else if (ch[i] >= 'a' && ch[i] <= 'z') {
            printf("%c", ch[i] + 1 - 32);
        }
        else {
            printf("%c", ch[i]);
        }
        i++;
    }

    return 0;
}
