PT2313
======

A simple library to drive Audio Chip **PT2313L** or **PT2313E**<br>
This is a simple library to drive Princeton Technology Corp. chip PT2313, a stereo audio chip with 3 stereo input and loudness,volume,bass,treble and 2 stereo outs.
The library let you access all features by using I2C protocol with Arduino o Teensy 2, 3 ,3.1, LC MCU's and all Energia supported MCU's. This chip works only at 100Khz so don't try to force it at 400 or it will not work.<br>
I've done this to create a stereo amped speakers I had at home.

This chip communicate via I2C at 100Khz, not more!

For connections, refer to datasheet included in docs folder. Have fun!

**Warning**: Energia support just as it's basic stage and not tested. It compiles but doesn't mean that will works! So please wait I test it (and prolly fix) before use it with Energia MCU's!<br>
