const int triggerPin=3;
const int echoPin=4;
float cm;

void setup(){
    Serial.begin(9600);
    pinMode(triggerPin,OUTPUT);
    pinMode(echoPin,INPUT);
}

void loop(){
    digitalWrite(triggerPin,LOW);
    delayMicroseconds(2);

    digitalWrite(triggerPin,HIGH);
    delayMicroseconds(10);
    digitalWrite(triggerPin,LOW);

    cm=pulseIn(echoPin,HIGH)/58.0;
    cm=(int(cm*100))/100.0;
    Serial.println(cm);
    delay(1000);
}