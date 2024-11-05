#include <stdio.h>

void cesar(char message[], int decal) {
    int i = 0;

    while (message[i] != '\0') {
        if (message[i] >= 'a' && message[i] <= 'z') {
            message[i] = 'a' + (message[i] - 'a' + decal) % 26;
        } else if (message[i] >= 'A' && message[i] <= 'Z') {
            message[i] = 'A' + (message[i] - 'A' + decal) % 26;
        }
        i++;
    }
}

int main() {
    char message[100];
    int decal = 3;

    printf("Entrez le message à encrypter :\n");
    scanf("%s", message);

    cesar(message, decal);

    printf("Le message encrypté est : %s\n", message);

    return 0;
}