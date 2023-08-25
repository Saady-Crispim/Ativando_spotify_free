#def cria uma função, a palavra seguntedesigna um nome a função
## o nome da nção é uma variavel para dar fncionalidade a outra função

def hexa(hexadecimal):
    decimal = int(hexadecimal, 16)
    octal = oct(decimal)
    binario = bin(decimal)
    return decimal, octal, binario

# Solicitar números hexadecimais ao usuário
hexadecimais = input("Insira os números hexadecimais separados por vírgula: ")
#split designa uma sepração de strings com um caracter determinado
hexadecimais = hexadecimais.split(',')

for hex_str in hexadecimais:
    #try
    try:
        hex_numero = hex_str.strip()
        decimal, octal, binario = hexa(hex_numero)
        print(f"\nHexadecimal {hex_numero}:")
        print(f"Decimal: {decimal}")
        print(f"Octal: {octal}")
        print(f"Binário: {binario}")
    except ValueError:
        print(f"{hex_str.strip()} não é um número hexadecimal válido.")
