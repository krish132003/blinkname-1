void setup() {
  // put your setup code here, to run once:
  pinMode(LED_BUILTIN,OUTPUT);

}
void dot()
{
  //pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, HIGH);   // turns  on the LED  
  delay(1000);                       // LED will glow for 1 second
  digitalWrite(LED_BUILTIN, LOW);    // turn off the LED 
}  
 void dash()
{
  digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on 
  delay(3000);                       // LED  glows for 3 seconds
  digitalWrite(LED_BUILTIN, LOW);    // turn off the LED  
}
void loop()
{
/*
As per morse code convention , the space between parts of same letter is one unit while the space between 
letters is three unit so the ratio is taken as 1:3.
*/
int a = 500; //time duration between dot and dashes of same letter is 0.5sec
int b = 1500;//time duration between two letters is 1.5sec
//for Letter K
dash();
delay(a);
dot();
delay(a);
dash();
delay(b);
// for letter R
dot();
delay(a);
dash();
delay(a);
dot();
delay(b);
// for letter I
dot();
delay(a);
dot();
delay(b);
// for letter S
dot();
delay(a);
dot();
delay(a);
dot();
delay(b);
// for letter H 
dot();
delay(a);
dot();
delay(a);
dot();
delay(a);
dot();
delay(b);
}
