import serial
import pyautogui

ArduinoSerial = serial.Serial('com12, 9600')
while 1:
    
    incoming_data = str (ArduinoSerial.readline()) 
                            
    if 'volup' in incoming_data:
        pyautogui.hotkey('fn', 'f12')
    
    if 'voldown' in incoming_data:
        pyautogui.hotkey('fn', 'f11')
        
    if 'play/pause' in incoming_data:
        pyautogui.typewrite(['space'], 0.2)
        
    if 'sleep/wake' in incoming_data:
        pyautogui.hotkey('alt', 'f4')
        
    if 'next' in incoming_data:                   
        pyautogui.hotkey('ctrl', 'pgdn')          
        
    if 'prev' in incoming_data:                
        pyautogui.hotkey('ctrl', 'pgup')
        
    incoming_data = ""                  