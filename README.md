# KextTest
This is a small proof of concept for building an OS X device driver Kext

It attempts to load the driver to match current Intel WiFi chips, which is the 
hardware I'd like to support with a real driver in the future.
 
This is pretty much the minimum working example -- I'm not trying for anything
elaborate, just to see whether I can get a driver working.

The idea is to have a driver that loads when matching hardware is present, and
emits some messages to the system log indicating that it found the hardware.