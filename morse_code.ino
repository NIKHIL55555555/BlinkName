//int lightPin = 12;

void dot() {
  digitalWrite(LED_BUILTIN, HIGH);
  delay(600);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}

void line(){
   digitalWrite(LED_BUILTIN, HIGH);
  delay(1500);
  digitalWrite(LED_BUILTIN, LOW);
  delay(500);
}


void setup() {
 pinMode(LED_BUILTIN, OUTPUT);
}


void loop(){
  //( n = - .)
  line();
  dot();

  delay(800);

  //(i = ..)
  dot();
  dot();
  delay(800);

  //(k = - . -)
  line();
  dot();
  line();
  delay(800);

  //(h = . . . . )

   dot();
   dot();
   dot();
   dot();
   delay(800);

   //(i = . .)
   
   dot();
   dot();
   delay(800);

   //(l = . - . .)
   dot();
   line();
   dot();
   dot();
   delay(800);
}
    
