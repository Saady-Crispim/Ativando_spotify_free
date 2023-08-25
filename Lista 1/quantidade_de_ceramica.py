# Lendo dimensões do salão e da cerâmica
comprimento_sala = float(input("Digite o comprimento do salão em metros: "))
largura_sala = float(input("Digite a largura do salão em metros: "))
comprimento_ceramica = int(input("Digite o comprimento da cerâmica em milímetros: "))
largura_ceramica = int(input("Digite a largura da cerâmica em milímetros: "))

# Calculando número de peças necessárias
pecas_comprimento = int(comprimento_sala * 1000 / comprimento_ceramica)
pecas_largura = int(largura_sala * 1000 / largura_ceramica)
total_pecas = pecas_comprimento * pecas_largura

# Imprimindo resultados
print("Número de peças necessárias para o comprimento:", pecas_comprimento)
print("Número de peças necessárias para a largura:", pecas_largura)
print("Número total de peças necessárias:", total_pecas)
