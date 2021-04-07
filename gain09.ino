#include <IRremote.h>
//전역변수 설정
int blue = 2;
int green = 3;
int yellow = 4;
int red = 5;
int RECV_PIN = 11;
//IR라이브러리 객체
IRrecv irrecv(RECV_PIN);
decode_results results;//IR신호 복호화(역할 십진수->아스키코드 변환하는 비슷한 역할)
void setup() {
  // 전원 ON 시 1회만 실행
  //GPIO핀 모드 설정
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  //시리얼모니터로 출력설정
  Serial.begin(9600);
  Serial.println("Enabling IRin");
  irrecv.enableIRIn();//IRrecv 구조체(c) = 클래스(자바):변수, 함수 모두 포함
  Serial.println("Enabled IRin");
}

void loop() {
  // 전원 ON 시 무한 반복
  if (irrecv.decode(&results)) {//수신값을 확인해서 있으면 true반환하는 함수 decode
    unsigned int value = results.value;
    Serial.println(value);//적와선 수신기로 받은 값을 출력
    switch (value) {
      case 34935:
        digitalWrite(blue, HIGH);
        delay(500);
        digitalWrite(blue, LOW);
        break;

     case 18615:
        digitalWrite(green, HIGH);
        delay(500);
        digitalWrite(green, LOW);
        break;
      
      case 10455:
        digitalWrite(yellow, HIGH);
        delay(500);
        digitalWrite(yellow, LOW);
        break;

      case 43095:
        digitalWrite(red, HIGH);
        delay(500);
        digitalWrite(red, LOW);
        break;
    }//switch문 end
    irrecv.resume();//ready 다음 value를 받음
  }
}