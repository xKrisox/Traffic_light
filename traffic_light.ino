
int btn1;
int delayTime = 25;

void setup() {

  pinMode(8, INPUT_PULLUP);

  for (byte i = 2; i < 8; i++) {
    pinMode(i, OUTPUT);
  }
  
  start_state();
  
}

void loop() {
  
  btn1 = digitalRead(8);

  if(btn1 == LOW){
    delay(delayTime);

    temporary_state_from_green_to_red();
    delay(500);

    final_state();
    delay(2000);

    temporary_state_from_red_to_green();
    delay(500);

    start_state();
  }
  
}

void start_state(){
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, HIGH);
}

void temporary_state_from_green_to_red(){
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, HIGH);
}

void temporary_state_from_red_to_green(){
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, HIGH);
  digitalWrite(5, LOW);
  digitalWrite(6, HIGH);
  digitalWrite(7, LOW);
}

void final_state(){
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, HIGH);
  digitalWrite(5, HIGH);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
}

