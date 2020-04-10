# esp32-arduino-port
A port of arduino-esp32 that builds with ESP-IDF v4.1.
https://github.com/espressif/arduino-esp32/blob/master/docs/esp-idf_component.md

Update April 5, 2020, 18:48 EST
Got it working with this example:
https://www.youtube.com/watch?v=kq2RLz65_w0

Able to play music from DFPlayer now, but for some reason need to unplug and replug in my speaker each time else music is overrun with static. -- this was my bad.  I plugged the DFPlayer VCC into my ESPDuino-32 3V port; switched to 5V and plugged ESPDuino-32 USB directly into laptop USB...all fine now except for speaker boom, which is more a wiring issue I will fix.
