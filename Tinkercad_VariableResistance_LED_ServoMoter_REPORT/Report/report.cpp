#include <Servo.h> 

#define MINANALOG 0     // �����ּҰ� ����
#define MAXANALOG 1023  // �����ִ밪 ����
#define MINANG 0        // �����ּҰ��� ����
#define MAXANG 180      // �����ִ밢�� ����

Servo sv; //Servo�� sv��� ������ ����

int nRedpin = 2; //redLED�� 2���� ������.
int nBluepin = 3; //blueLED�� 2���� ������.
int nGreenpin = 4; //greenLED�� 2���� ������.
int nYellowpin = 5; //yellowLED�� 2���� ������.

void setup()
{
    sv.attach(9); // �������͸� 9���� ������.
    Serial.begin(9600); // ��żӵ� ����
}

void loop()
{
    int val = analogRead(A0); //val������ ������������ ������ �Է°� ����
    int radian = map(val, MINANALOG, MAXANALOG, MINANG, MAXANG); //�Է°��� ��ǥ��°����� ����
    sv.write(radian); //����� ����ŭ �������� ������
    delay(10); // 0.01�� ����

    if (radian < 180) //radian ���� 180���� ������ redLED�� ����
    {
        digitalWrite(nRedpin, HIGH);
        Serial.print("RedLED : On\n");
        delay(100); // 0.1�� ����
        digitalWrite(nRedpin, LOW);
        Serial.print("RedLED : Off\n");
        delay(100); // 0.1�� ����
    }
    if (radian < 135) //radian ���� 135���� ������ blueLED�� ����
    {
        digitalWrite(nBluepin, HIGH);
        Serial.print("BlueLED : On\n");
        delay(100); // 0.1�� ����
        digitalWrite(nBluepin, LOW);
        Serial.print("BlueLED : Off\n");
        delay(100); // 0.1�� ����
    }
    if (radian < 90) //radian ���� 90���� ������ greenLED�� ����
    {
        digitalWrite(nGreenpin, HIGH);
        Serial.print("GreenLED : On\n");
        delay(100); // 0.1�� ����
        digitalWrite(nGreenpin, LOW);
        Serial.print("GreenLED : Off\n");
        delay(100); // 0.1�� ����
    }
    if (radian < 45) //radian ���� 45���� ������ yellowLED�� ����
    {
        digitalWrite(nYellowpin, HIGH);
        Serial.print("YellowLED : On\n");
        delay(100); // 0.1�� ����
        digitalWrite(nYellowpin, LOW);
        Serial.print("YellowLED : Off\n");
        delay(100); // 0.1�� ����
    }
    else
    {
        Serial.print("ALL LED IS OFF\n"); // if�� ��ü�� �ƴ� ���
    }
}
