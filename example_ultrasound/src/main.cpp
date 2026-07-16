#include <Arduino.h>

#define TRIG 27
#define ECHO 21
void setup()
{
    Serial.begin(115200);
    pinMode(2, OUTPUT); // 设置2号引脚模式为OUTPUT模式
    pinMode(TRIG, OUTPUT);
    pinMode(ECHO, INPUT);
}
void loop()
{
    digitalWrite(TRIG, HIGH);
    delayMicroseconds(10); // 延时 10 微秒
    digitalWrite(TRIG, LOW);
    double delta_time = pulseIn(ECHO, HIGH);            // 检测高电平持续时间，注意返回值是微秒us
    float detect_distance = delta_time * 0.0343 / 2;    // 计算距离单位 cm, 声速 0.0343 cm/us
    Serial.printf("distance=%f cm\n", detect_distance); // 打印距离
    delay(500);
}