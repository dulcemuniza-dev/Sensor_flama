int led = 2;
int zumbador = 3;
int sensorPin = A0;
int valorSensor = 0;

void setup() {
  pinMode(led, OUTPUT);
  pinMode(zumbador, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  valorSensor = analogRead(sensorPin);
  Serial.print("Valor del sensor: ");
  Serial.println(valorSensor);

  if(valorSensor < 900){
    Serial.println("Flama detectada");
    digitalWrite(led, HIGH);
    digitalWrite(zumbador, HIGH);
  }else{
    Serial.println("Sin flama");
    digitalWrite(led, LOW);
    digitalWrite(zumbador, LOW);
  }
}
