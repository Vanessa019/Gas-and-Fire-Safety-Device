int buzzerPin = 12;
int flamePin = 10;
int gasPin = A1;
int ledRed = 8;
int ledGreen = 4;
int Flame;
int Gas;

void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerPin, OUTPUT);
  pinMode(flamePin, INPUT);
  pinMode(gasPin, INPUT);
  pinMode(ledRed, OUTPUT);
  pinMode(ledGreen, OUTPUT);
  Serial.begin(9600);
 


}

void loop() {
  // put your main code here, to run repeatedly:
  Flame = digitalRead(flamePin);
  Gas = analogRead(gasPin);
  if (Flame == LOW){
  
      Serial.println("Flame is...");
      Serial.println(Flame);
      digitalWrite(buzzerPin,HIGH);
      tone(buzzerPin, 5000);
      digitalWrite(ledRed, HIGH);
      digitalWrite(ledGreen, LOW);
      delay (1000);
      }
 else if (Gas > 100){    
      Serial.println("Gas is...");
      Serial.println(Gas); 
     digitalWrite(buzzerPin,HIGH);
      tone(buzzerPin, 5000);
      digitalWrite(ledRed, HIGH);
      digitalWrite(ledGreen, LOW);
      delay (1000);
  }
  else {
      digitalWrite(buzzerPin, LOW);
      digitalWrite(ledRed, LOW);
      digitalWrite(ledGreen, HIGH);
    }
  

}
