//Tento příklad vám ukáže, jak použít kombinaci ir snímače a bzučáku.
// také se zde naučíte, jak zapracovat frekvenic tonů do vašich programů.
int bzucak=13;
int ir =7;
void setup() {
pinMode (bzucak,OUTPUT);// nastavení výstupů 
pinMode(7,INPUT);// nastavení vstupu 
Serial.begin(9600);// seriová komunikace 

}

void loop() {
ir =digitalRead(7);
if (ir== HIGH ){

noTone(bzucak);// vypnuti přívodu frekvence do bzučáku.
 Serial.println ("ČISTO");
}


else
{
tone(bzucak,1000);// spuštění tfrekvence do bzučáku pomocí příkazu tone 
Serial.println ("PŘEKÁŽKA");

}
}
