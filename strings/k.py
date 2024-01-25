def contar_palavras(frase):
    palavras = frase.split()

    return len(palavras)

def contar_caracteres(frase):
    caracteres = [c for c in frase if not c.isspace()]
    
    return len(caracteres)

frase=input()
numero_de_palavras = contar_palavras(frase)
numero_de_letras= contar_caracteres(frase)


print(numero_de_palavras)
print(numero_de_letras)