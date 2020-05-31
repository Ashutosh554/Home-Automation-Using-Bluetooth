#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
int r1 = 7;
int r2 = 6;
int r3 = 5;
int r4 = 4;
int t = 0;
void setup()
{
   pinMode(r1, OUTPUT);
   pinMode(r2, OUTPUT);
   pinMode(r3, OUTPUT);
   pinMode(r4, OUTPUT);
   digitalWrite(r1,LOW);
   digitalWrite(r2,LOW);
   digitalWrite(r3,LOW);
   digitalWrite(r4,LOW);
  lcd.begin(16, 2);
  Serial.begin(9600);
  lcd.print("HOME AUTOMATION");
  lcd.setCursor(0, 1);
  lcd.print("USING BLUETOOTH");
  Serial.print("HOME AUTOMATION USING BLUETOOTH");
  delay(3000);            
  lcd.clear();
  
}

void loop() {

  if (Serial.available() > 0)
  {
      // display each character to the LCD
      t = Serial.read();
     lcd.clear(); 
      lcd.write(t);
     
      if(t == 'a')
      {
      lcd.setCursor(0, 1);
      lcd.print("Device 1 ON");
      Serial.println("Device 1 ON");
      digitalWrite(r1,HIGH);
      delay(1000);            
      lcd.clear();
      }
       if(t == 'b')
      {
      lcd.setCursor(0, 1);
      lcd.print("Device 1 OFF");
      Serial.println("Device 1 OFF");
      digitalWrite(r1,LOW);
      delay(1000);            
      lcd.clear();
      }
      
      if(t == 'c')
      {
      lcd.setCursor(0, 1);
      lcd.print("Device 2 ON");
      Serial.println("Device 2 ON");
      digitalWrite(r2, HIGH);
      delay(1000);            
      lcd.clear();
      }
       if(t == 'd')
      {
      lcd.setCursor(0, 1);
      lcd.print("Device 2 OFF");
      Serial.println("Device 2 OFF");
      digitalWrite(r2, LOW);
      delay(1000);            
      lcd.clear();
      }
      if(t == 'e')
      {
      lcd.setCursor(0, 1);
      lcd.print("Device 3 ON");
      Serial.println("Device 3 ON");
      digitalWrite(r3, HIGH);
      delay(1000);            
      lcd.clear();
      }
       if(t == 'f')
      {
      lcd.setCursor(0, 1);
      lcd.print("Device 3 OFF");
      Serial.println("Device 3 OFF");
      digitalWrite(r3, LOW);
      delay(1000);            
      lcd.clear();
      }
      if(t == 'g')
      {
      lcd.setCursor(0, 1);
      lcd.print("Device 4 ON");
      Serial.println("Device 4 ON");
      digitalWrite(r4, HIGH);
      delay(1000);            
      lcd.clear();
      }
       if(t == 'h')
      {
      lcd.setCursor(0, 1);
      lcd.print("Device 4 OFF");
      Serial.println("Device 4 OFF");
      digitalWrite(r4, LOW);
      delay(1000);            
      lcd.clear();
      }
      }  
  delay(1000);         
  lcd.clear();
}
