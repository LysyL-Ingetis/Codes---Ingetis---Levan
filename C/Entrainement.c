#include <stdio.h>
#include <string.h>

int somme(int N) { /*Exercice 1*/
    int resultat = 0; /*Variable a renvoyer*/
    for ( int i = 0 ; i<=N ; i++) { /*Variable i évolue entre 0 et N et s'incrémente de 1 jusqu'a N*/
        resultat += i; /*Addition entre l'entier précédent et celui d'après*/
    }
    return resultat; /*renvoi du résultat*/
}

int puissance(int a, int b){
    int i;
    int resultat = 1;
    for (i = 0 ; i<=b ; i++) {
        resultat *= b;
    }
    return resultat;
}

int palindrome(const char* chaine) {
    int taille = strlen(chaine);
    for (int i = 0; i < taille / 2; i++) {
        if (chaine[i] != chaine[taille - 1 - i]) {
            return 0; // C'est pas un palindrome
        }
    }
    return 1; // C'est un palindrome
}

int main() {
    int N;
    int ex;
    Printf("Choisir un nombre : \n");
    scanf("%d", &N);
    Printf("La somme des entiers entre 0 et %d est : %d", N, somme(N));


}