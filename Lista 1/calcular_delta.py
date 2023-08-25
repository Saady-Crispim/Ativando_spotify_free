import tkinter as tk

# Função para calcular o valor de delta
def calcular_delta():
    try:
        # Obtendo os coeficientes a, b e c a partir das caixas de entrada
        a = float(caixa_a.get())
        b = float(caixa_b.get())
        c = float(caixa_c.get())
        
        # Calculando delta
        delta = b ** 2 - 4 * a * c
        
        # Exibindo o resultado na label
        resultado.config(text="O valor de delta é: " + str(delta))
    except ValueError:
        resultado.config(text="Erro: Insira coeficientes válidos")

# Criando a janela
janela = tk.Tk()
janela.geometry('400x400')
janela.title("Calcular Delta")

# Labels
label_a = tk.Label(janela, text="Coeficiente a:")
label_a.pack()

label_b = tk.Label(janela, text="Coeficiente b:")
label_b.pack()

label_c = tk.Label(janela, text="Coeficiente c:")
label_c.pack()

resultado = tk.Label(janela, text="")
resultado.pack()

# Caixas de entrada para os coeficientes
caixa_a = tk.Entry(janela)
caixa_a.pack()

caixa_b = tk.Entry(janela)
caixa_b.pack()

caixa_c = tk.Entry(janela)
caixa_c.pack()

# Botão para calcular o delta
botao_calcular = tk.Button(janela, text="Calcular Delta", command=calcular_delta)
botao_calcular.pack()

# Iniciando a interface
janela.mainloop()