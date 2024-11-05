CS = int(input('Code césar de combien ?'))
M = input('Quel est le message en majuscule ?')

def chiffre(CS, M):
    resultat = ''
    for i in range(len(M)):
        cible = ord(M[i]) + CS
        if cible < 90:
            resultat += chr(cible)
        else:
            CS1 = 90 - ord(M[i])
            CS2 = CS - CS1
            resultat += chr(ord(M[i] + CS2))
    return resultat

print(chiffre(CS, M))