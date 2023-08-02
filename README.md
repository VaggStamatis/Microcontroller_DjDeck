| Supported Microcontrollers| ESP32 DevKitC-v4 | Arduino Uno |
| ------------------------- | ---------------- | ----------- |

| Builded on Microcontrollers| ESP32 DevKitC-v4 | Arduino Uno |
| -------------------------- | ---------------- | ----------- |


# Dj Deck Project Description
This project combines the use of a `microcontroller` and the `Pure Data` application to give us a way to activate any sound by pressing a button. 

By utilizing 4 buttons and a potentiometer connected to either an `Esp32 development kit` or an `Arduino Uno` and the functionalities of the `Pure Data` application we create a simple *DJ Deck*. Pressing a button coresponds to a different sound that we can play through the Pure Data project. Moving the potentiometers nob gives us access to a anlog input that can be used to adjust the volume or to activate any function that requires an analog input. Having a simple sequencer running in parallel on Pure Data we can create different beats. 


## Folder Descriptions 
- src 
    - PureData : contains the .pd file and the .wavs for the output sounds 
    - code
        - ArduinoUnoDjDeck : contains the .ino file to use for an Arduino
        - Esp32DjDeck      : contains the .ino file to use for an ESP32
- phots : contains the wiring of an ESP32 or an Arduino 


## Wiring 
- Wiring of an ESP32 to use as a DjDeck  
Using the pin _34_ for the analog input and the pins 27,26,25,33 for the digital inputs
<img src="https://github.com/VaggStamatis/Microcontroller_DjDeck/blob/main/photos/DjDeck.png" width="600">

- Wiring of an Arduino to use as a DjDeck  
Using the pin _A0_ for the analog input and the pins 10,11,12,13 for the digital inputs 
<img src="https://github.com/VaggStamatis/Microcontroller_DjDeck/blob/main/photos/ArduinoDjDeck.png" width="600"> 

## Creator 
**Evangelos Stamatis** 
email : evanstamatis@gmail.com
Feel free to contanct me if you want any help and/or further explanation on the project 🙂