#define IN1 7
#define IN2 8
#define PWM 9

void setup() {
    pinMode(IN1, OUTPUT);
    pinMode(IN2, OUTPUT);
    pinMode(PWM, OUTPUT);
}

void loop() {
    //モーター正転
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    analogWrite(PWM, 64);    
    delay(2000);

    //モーターブレーキ
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    analogWrite(PWM, 0);     
    delay(1000);

    //モーター逆転
    digitalWrite(IN1,HIGH);
    digitalWrite(IN2,LOW);
    analogWrite(PWM, 64);    
    delay(2000);

    //モーターストップ
    digitalWrite(IN1,LOW);
    digitalWrite(IN2,LOW);
    analogWrite(PWM, 64);    
    delay(1000);

   //モーター速度変化
    for (int i= 0; i<= 255; i++) {
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        analogWrite(PWM, i);
        delay(50);      
    }

    for (int i= 0; i<= 255 ; i++) {
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        analogWrite(PWM, i);
        delay(50);           
    }
}
