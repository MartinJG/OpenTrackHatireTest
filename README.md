# OpenTrackHatireTest

Bug fixing hatire dll that forms part of the main opentrack project.

A pre-compiled windows binary is in the WindowsDll folder. 

The windows binary dll will need to be copied into the opentrack installation dir where there should already be an existing one.
Advise backup the existing one by copying to a temporary folder before placing this one there.

Expected Fixes:

1. Very jumpy data (values going to 0 and then back).

2. Issue of mis-mapped / cross mapped axis values is believed to have been caused by the wildly fluctuating data causing some confusion in 
processing the data. It disappeared when issue 1 was corrected.

3. Timout when sending command. This is believed to be an issue with QT and windows. The call that waits for a response does not belive it gets one, even though I can see data hitting teh serial port. This has been removed from windows builds and the misreported error should be gone.

New Stuff:

1. Request for diagnostics. In the about box, there is now a new checkbox to enable logging. When enabled, once the plugin is started, diagnostics (mainly serial data in HEX format) will be written to a file called HATDiagnostics.txt in the Opentrack installtion folder. Please be aware that it ALWAYS appends to the file so it will just get biggger. Even if you stop and start the diagnostics, it will still append to the original file. So, turn it off when you aren't using it!!! I also don't monitor the diagnostic file size, so it could theoretically get stupidly big. You must delete the file yourself when you are done with it.

Future Plans:
1. Am thinking of an optional mode where instead of the current HAT Frames, a modified one will be sent to contain gyro, accelerometer and magnetometer data, the Hat plugin would then do sensor fusion itself. This is a longer term proposition.
   

My test:

Teensy reporting Yaw pitch roll in the the .Rot part of the hat frame. Reporting 0 in the other three floats.
produces hat frames around 80fps with serial settings of 115200, 8 data 1 stop no parity and RTS/CTS handshake.

Helpers:

Q: I want to send serial data to the Hatire plugin from my aurduino, what is the hat frame format?

A: Easiest answer I can gibe is to cut and past my Hat Structure from my arduino code for you. I will probably post my entire sketch here soon anyway:



struct Hatire

{

  int16_t Begin;   //2 bytes ALWAYS 0xAAAA
  
  uint16_t Code;  //2 bytes (<=1000 - all normal, 3000 - initialising, >9000 some kind of error.)
  
  float Rot[3];       //3x4 bytes (float values for Yaw, Pitch, Roll)
  
  float Trans[3];   //3x4 bytes (float values for X, Y and Z)
  
  int16_t End;      //2 bytes ALWAYS 0x5555
  
}; // total of 30 bytes to send serially



