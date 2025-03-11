import tkinter as tk
import os
import threading
import time

def shutdown():
    global countdown_active
    countdown_active = True
    for i in range(60, 0, -1):  # 60-second countdown
        if not countdown_active:
            return
        label.config(text=f"Shutting down in {i} seconds...")
        time.sleep(1)
    os.system("shutdown /s /f /t 0")

def cancel_shutdown():
    global countdown_active
    countdown_active = False
    os.system("shutdown /a")
    label.config(text="Shutdown Canceled!")

def start_shutdown_thread():
    thread = threading.Thread(target=shutdown)
    thread.start()

# Create GUI
root = tk.Tk()
root.title("Shutdown Tool")
root.geometry("300x150")

label = tk.Label(root, text="Click Shutdown to start countdown", font=("Arial", 12))
label.pack(pady=10)

shutdown_btn = tk.Button(root, text="Shutdown", command=start_shutdown_thread, bg="red", fg="white")
shutdown_btn.pack(pady=5)

cancel_btn = tk.Button(root, text="Cancel", command=cancel_shutdown, bg="green", fg="white")
cancel_btn.pack(pady=5)

root.mainloop()
