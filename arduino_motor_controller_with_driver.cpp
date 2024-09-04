// Driver enable 1 pin
int EN_=2;

// Driver in_1 pin
  int in1=8;
// Driver in_2 pin
  int in2=9;

  void setup() {
  // pin_modes declearation 
    pinMode(in1, OUTPUT);
    pinMode(EN_, OUTPUT);
    pinMode(in2, OUTPUT);


  }

  void loop() {
    digitalWrite(in1, LOW),
    digitalWrite(in2,HIGH);
    analogWrite(EN_, 200);
    delay(30);

    digitalWrite(in1, HIGH);
    digitalWrite(in2, HIGH);
    delay(2000);

  }
