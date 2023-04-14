import tkinter as tk

janela = tk.Tk()
janela.geometry('200x200')
def s():
    import pyautogui
    import time

    time.sleep(1)
    pyautogui.press('win')
    time.sleep(2)

    # pesquisar e entrar
    pyautogui.write('cmd')
    pyautogui.press('enter')
    time.sleep(2)

    # pesquisar e executar o comando
    pyautogui.write('shutdown -s -t ')
    time.sleep(1)
    pyautogui.write(caixa.get())
    pyautogui.press('enter')
    pyautogui.click(x=1881, y=14)

botao =tk.Button(text = 'desligamento programado', command= s)

botao.place(relx = 0.15, rely = 0.2)

caixa = tk.Entry()
caixa.place(relx = 0.15, rely = 0.5)


janela.mainloop()
