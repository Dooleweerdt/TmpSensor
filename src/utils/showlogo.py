from machine import Pin, I2C
import ssd1306

i2c = I2C(1, sda=Pin(12), scl=Pin(11))
display = ssd1306.SSD1306_I2C(128,32,i2c)
display.fill_rect(0,0,32,32,1)
display.fill_rect(2,2,28,28,0)
display.vline(9,8,22,1)
display.vline(16,2,22,1)
display.vline(23,8,22,1)
display.fill_rect(26,24,2,4,1)
display.text('MicroPython',40,0,1)
display.text('ssd1306',40,12,1)
display.text('OLED 128x32', 40, 24, 1)
display.show()