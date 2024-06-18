int ledPin = 12;
int testPin = 11;
int dataPin = 10;

bool testMode = false;
int testCount = 0;

void setup() {
  // put your setup code here, to run once:
  Serial1.begin(115200);
  SerialUSB.println("Maduino Zero 4G Test Start!");
  
  pinMode(ledPin, OUTPUT);
  pinMode(testPin, INPUT_PULLUP);
  pinMode(dataPin, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
/*
  if(digitalRead(testPin == HIGH)){
    testMode = false;  
  }
  else{
    testMode = true;  
  }
  

  if(testMode){
    digitalWrite(ledPin, HIGH);
    delay(500);
    digitalWrite(ledPin, LOW);
    delay(500);  

    testCount += 1;
    if(testCount = 5){
      testMode = false;
      testCount = 0;  
    }
  }
  else{
    digitalWrite(ledPin, HIGH);
  }
  */

  //Serial.write(digitalRead(testPin));
  SerialUSB.println(digitalRead(testPin));
  delay(300);
}
