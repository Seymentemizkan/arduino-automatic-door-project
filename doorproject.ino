#include <LiquidCrystal.h>

#include <Servo.h>

Servo myservo;
int ilk_deger = 0;
int son_deger = 180;

LiquidCrystal mylcd(8,7,6,5,4,3);

const int buzzer = 9;
const int echopin = 12;
const int trigpin = 13;

long mesafe,sure;

String mesaj="KAPI ACILDI !";
String mesaj2="KAPI KAPANDI !";



int i,j;

void setup() {
  mylcd.begin(16,2);
  myservo.attach(10);
  pinMode(buzzer, OUTPUT);
  pinMode(echopin, INPUT);
  pinMode(trigpin, OUTPUT);
  
  digitalWrite(trigpin,LOW);
}

void loop() {
  digitalWrite(trigpin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin,LOW);
  delayMicroseconds(10);
  digitalWrite(trigpin,HIGH);
  sure = pulseIn(echopin,HIGH);
  mesafe = sure/58.2;


  if (mesafe <10)
  {
    myservo.write(ilk_deger);
    digitalWrite(buzzer, HIGH);
    mylcd.home();

    for(i = 0;i<=16;i++)
    {
    mylcd.setCursor(i,0);
    mylcd.print(mesaj);
    delay(250);
    mylcd.clear();
    }
    digitalWrite(buzzer, LOW);
    delay(3000);

    myservo.write(son_deger);
    digitalWrite(buzzer, HIGH);

    for(j = 0;j<=16;j++)
    {
    mylcd.setCursor(j,0);
    mylcd.print(mesaj2);
    delay(250);
    mylcd.clear();
    }
    digitalWrite(buzzer, LOW);
  }
}












