/*
  * Digital read of 4 buttons and analog read of one potentiometer 
  * Used to create a simple DJ Deck to control 4 sounds with the buttons and the volume with the potentiometer
  *
  * Creator : Evangelos Stamatis 
  * Date    : 18-7-2023  
  */


/*CODE used for an ESP32 DevKitC-V4*/

//potentiometer connected pin
#define POT_PIN 34
//button connected pin
#define BUT_PIN_1 33
#define BUT_PIN_2 25
#define BUT_PIN_3 26
#define BUT_PIN_4 27

int pin_values[2];
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(BUT_PIN_1, INPUT_PULLUP);
  pinMode(BUT_PIN_2, INPUT_PULLUP);
  pinMode(BUT_PIN_3, INPUT_PULLUP);
  pinMode(BUT_PIN_4, INPUT_PULLUP);
  delay(1000);

}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0; i<5; i++){
    if(i == 0){
      pin_values[i] = analogRead(POT_PIN);
    }else if(i == 1){
      pin_values[i] = digitalRead(BUT_PIN_1);
    }else if(i == 2){
      pin_values[i] = digitalRead(BUT_PIN_2);
    }else if(i == 3){
      pin_values[i] = digitalRead(BUT_PIN_3);
    }else if(i == 4){
      pin_values[i] = digitalRead(BUT_PIN_4);
    }
    Serial.print(pin_values[i]);
    Serial.print(" ");
  }
  Serial.println();
  delay(1000);
}
