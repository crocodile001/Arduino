void setup() {
  Serial.begin(115200);
}

void loop() {
  if(Serial.available()){
    char c = Serial.read();
    int num = Serial.parseInt();
    int i;
    for(i = 0;i < num;i=i+1){
      Serial.println(c);
    }
    Serial.print("i = ");
    Serial.println(i);
  }

}
