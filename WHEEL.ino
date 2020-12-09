// HRTE PROJECTS
// CREATED BY UCHITHA INDURANGA XD
#define enA1 10
#define enA2 11
#define M1 1
#define M2 2
#define M3 3
#define M4 4
#define sensor1 8
#define sensor2 9
int robolinefollow1;
int robolinefollow2;
void setup() {
  pinMode(enA1, OUTPUT);
  pinMode(enA2, OUTPUT);
  pinMode(M1, OUTPUT);
  pinMode(M2, OUTPUT);
  pinMode(M3, OUTPUT);
  pinMode(M4, OUTPUT);
  pinMode(sensor1 , INPUT);
  pinMode(sensor2 ,INPUT);
  

}
void loop() {
  int potValue = analogRead(A0);
  int pwmOutput = map(potValue,0,1023,0,255);
 analogWrite (enA1 , pwmOutput);
 analogWrite (enA2 , pwmOutput);
 
 robolinefollow1 = digitalRead(sensor1); 
  if( robolinefollow1 == HIGH)
{  digitalWrite (M1,LOW);
   digitalWrite (M2,HIGH);
}
 else{
 digitalWrite (M2,LOW);
   digitalWrite (M1,HIGH);
}
 robolinefollow2 = digitalRead(sensor2);
if( robolinefollow2 == HIGH)
{
  digitalWrite (M3,HIGH);
  digitalWrite (M4,LOW);

  }
else{
  digitalWrite (M4,HIGH);
  digitalWrite (M3,LOW);

}
}
