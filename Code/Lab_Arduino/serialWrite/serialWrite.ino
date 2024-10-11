int num;

void setup() {
  Serial.begin(9600);
  num = 0;

}

void loop() {
  Serial.write("hello ");
  Serial.write(num++);
  Serial.write("\n");
  //delay(1000);
}
