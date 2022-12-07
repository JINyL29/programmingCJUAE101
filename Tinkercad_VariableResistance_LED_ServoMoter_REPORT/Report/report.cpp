#include <Servo.h> 

#define MINANALOG 0     // 전류최소값 지정
#define MAXANALOG 1023  // 전류최대값 지정
#define MINANG 0        // 모터최소각도 지정
#define MAXANG 180      // 모터최대각도 지정

Servo sv; //Servo에 sv라는 변수를 지정

int nRedpin = 2; //redLED를 2번에 연결함.
int nBluepin = 3; //blueLED를 2번에 연결함.
int nGreenpin = 4; //greenLED를 2번에 연결함.
int nYellowpin = 5; //yellowLED를 2번에 연결함.

void setup()
{
    sv.attach(9); // 서보모터를 9번에 연결함.
    Serial.begin(9600); // 통신속도 지정
}

void loop()
{
    int val = analogRead(A0); //val변수에 가변저항으로 들어오는 입력값 저장
    int radian = map(val, MINANALOG, MAXANALOG, MINANG, MAXANG); //입력값을 목표출력값으로 변경
    sv.write(radian); //변경된 값만큼 서보모터 움직임
    delay(10); // 0.01초 지연

    if (radian < 180) //radian 값이 180보다 작을때 redLED가 들어옴
    {
        digitalWrite(nRedpin, HIGH);
        Serial.print("RedLED : On\n");
        delay(100); // 0.1초 지연
        digitalWrite(nRedpin, LOW);
        Serial.print("RedLED : Off\n");
        delay(100); // 0.1초 지연
    }
    if (radian < 135) //radian 값이 135보다 작을때 blueLED가 들어옴
    {
        digitalWrite(nBluepin, HIGH);
        Serial.print("BlueLED : On\n");
        delay(100); // 0.1초 지연
        digitalWrite(nBluepin, LOW);
        Serial.print("BlueLED : Off\n");
        delay(100); // 0.1초 지연
    }
    if (radian < 90) //radian 값이 90보다 작을때 greenLED가 들어옴
    {
        digitalWrite(nGreenpin, HIGH);
        Serial.print("GreenLED : On\n");
        delay(100); // 0.1초 지연
        digitalWrite(nGreenpin, LOW);
        Serial.print("GreenLED : Off\n");
        delay(100); // 0.1초 지연
    }
    if (radian < 45) //radian 값이 45보다 작을때 yellowLED가 들어옴
    {
        digitalWrite(nYellowpin, HIGH);
        Serial.print("YellowLED : On\n");
        delay(100); // 0.1초 지연
        digitalWrite(nYellowpin, LOW);
        Serial.print("YellowLED : Off\n");
        delay(100); // 0.1초 지연
    }
    else
    {
        Serial.print("ALL LED IS OFF\n"); // if문 전체가 아닐 경우
    }
}
