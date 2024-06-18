int rxPIN = 53;
int i=0;

int signalCheckLen = 20;
int signalCount = 0;
int signalSum = 0;

bool signalTrig = false;

void setup()
{
  pinMode(rxPIN, INPUT);
  Serial.begin(9600);
  Serial.println("Start");
}

void loop()
{
/*
  if(digitalRead(rxPIN)){
  
    signalTrig = true;
    signalSum += 1;  
    
    
    Serial.print("rx ON");
    Serial.println(i);
    i = i+1;
  }

  if(signalTrig) {
      signalCount += 1;

      if(digitalRead(rxPIN)){
        signalSum += 1;  
      }
  }

  if(signalCount == signalCheckLen) {

    Serial.println("signalSum :" + String(signalSum));
    
    signalTrig = false;
    signalCount = 0;
    signalSum = 0;
  }
  */

  //Testing raw reciver singal detected
  if(digitalRead(rxPIN)){
    Serial.print("ON");  
  }
  else{
    Serial.print(".");
  }
  
  delay(100);
}
