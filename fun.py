import pyautogui
import time

comments = [
    "This is atik bhai !"
]

time.sleep(2)

for i in range(400):
    pyautogui.typewrite(comments[i % len(comments)])
    pyautogui.typewrite("\n")
    time.sleep(0.9) 