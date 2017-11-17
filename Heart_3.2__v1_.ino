
const int ledHeart[10] = {1,2,3,4,5,6,7,8,9,10};
const int wait[6] = {10, 50, 100, 250, 500, 1000};

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
  /*Battement de coeur normal*/
  /* digitalWrite(ledHeart[0], HIGH);
  digitalWrite(ledHeart[1], HIGH);
  digitalWrite(ledHeart[2], HIGH);
  digitalWrite(ledHeart[3], HIGH);
  digitalWrite(ledHeart[4], HIGH);
  digitalWrite(ledHeart[5], HIGH);
  digitalWrite(ledHeart[6], HIGH);
  digitalWrite(ledHeart[7], HIGH);
  digitalWrite(ledHeart[8], HIGH);
  digitalWrite(ledHeart[9], HIGH);
  delay(wait[2]);

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
  delay(wait[2]);

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
  delay(wait[5]);*/

 /*Chenille Numéro 1*/
 /*digitalWrite(ledHeart[0], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[1], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[2], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[3], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[4], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[5], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[6], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[7], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[8], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[9], LOW);
  delay(wait[1]);

  digitalWrite(ledHeart[0], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[1], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[2], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[3], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[4], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[5], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[6], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[7], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[8], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[9], HIGH);
  delay(wait[1]);*/

  /*CHENILLE Numéro 2*/
  /*digitalWrite(ledHeart[0], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[0], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[1], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[1], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[2], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[2], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[3], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[3], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[4], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[4], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[5], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[5], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[6], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[6], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[7], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[7], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[8], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[8], LOW);
  delay(wait[1]);
  digitalWrite(ledHeart[9], HIGH);
  delay(wait[1]);
  digitalWrite(ledHeart[9], LOW);
  delay(wait[2]);*/


    /*BATEMENT DE COEUR*/
      /* digitalWrite(ledHeart[0], HIGH);
       digitalWrite(ledHeart[1], HIGH);
       digitalWrite(ledHeart[2], HIGH);
       digitalWrite(ledHeart[3], HIGH);
       digitalWrite(ledHeart[4], HIGH);
       digitalWrite(ledHeart[5], HIGH);
       digitalWrite(ledHeart[6], HIGH);
       digitalWrite(ledHeart[7], HIGH);
       digitalWrite(ledHeart[8], HIGH);
       digitalWrite(ledHeart[9], HIGH);
       delay(wait[2]);
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
       delay(wait[2]);
       
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
       delay(wait[2]);
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
       delay(wait[2]);
       delay(wait[4]);*/

       /*Allumer les LEDS deux par deux*/
       /*digitalWrite(ledHeart[0], HIGH);
       delay(wait[1]);
       digitalWrite(ledHeart[0], LOW);
       delay(wait[1]);
       digitalWrite(ledHeart[2], HIGH);
       delay(wait[1]);
       digitalWrite(ledHeart[2], LOW);
       delay(wait[1]);
       digitalWrite(ledHeart[4], HIGH);
       delay(wait[1]);
       /*digitalWrite(ledHeart[4], LOW);
       delay(wait[1]);*
       digitalWrite(ledHeart[6], HIGH);
       delay(wait[1]);
       /*digitalWrite(ledHeart[6], LOW);
       delay(wait[1]);*
       digitalWrite(ledHeart[8], HIGH);
       delay(wait[1]);
       /*digitalWrite(ledHeart[8], LOW);
       delay(wait[1]);*
       digitalWrite(ledHeart[0], LOW);
       digitalWrite(ledHeart[2], LOW);
       digitalWrite(ledHeart[4], LOW);
       digitalWrite(ledHeart[6], LOW);
       digitalWrite(ledHeart[8], LOW);
       delay(wait[1]);*/

        /*Allumage 3 en 3*/
       digitalWrite(ledHeart[0], HIGH);
       delay(wait[2]);
       digitalWrite(ledHeart[3], HIGH);
       delay(wait[2]);
       digitalWrite(ledHeart[6], HIGH);
       delay(wait[2]);
       digitalWrite(ledHeart[9], HIGH);
       delay(wait[2]);
       digitalWrite(ledHeart[2], HIGH);
       delay(wait[2]);
       digitalWrite(ledHeart[5], HIGH);
       delay(wait[2]);
       digitalWrite(ledHeart[8], HIGH);
       delay(wait[2]);  
       digitalWrite(ledHeart[1], HIGH);
       delay(wait[2]);
       digitalWrite(ledHeart[4], HIGH);     
       delay(wait[2]);
       digitalWrite(ledHeart[7], HIGH);
       delay(wait[2]);
       digitalWrite(ledHeart[0], LOW);
       delay(wait[2]);
       digitalWrite(ledHeart[3], LOW);
       delay(wait[2]);
       digitalWrite(ledHeart[6], LOW);
       delay(wait[2]);       
       digitalWrite(ledHeart[9], LOW);
       delay(wait[2]);
       digitalWrite(ledHeart[2], LOW);
       delay(wait[2]);
       digitalWrite(ledHeart[5], LOW);
       delay(wait[2]);
       digitalWrite(ledHeart[8], LOW);
       delay(wait[2]);
       digitalWrite(ledHeart[1], LOW);
       delay(wait[2]);
       digitalWrite(ledHeart[4], LOW);
       delay(wait[2]); 
       digitalWrite(ledHeart[7], LOW);     
       delay(wait[2]);

                    
        
}
