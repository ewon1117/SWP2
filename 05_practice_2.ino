#define PIN_LED 7
void setup() {
  pinMode(PIN_LED, OUTPUT);
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(PIN_LED, 1);
  delay(1000);
  int cnt=0, toggle=0;
  while(1){
    digitalWrite(PIN_LED, toggle);
    delay(100);
    toggle=!toggle;
    cnt++;
    if(cnt==5) break;
  }
}
