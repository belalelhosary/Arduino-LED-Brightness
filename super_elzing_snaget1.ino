// C++ code
// 
int led=11;
void setup()
{
  pinMode(led, OUTPUT);
}

void loop()
{
 analogWrite(led,0); delay(250);
   analogWrite(led,50); delay(250); 
 analogWrite(led,100); delay(250);
 analogWrite(led,150); delay(250);
 analogWrite(led,200); delay(250);
 analogWrite(led,255); delay(250);
 analogWrite(led,200); delay(250);
 analogWrite(led,150); delay(250);
 analogWrite(led,100); delay(250);
 analogWrite(led,50); delay(250);
 analogWrite(led,0); delay(250);

}