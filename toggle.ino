int button = 8;
int redLed = 6;
int counter = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(button, INPUT_PULLUP);
  pinMode(redLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  bool button_state;
  button_state = digitalRead(button);
  Serial.print("button: ");
  Serial.println(button_state);
  delay(100);

  if (button_state == LOW){
    Serial.println("executing if");
    Serial.print("button: ");
    Serial.println(button_state);
    counter+=1;
    }
 
  switch(counter){
    case 1:
      digitalWrite(redLed, HIGH);
      break;
    case 2:
      digitalWrite(redLed, LOW);
      counter = 0;
  }
  delay(500);
}


