# OpenTrackHatireTest

Bug fixing hatire dll that forms part of the main opentrack project.

A pre-compiled windows binary is in the WindowsDll folder. 

The windows binary dll will need to be copied into the opentrack installation dir where there should already be an existing one.
Advise backup the existing one by copying to a temporary folder before placing this one there.

Expected Fixes:
1. Very jumpy data (values going to 0 and then back).

Reported Issue not reproduceable:
1. Issue reported that values not coming through on yaw pitch and roll and that they have to be mapped through the X Y Z translations.
   Could not reproduce this on my system
   

My test:

Teensy reporting Yam pitch roll in the the rot part of the hat frame. Reporting 0 in the other three floats.
produces hat frames around 80fps with serial settings of 115200, 8 data 1 stop no parity and RTS/CTS handshake.
