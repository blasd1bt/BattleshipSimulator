//https://anasdalintakam.blogspot.in/
//this code is for sensing ambient light using sparkfuns temt6000 ambient light sensor and arduino

int pinBuzz     = 4;
int x = 70;
int f = 60;
int LPin0 = A0;
int LPin1 = A1;
int LPin2 = A2;
int LPin3 = A3;
// Analog pin for reading sensor data
float light0;
float light1;
float light2;
float light3;
int light_value0;
int light_value1;
int light_value2;
int light_value3;
const int pinLEDR = 9;
const int pinLEDB = 10;
const int pinLEDG = 11;
void setup() {
  Serial.begin(9600);
  pinMode(pinBuzz,OUTPUT);
  pinMode(LPin0, INPUT); //data pin for ambientlight sensor
  pinMode(LPin1, INPUT);
  pinMode(LPin2, INPUT);
  pinMode(LPin3, INPUT);
  pinMode(pinLEDR, OUTPUT);
  pinMode(pinLEDG, OUTPUT);
  pinMode(pinLEDB, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {
  int light_value0 = analogRead(LPin0);
  int light_value1 = analogRead(LPin1);
  int light_value2 = analogRead(LPin2);
  int light_value3 = analogRead(LPin3);
  light0 = light_value0 * 0.0976;// percentage calculation 
  light1 = light_value1 * 0.0976;// percentage calculation
  light2 = light_value2 * 0.0976;// percentage calculation
  light3 = light_value3 * 0.0976;// percentage calculation
 
  Serial.println(light0);
  delay(100);
  Serial.println(light1);
  delay(100);
  Serial.println(light2);
  delay(100);
  Serial.println(light3);
  delay(100);
if (light0 > x){
  analogWrite(pinLEDR, HIGH);
  delay(f);
  analogWrite(pinLEDR, LOW);
    analogWrite(pinLEDR, HIGH);
  delay(f);
  analogWrite(pinLEDR, LOW);
    analogWrite(pinLEDR, HIGH);
  delay(f);
  analogWrite(pinLEDR, LOW);
    analogWrite(pinLEDR, HIGH);
  delay(f);
  analogWrite(pinLEDR, LOW);
    analogWrite(pinLEDR, HIGH);
  delay(f);
  analogWrite(pinLEDR, LOW);
    analogWrite(pinLEDR, HIGH);
  delay(f);
  analogWrite(pinLEDR, LOW);
    analogWrite(pinLEDR, HIGH);
  delay(f);
  analogWrite(pinLEDR, LOW);
    analogWrite(pinLEDR, HIGH);
  delay(f);
  analogWrite(pinLEDR, LOW);
    analogWrite(pinLEDR, HIGH);
  delay(f);
  analogWrite(pinLEDR, LOW);
    analogWrite(pinLEDR, HIGH);
  delay(f);
  analogWrite(pinLEDR, LOW);
  delay(f);
  
  tone(pinBuzz,500,500);
 
}
else if (light1 > x){
  analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
    analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
    analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
    analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
    analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
    analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
    analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
    analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
    analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
  tone(pinBuzz,500,500);
}
else if( light2 > x){
  analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
  analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
  analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
  analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
  analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
  analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
  analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
  analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
  analogWrite(pinLEDG, HIGH);
  delay(f);
  analogWrite(pinLEDG, LOW);
  delay(f);
  tone(pinBuzz, 500, 500);
}
else if( light3 > x){
  analogWrite(pinLEDB, HIGH);
  delay(f);
  analogWrite(pinLEDB, LOW);
  delay(f);
  analogWrite(pinLEDB, HIGH);
  delay(f);
  analogWrite(pinLEDB, LOW);
  delay(f);
  analogWrite(pinLEDB, HIGH);
  delay(f);
  analogWrite(pinLEDB, LOW);
  delay(f);
  analogWrite(pinLEDB, HIGH);
  delay(f);
  analogWrite(pinLEDB, LOW);
  delay(f);
  analogWrite(pinLEDB, HIGH);
  delay(f);
  analogWrite(pinLEDB, LOW);
  delay(f);
  analogWrite(pinLEDB, HIGH);
  delay(f);
  analogWrite(pinLEDB, LOW);
  delay(f);
  analogWrite(pinLEDB, HIGH);
  delay(f);
  analogWrite(pinLEDB, LOW);
  delay(f);
  analogWrite(pinLEDB, HIGH);
  delay(f);
  analogWrite(pinLEDB, LOW);
  delay(f);
  analogWrite(pinLEDB, HIGH);
  delay(f);
  analogWrite(pinLEDB, LOW);
  delay(f);
  analogWrite(pinLEDB, HIGH);
  delay(f);
  analogWrite(pinLEDB, LOW);
  delay(f);
  tone(pinBuzz, 500, 500);
}
else if (light0 < x) {
  analogWrite(pinLEDR, LOW);
}
else if (light1 < x) {
  analogWrite(pinLEDG, LOW);
}
else if (light2 < x) {
  analogWrite(pinLEDG, LOW);
}
else if (light3 < x) {
  analogWrite(pinLEDB, LOW);
}
}
