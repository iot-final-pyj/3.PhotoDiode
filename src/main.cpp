#include <Arduino.h>

int val = 0;                // AD 변환값을 저장할 변수 
void setup() {
    Serial.begin(115200); 
} 

void loop() {
    val = analogRead(15);   // 아날로그 15번 핀 (VR) 값을 입력  
    Serial.println(val);
    delay(1000); 
}