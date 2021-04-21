void setup() {
 // 시리얼 포트 시작
 Serial.begin(9600);
}
void loop() {
 // 버튼이 눌렸습니까?
 int valueA1=get_button();
 if(valueA1>0) { // 클릭하면
   Serial.print("Click button ");
   Serial.println(valueA1);
   delay(500);
 } 
}
// 버튼 클릭 감지 함수
int get_button() {
 // 아날로그 핀 A1에 대한 데이터 수신
 int val=analogRead(A1);
 if(val>1000)
   return 1;
 else if(val>900)
   return 2;
 else if(val>820)
   return 3;
 else if(val>750)
   return 4;
 else if(val>660)
   return 5;
 else if(val>620)
   return 6;
 else if(val>585)
   return 7;
 else if(val>540)
   return 8;
 else if(val>500)
   return 9;
 else if(val>475)
   return 10;
 else if(val>455)
   return 11;
 else if(val>425)
   return 12;
 else if(val>370)
   return 13;
 else if(val>300)
   return 14;
 else if(val>260)
   return 15;
 else if(val>200)
   return 16;
 else
   return 0; 
}
