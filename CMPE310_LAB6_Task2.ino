int LED1 = 10;
int LED2 = 11;

unsigned long startMillis = 0;
unsigned long currentMillis;
unsigned long startMillis2 = 0;
unsigned long currentMillis2;
const unsigned long period = 1000; // 60 seconds in ms
const unsigned long period2 = 2000; // 60 seconds in ms

bool LED1State = false;
bool LED2State = false;

void blinkLED1() {
  if (currentMillis - startMillis >= period) {
    LED1State = !LED1State;
    digitalWrite(LED1, LED1State);
    startMillis = currentMillis; 
  }

}

void blinkLED2() {
  if (currentMillis2 - startMillis2 >= period2) {
    LED2State = !LED2State;
    digitalWrite(LED2, LED2State);
    startMillis2 = currentMillis2; 
  } 

}

void setup() {
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
}

void loop() {
  currentMillis = millis();
  currentMillis2 = millis();
  // put your main code here, to run repeatedly:
  blinkLED1();
  blinkLED2();
}


