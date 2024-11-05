#texte to ascii to binaire


def strToAscii(chaine):
    temp = []
    for caractere in chaine:
        temp.append(ord(caractere))
        
    return temp
        
def asciiToBin(chaine):
    
    binaires = []
    for code in chaine:
        binaires.append(format(code, '08b'))
    return binaires


texte = input("Quelle message a cacher ?")
ascii_codes = strToAscii(texte)
binaire = asciiToBin(ascii_codes)

Str = ''
for i in range(len(binaire)):
    if texte[i] == " " or texte[i] == ".":
        Str += " "
    else:
        Str += binaire[i]
        if texte[i] != ".":
            Str += "."
    

print("Texte :", texte)
print("ASCII :", ascii_codes)
print("Binaire :", Str)