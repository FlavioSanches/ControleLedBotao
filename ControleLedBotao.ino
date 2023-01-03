#define pinButton 8
#define ledPin 7

void setup() {
  // put your setup code here, to run once:
  pinMode(pinButton, INPUT);
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
  delay(100);

}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(pinButton) == HIGH)
  {
    digitalWrite(ledPin, HIGH);
    Serial.println("Acendendo Led");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    Serial.println("Apagando Led");
  }
  delay(100);

}
