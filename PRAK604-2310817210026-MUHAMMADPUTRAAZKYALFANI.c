#include <stdio.h>
#include <string.h>

void eve(char code[], char message[]) {
    for (int i = 0; i < strlen(code); i++) {
        if (code[i] == ' ' && message[i] == ' ') {
            message[i] = ' ';
        } else if (code[i] == message[i]) {
            message[i] = '*';
        } else {
            message[i] = '#';
        }
    }
}

int main() {
    char code[200], message[200];

    gets(code);
    code[strcspn(code, "\n")] = '\0';

    gets(message);
    message[strcspn(message, "\n")] = '\0';

    if(strlen(code) != strlen(message)) {
        printf("\nPanjang kalimat berbeda, pesan palsu \n");
        return 0;
    }

    eve(code, message);

    int star = 0, hashtag = 0;

    for(int i = 0; i < strlen(code); i++) {
        if(message[i] == '*') {
            star++;
        } else if(message[i] == '#') {
            hashtag++;
        }
    }

    printf("\n");
    printf("%s\n",message);
    printf("* = %d\n", star);
    printf("# = %d\n", hashtag);

    if (star >= hashtag) {
        printf("Pesan Asli\n");
    } else {
        printf("Pesan Palsu\n");
    }

    return 0;
}