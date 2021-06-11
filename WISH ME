import pyttsx3 #import module

engine = pyttsx3.init('sapi5') #SELECT ENGINE
voices = engine.getProperty('voices') 

engine.setProperty('voice', voices[0].id)

engine.say('HELLO ADAM ,I AM YOUR PC!') #SPEAK COMAMAND
engine.runAndWait()

import win10toast #IMPORT NOTIFIATION MODULE
from win10toast import ToastNotifier
n = ToastNotifier()
n.show_toast("PC", "HELLO ADAM", duration=10)
