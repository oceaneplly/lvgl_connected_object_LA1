#!/usr/local/bin

#test avec  multiplexeur
import signal
import time
import explorerhat
import RPi.GPIO as GPIO
import Adafruit_ADS1x15
import smbus

selectPins = [6, 12, 13, 16] # 1 2 3 4
inputs=[23, 22, 24, 25] #1 2 3 4

GPIO.cleanup()
#input
GPIO.setmode(GPIO.BCM)



#adc = Adafruit_ADS1x15.ADS1015()
#bus = smbus.SMBus(1)
time.sleep(1)
#####################
##      setup      ##
#####################
GPIO.setup(selectPins[0], GPIO.OUT)
GPIO.setup(selectPins[1], GPIO.OUT)
GPIO.setup(selectPins[2], GPIO.OUT)
GPIO.setup(selectPins[3], GPIO.OUT)

GPIO.setup(inputs[0], GPIO.IN)
GPIO.setup(inputs[1], GPIO.IN)
GPIO.setup(inputs[2], GPIO.IN)
GPIO.setup(inputs[3], GPIO.IN)

GPIO.output(selectPins[0], 0)
GPIO.output(selectPins[1], 0)
GPIO.output(selectPins[2], 0)
GPIO.output(selectPins[3], 0)


inputValue=[0]*4

print("Y0\tY1\tY2\tY3\tY4\tY5\tY6\tY7")
print("---\t---\t---\t---\t---\t---\t---\t---")

"""def selectMuxPin(pin):
    for i in range(3):
        if (pin == i):
            GPIO.output(selectPins[i],1)
        else:
            GPIO.output(selectPins[i],0)"""

#####################
##      loop       ##
#####################
essai=0
try :
    while True:
        essai = essai+1
        #selectMuxPin(pin); # Select one at a time
        print("essai n° %d |" %  essai)
        for i in range(4):
            #inputValue[i] = adc.read_adc(i,gain=1)
            print("----%d |" %  i)
            print("|hat %f |" %  explorerhat.input[i].read())
            print("|gpio %f |" %  GPIO.input(inputs[i]))
        print("| %f |" %  explorerhat.analog.one.read())
        print("| %f |" %  explorerhat.analog.two.read())
        print("| %f |" %  explorerhat.analog.three.read())
        print("| %f |" %  explorerhat.analog.four.read())
            
        #inputValue = bus.read_i2c_block_data(0x48, 0x48)
        # = bus.read_byte_data(0x48, 0)
            #result=0
        #print('| {0:>6} | {1:>6} | {2:>6} | {2:>6} | {3:>6} |'.format(*inputValue))
            
        print("-------------------------")
        time.sleep(3)
except KeyboardInterrupt :
    GPIO.cleanup()
    adc.stop_adc()
 