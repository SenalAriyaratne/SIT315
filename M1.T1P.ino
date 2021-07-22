int trigpin = 9;
int echopin = 10; 

long duration;
int dist;

void setup() {

  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(trigpin, OUTPUT);
  pinMode(echopin, INPUT);
  Serial.begin(9600);
  
  // put your setup code here, to run once:

}

void loop() {
  //set the trig pin to low
  digitalWrite(LED_BUILTIN, LOW);
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);

  duration = pulseIn(echopin, HIGH);
  dist = duration * 0.0342/2;
  Serial.print("Disntance in cm : ");
  Serial.println(dist);
  if ( dist < 10)
  {
    digitalWrite(LED_BUILTIN, HIGH);
    Serial.println("Built in LED on");
    
  }
  else
  {
    digitalWrite(LED_BUILTIN, LOW);
    Serial.println("Built in LED off");
  }

  delay(1000);
  
  // put your main code here, to run repeatedly:
  
}
