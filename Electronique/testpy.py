#test avec  multiplexeur
import signal
import time
import explorerhat
import RPi.GPIO as GPIO

#####################
## Pin Definitions ##
#####################
"""Input    | GPIO pin
---------|-----------
Input 1  | GPIO 23
Input 2  | GPIO 22
Input 3  | GPIO 24
Input 4  | GPIO 25
"""
selectPins = [23, 22, 24, 25] # 1 2 3 4 explorerhat.input[0].read()
#selectPins = [6, 12, 13, 16] # 1 2 3 4
#input
GPIO.setmode(GPIO.BCM)
for i in range(4):
    GPIO.setup(selectPins[i], GPIO.IN)
 
#GPIO.setup(6, GPIO.OUT)
#GPIO.output(6, True)
zOutput = 5
#####################
##      setup      ##
#####################
#def selectMuxPin(pin):
#    for i in range(3):
#        if (pin & (1<<i))
#  {
#    if (pin & (1<<i))
#      digitalWrite(selectPins[i], HIGH);
#    else
#      digitalWrite(selectPins[i], LOW);
#  }
    
print("Y0\tY1\tY2\tY3\tY4\tY5\tY6\tY7")
print("---\t---\t---\t---\t---\t---\t---\t---")


#####################
##      loop       ##
#####################
while True:
    #for pin in range(8):
        #selectMuxPin(pin)
        for i in range(3):
            print("%d" %  explorerhat.input[i].read())
            
        time.sleep(5)
        print("----")
print("\n")












