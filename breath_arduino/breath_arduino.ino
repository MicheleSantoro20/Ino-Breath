int i=0;

void setup() {
  // put your setup code here, to run once:
  pinMode (11, OUTPUT);
  Serial.begin (9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (i < 60) {
    analogWrite (11,i);
    i++; 
    delay (40);
    Serial.println (i);
  }

  while(i>0)
  {
    analogWrite(11,i);
    i--;
    delay(40);
    Serial.println (i);
  }

  i=0;
}
