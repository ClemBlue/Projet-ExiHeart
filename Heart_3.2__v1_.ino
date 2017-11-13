
const int ledHeart[10] = {1,2,3,4,5,6,7,8,9,10};
/*ledHeart[0]=1;
ledHeart[1]=2;
ledHeart[2] = 3;
ledHeart[3] = 4;
ledHeart[4] = 5;
ledHeart[5] = 6;
ledHeart[6] = 7;
ledHeart[7] = 8;
ledHeart[8] = 9;
ledHeart[9] = 10;*/

void setup() 
{
  
  pinMode(ledHeart[0], OUTPUT);
  pinMode(ledHeart[1], OUTPUT);
  pinMode(ledHeart[2], OUTPUT);
  pinMode(ledHeart[3], OUTPUT);
  pinMode(ledHeart[4], OUTPUT);
  pinMode(ledHeart[5], OUTPUT);
  pinMode(ledHeart[6], OUTPUT);
  pinMode(ledHeart[7], OUTPUT);
  pinMode(ledHeart[8], OUTPUT);
  pinMode(ledHeart[9], OUTPUT);

  digitalWrite(ledHeart[0], LOW);
  digitalWrite(ledHeart[1], LOW);
  digitalWrite(ledHeart[2], LOW);
  digitalWrite(ledHeart[3], LOW);
  digitalWrite(ledHeart[4], LOW);
  digitalWrite(ledHeart[5], LOW);
  digitalWrite(ledHeart[6], LOW);
  digitalWrite(ledHeart[7], LOW);
  digitalWrite(ledHeart[8], LOW);
  digitalWrite(ledHeart[9], LOW);
  
}

void loop() 
{
  digitalWrite(ledHeart[0], HIGH);
  digitalWrite(ledHeart[1], HIGH);
  digitalWrite(ledHeart[2], HIGH);
  digitalWrite(ledHeart[3], HIGH);
  digitalWrite(ledHeart[4], HIGH);
  digitalWrite(ledHeart[5], HIGH);
  digitalWrite(ledHeart[6], HIGH);
  digitalWrite(ledHeart[7], HIGH);
  digitalWrite(ledHeart[8], HIGH);
  digitalWrite(ledHeart[9], HIGH);
  delay(250);

  digitalWrite(ledHeart[0], LOW);
  digitalWrite(ledHeart[1], LOW);
  digitalWrite(ledHeart[2], LOW);
  digitalWrite(ledHeart[3], LOW);
  digitalWrite(ledHeart[4], LOW);
  digitalWrite(ledHeart[5], LOW);
  digitalWrite(ledHeart[6], LOW);
  digitalWrite(ledHeart[7], LOW);
  digitalWrite(ledHeart[8], LOW);
  digitalWrite(ledHeart[9], LOW);
  delay(250);

  digitalWrite(ledHeart[0], HIGH);
  digitalWrite(ledHeart[1], HIGH);
  digitalWrite(ledHeart[2], HIGH);
  digitalWrite(ledHeart[3], HIGH);
  digitalWrite(ledHeart[4], HIGH);
  digitalWrite(ledHeart[5], HIGH);
  digitalWrite(ledHeart[6], HIGH);
  digitalWrite(ledHeart[7], HIGH);
  digitalWrite(ledHeart[8], HIGH);
  digitalWrite(ledHeart[9], HIGH);
  delay(250);

  digitalWrite(ledHeart[0], LOW);
  delay(100);
  digitalWrite(ledHeart[1], LOW);
  delay(100);
  digitalWrite(ledHeart[2], LOW);
  delay(100);
  digitalWrite(ledHeart[3], LOW);
  delay(100);
  digitalWrite(ledHeart[4], LOW);
  delay(100);
  digitalWrite(ledHeart[5], LOW);
  delay(100);
  digitalWrite(ledHeart[6], LOW);
  delay(100);
  digitalWrite(ledHeart[7], LOW);
  delay(100);
  digitalWrite(ledHeart[8], LOW);
  delay(100);
  digitalWrite(ledHeart[9], LOW);
  delay(250);

  digitalWrite(ledHeart[0], HIGH);
  delay(100);
  digitalWrite(ledHeart[1], HIGH);
  delay(100);
  digitalWrite(ledHeart[2], HIGH);
  delay(100);
  digitalWrite(ledHeart[3], HIGH);
  delay(100);
  digitalWrite(ledHeart[4], HIGH);
  delay(100);
  digitalWrite(ledHeart[5], HIGH);
  delay(100);
  digitalWrite(ledHeart[6], HIGH);
  delay(100);
  digitalWrite(ledHeart[7], HIGH);
  delay(100);
  digitalWrite(ledHeart[8], HIGH);
  delay(100);
  digitalWrite(ledHeart[9], HIGH);
  delay(250);
}
