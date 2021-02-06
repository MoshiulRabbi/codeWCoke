import pyautogui

loop = 1

running = True

while running:
    pyautogui.typewrite("message")
    pyautogui.press('enter')
    loop += 1
    if loop  >= 50:
        running = False