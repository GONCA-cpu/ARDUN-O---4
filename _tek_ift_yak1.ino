/*kafa karışıklığını önlemek için
led1=pin8
led2=pin9
led3=pin10
led4=pin11
led5=pin12*/


/* uzun versiyonu
int tekler[]={9,11};
int t_boyut=2;

int çiftler[]={8,10,12};
int ç_boyut=3;

int bekle=500;

void setup()
{
  for(int i=0;i<t_boyut;i++)
  {
    pinMode(tekler[i],OUTPUT);//OUTPUT:çıktıları verır yanı low muhıgh olduguna karar verir
    
  }
  for(int i=0;i<ç_boyut;i++)
  {
    pinMode(çiftler[i],OUTPUT);
  }
  
}

void loop()//sürekli tekrar eden kısımdır
{
  for(int i=0;i<t_boyut;i++)
  {
    digitalWrite(tekler[i],HIGH);
  }
  for(int i=0;ç_boyut;i++)
  {
    digitalWrite(çiftler[i],LOW);
  }
  delay(bekle);
  
  for(int i=0;i<ç_boyut;i++)
  {
    digitalWrite(çiftler[i],HIGH);//hıgh:açık
    
  }
  
  for(int i=0;i<t_boyut;i++)
  {
    digitalWrite(tekler[i],LOW);//low:kapalı
  }
  delay(bekle);
}
*/



int beklemeSuresi=500;
void setup()
{
  //pinMode: pin görevini belirler
  pinMode(8,OUTPUT);// açıklaması=>8 numaralı pini çıktı göndermek üzere ayarla
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}
void loop()
{
  //digitalWrite: pine sinyal gönderrir
  //HIGH: açık
  digitalWrite(9,HIGH);
  digitalWrite(11,HIGH);
  
  //LOW: kapalı
  digitalWrite(8,LOW);
  digitalWrite(10,LOW);
  digitalWrite(12,LOW);
  
  delay(400);
  
  digitalWrite(9,LOW);
  digitalWrite(11,LOW);
  digitalWrite(8,HIGH);
  digitalWrite(10,HIGH);
  digitalWrite(12,HIGH);
  
  delay(500);
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
}


















