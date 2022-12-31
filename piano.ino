#define Buzzer 12

const int VALUE_THRESHOLD = 20;

int TOUCH_SENSOR_VALUE_1;
int TOUCH_SENSOR_VALUE_2;
int TOUCH_SENSOR_VALUE_3;
int TOUCH_SENSOR_VALUE_4;
int TOUCH_SENSOR_VALUE_5;

void setup(){
  
  pinMode(Buzzer, OUTPUT);
  Serial.begin(115200);
  delay(2000);
  digitalWrite(Buzzer, LOW);
}

void loop(){
  
  TOUCH_SENSOR_VALUE_1 = touchRead(T8);
  TOUCH_SENSOR_VALUE_2 = touchRead(T7);
  TOUCH_SENSOR_VALUE_3 = touchRead(T9);
  TOUCH_SENSOR_VALUE_4 = touchRead(T4);
  TOUCH_SENSOR_VALUE_5 = touchRead(T6);
  
  Serial.print(TOUCH_SENSOR_VALUE_1);
  Serial.print(",");
  Serial.print(TOUCH_SENSOR_VALUE_2);
  Serial.print(",");
  Serial.print(TOUCH_SENSOR_VALUE_3);
  Serial.print(",");
  Serial.print(TOUCH_SENSOR_VALUE_4);
  Serial.print(",");
  Serial.print(TOUCH_SENSOR_VALUE_5);
  Serial.println(",");
  delay(500);
  
  if(TOUCH_SENSOR_VALUE_1 < VALUE_THRESHOLD){
    for(int i=0; i<2; i++){
      digitalWrite(Buzzer, HIGH);
      delay(100);
      digitalWrite(Buzzer, LOW);
      delay(100);
    }
  }
  if(TOUCH_SENSOR_VALUE_2 < VALUE_THRESHOLD){
     for(int i=0; i<5; i++){
      digitalWrite(Buzzer, HIGH);
      delay(50);
      digitalWrite(Buzzer, LOW);
      delay(50);
    }
  }
  if(TOUCH_SENSOR_VALUE_3 < VALUE_THRESHOLD){
    for(int i=0; i<8; i++){
      digitalWrite(Buzzer, HIGH);
      delay(25);
      digitalWrite(Buzzer, LOW);
      delay(25);
    }
  }
  if(TOUCH_SENSOR_VALUE_4 < VALUE_THRESHOLD){
     for(int i=0; i<11; i++){
      digitalWrite(Buzzer, HIGH);
      delay(12);
      digitalWrite(Buzzer, LOW);
      delay(12);
    }
  }
  if(TOUCH_SENSOR_VALUE_5 < VALUE_THRESHOLD){
    for(int i=0; i<14; i++){
      digitalWrite(Buzzer, HIGH);
      delay(6);
      digitalWrite(Buzzer, LOW);
      delay(6);
    }
  }
  else{
    digitalWrite(Buzzer, LOW);
  }
}