import RPi.GPIO as GPIO
import Adafruit_ADS1x15

print("GPIO cleaned")
GPIO.cleanup()
print("adc stopped")
adc = Adafruit_ADS1x15.ADS1015()
adc.stop_adc()