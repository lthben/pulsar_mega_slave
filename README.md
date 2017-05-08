# pulsar_mega_slave

Code for an Arduino Mega slave.

For a Night Festival 2016 installation at the National Museum of Singapore called 'Into Pulsar' by artist Ryf Zaini.

Three bicycles placed at the bottom of a 'tree'. User cycles any of these to trigger the 28 x ebike wheels on top of the tree to go faster and 4 x 4m led strips to react in brightness and color.

The master mega reads the three hall sensor values and and sends it to the slave via pwm output to an analog input pin on the slave mega. 

The master also controls the 4 strips of LEDs. 

The master and slave mega each only has 15 pwn pins to control 14 motor controllers each. The slave just controls 14 motor controllers.

PWM pins 2, ..., 13, 38, 39, 40
