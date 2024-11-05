int palindrome(const char* chaine) {
    int taille = strlen(chaine);
    for (int i = 0; i < taille / 2; i++) {
        if (chaine[i] != chaine[taille - 1 - i]) {
            return 0; // Ce n'est pas un palindrome
        }
    }
    return 1; // C'est un palindrome
}

int main() 
{
    char chaine[100];
    printf("Entrez une chaîne à vérifier si elle est un palindrome : ");
    scanf("%s", chaine);
    if (palindrome(chaine)) {
        printf("\"%s\" est un palindrome.\n", chaine);
    } else {
        printf("\"%s\" n'est pas un palindrome.\n", chaine);
    }
}