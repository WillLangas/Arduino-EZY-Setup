void setup() {
  Serial.begin(9600); 
}

void loop() {

}

int arraySetup(int lowestPin, int highestPin) {
  for (lowestPin = lowestPin; lowestPin <= highestPin; lowestPin++) {
    pinMode(lowestPin, OUTPUT);
}
  Serial.println("All components are now outputs");  
}

int arrayBlinkTest(int lowestPin, int highestPin) {
  for (lowestPin = lowestPin; lowestPin <= highestPin; lowestPin++) {
    digitalWrite(lowestPin, HIGH);
    delay(250);
    digitalWrite(lowestPin, LOW);
    delay(250);
  }
}

int arrayAllOn(int lowestPin, int highestPin) {
  for (lowestPin = lowestPin; lowestPin <= highestPin; lowestPin++) {
    digitalWrite(lowestPin, HIGH);
    delay(250);
    Serial.println("All components are now on");
  }
}

int arrayAllOff(int lowestPin, int highestPin) {
  for (lowestPin = lowestPin; lowestPin <= highestPin; lowestPin++) {
    digitalWrite(lowestPin, LOW);
    delay(250);
    Serial.println("All components are now off");
  }  
}

int arrayFlash(int lowestPin, int highestPin){
  int i = 1;
  Serial.println("Flashing");
  for(i = 1; i <= 100; i++){
    for(lowestPin = lowestPin; lowestPin <= highestPin; lowestPin++) {
       digitalWrite(lowestPin, HIGH);
       delay(500)
    }
  }
}


