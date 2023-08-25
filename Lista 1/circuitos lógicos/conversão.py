def decimal_to_other_bases(decimal):
    hexadecimal = hex(decimal)
    octal = oct(decimal)
    binario = bin(decimal)
    return hexadecimal, octal, binario

# Solicitar números ao usuário
numeros = input("Insira os números separados por vírgula: ")
numeros = numeros.split(',')

for numero_str in numeros:
    try:
        numero = int(numero_str.strip())
        hexadecimal, octal, binario = decimal_to_other_bases(numero)
        print(f"\nDecimal {numero}:")
        print(f"Hexadecimal: {hexadecimal}")
        print(f"Octal: {octal}")
        print(f"Binário: {binario}")
    except ValueError:
        print(f"{numero_str.strip()} não é um número válido.")
