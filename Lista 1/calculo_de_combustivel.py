# Lendo preços do etanol e gasolina
preco_etanol = float(input("Digite o preço do litro do etanol: "))
preco_gasolina = float(input("Digite o preço do litro da gasolina: "))

# Calculando custo para encher um tanque de 50 litros
custo_etanol = preco_etanol * 50
custo_gasolina = preco_gasolina * 50

# Calculando valor relativo do etanol em relação à gasolina
valor_relativo = preco_etanol / preco_gasolina

# Calculando quantos litros de etanol podem ser comprados com o preço de um litro de gasolina
litros_etanol_com_gasolina = 1 / preco_etanol

# Imprimindo resultados
print("Custo para encher com etanol:", custo_etanol)
print("Custo para encher com gasolina:", custo_gasolina)
print("Valor relativo do etanol em relação à gasolina:", valor_relativo)
print("Litros de etanol com o preço de um litro de gasolina:", litros_etanol_com_gasolina)
