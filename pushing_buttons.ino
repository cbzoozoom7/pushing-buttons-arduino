int button0 = 2;
int button1 = 4;
boolean buttonState0 = false;
boolean buttonState1 = false;
int led0 = 3;
int led1 = 5;
int led2 = 6;
void setup() {
  // put your setup code here, to run once:
pinMode(button0,INPUT);
pinMode(button1,INPUT);
pinMode(led0,OUTPUT);
pinMode(led1,OUTPUT);
pinMode(led2,OUTPUT);
Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
buttonState0 = digitalRead(button0);
buttonState1 = digitalRead(button1);
Serial.print("Button 0 = ");
Serial.print(buttonState0);
Serial.print(" Button 1 = ");
Serial.println(buttonState1);
if(buttonState0 = 0){
  digitalWrite(led0,HIGH);
//  for(int ledBrightness = 0;ledBrightness < 255; ledBrightness++) {
//  analogWrite(led0,ledBrightness);
//  delay(10);
//  }
//  for(int ledBrightness = 255;ledBrightness > 0;ledBrightness--) {
//  analogWrite(led0,ledBrightness);
//  delay(10);
//  }
}
}
