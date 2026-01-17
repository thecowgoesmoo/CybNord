# CybNord
Arduino-based MIDI drawbars for the Nord Electro 

The Nord Electro in all its variants is the Hammond incarnation for the 21st century, but some versions don't have drawbars :(

I salvaged these drawbars from the guts of a scrapped parlor organ and wired them up to an Arduino Uno.  Right now only 6 of the 9 drawbars are wired up, because the Uno only has 6 ADC channels.  I'll probably add a shield with with switching so the existing ADC xhannels can scan 3 more drawbars.

This project was inspired by an excellent wikihow from from amandaghassaei: https://www.instructables.com/id/Send-and-Receive-MIDI-with-Arduino/

Use the also excellent Hairless MIDI application to read the serial stream from the Tau pedals: http://projectgus.github.io/hairless-midiserial/

**UPDATE**
The v3 Arduino sketch now makes use of a CD74HC4067 analog multiplexer PCB from Amazon to scan 9 drawbars with a single Arduino analog input.  I still need to design a case for this bad boy.  When I do, I'll upload files for laser cutting here.  

<img src="CybNordBack.jpg" alt="rear">
<img src="CybNordFront.jpg" alt="front">
