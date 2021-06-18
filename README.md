# BASIC IOT HOME AUTOMATION PROJECT USING ESP-32
Hi there,in here i am going to introduce a simple and very basic IOT home automation project using ESP-32.
The components required are :
       1.ESP-32 board
       2.Relay Module
       3.Jumper Wires
       4.220-240 volts LED Lamp
       5.Lamp Holder
       6.A Plug to connect the LED Lamp to the AC socket
       7.Couple Of Wires.
Now lets dive into the project,The software i have used here is Arduino IDE.We will have to download the IDE from their official website.Downloading and installing process is very simple.
Now we will have to setup the Arduino IDE to use ESP-32 board.There's and add-on for the Arduino IDE and its programming language.Now i am gonna tell you how to install the ESP-32 board in Arduino IDE whether you are using Windows,Mac OS X or Linux.
       1.In your Arduino IDE,go to File>Preferences.
       2.Enter https://dl.espressif.com/dl/package_esp32_index.json into the "Additional Board Manager URLs" field.Then click "OK" button.
       3.Open the Boards Manager.Go to Tools>Board>Boards Manager.
       4.Search for ESP-32 and press install button for the "ESP-32 by Espressif Systems".
That's it.It should be installed after a few seconds.
I have provided the code in my repository for the reference.Connect the ESP-32 with your Laptop/Desktop using the USB cable.Before hitting the upload button check if the right board and port is selected in Arduino IDE.After verifying hit the upload button in the IDE.
ESP-32 opeates in the range of 3.3-5 volts so we can consider conneting the board with the mobile charger or the laptop to power it.
We will have to use a lamp holder to setup and light the LED.First of all we will have to set up the Relay Module.Basically Relay Modules are used to convert the high voltages to low voltages.Here we require the 220 volts to be converted into the 3.3-5 volts which is ideal for the operation of ESP-32 board.
The lamp holder has two wires connected to it pick one of them and connect it to COMMON of Relay Module.The other wire of the lamp holder is connected to the plug which is connected to AC supply.The other wire of the plug which is connected to AC is connected to NO(normally open) of the Relay Module.
Using the Jumper Wires connect Vin and GND of the ESP-32 board and Relay Module and connect GPIO26 of ESP-32 to IN1 of Relay Module.Connect the Plug to the AC socket and connect the USB cable to ESP-32's serial port to power ESP-32 board and Relay Module.
Verify the output based on the code scripted.The bulb switches ON and OFF all on its own.
We are absolutely free to use any GPIO of ESP-32 but we must make sure that the changes are reflected in the code.
