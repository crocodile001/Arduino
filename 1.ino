void setup() {
  Serial.begin(115200);
}

void loop() {
  if(Serial.available()){
    int num = Serial.parseInt();
    int a,b;
    //Serial.print(num);
    switch(num){
      case 1:
        a = Serial.parseInt();
        b = Serial.parseInt();
        Serial.print("a + b = ");
        Serial.println(a+b);
        break;
      case 2:
        a = Serial.parseInt();
        b = Serial.parseInt();
        Serial.print("a - b = ");
        Serial.println(a-b);
        break;
      case 3:
        a = Serial.parseInt();
        b = Serial.parseInt();
        Serial.print("a * b = ");
        Serial.println(a*b);
        break;
      case 4:
        a = Serial.parseInt();
        b = Serial.parseInt();
        Serial.print("a / b = ");
        Serial.println(a/b);
        break;
      default:
        Serial.println("Invalid input");
    }
  }

}
