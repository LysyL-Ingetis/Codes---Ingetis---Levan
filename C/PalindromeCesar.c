#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int palindrome(const char* chaine) {
    int taille = strlen(chaine);
    char inverser[100];
    for (int i = 0; i < taille; i++) {
        inverser[i] = chaine[taille - 1 - i];
    }
    inverser[taille] = '\0';
    return strcmp(chaine, inverser) == 0;
}

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

int main()
{

    char message[100];
    int decal = 3;
    printf("Entrez un message à encrypter avec le code César :\n");
    scanf("%s", message);
    cesar(message, decal);
    printf("Le message chiffré est : %s\n", message);
    if (palindrome(message)) {
        printf("Le message chiffré \"%s\" est un palindrome.\n", message);
    } else {
        printf("Le message chiffré \"%s\" n'est pas un palindrome.\n", message);
    }

    return 0;
}

