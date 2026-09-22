#include <iostream>
//C++의 참조자(레퍼런스)
//c++에서 다른 변수나 상수를 가리키는 방법 : 참조자 레퍼런스
//함수 인자로 레퍼런스 받기

int change_val(int &p){// 이는 사실상 호출 할때 int& p = number가 실행되는것과 같다. 
  p =3;
  return 0; 
}
int main(){
  int number =5 ;

  std::cout << number << std::endl;
  change_val(number); //포인터가 인자일 때와는 다르게 number 앞에 &를 붙일 필요가 없다.
                      //이는 참조자를 정의할 때 그냥 int&a = b와 같이 한것과 일맥상통
  std::cout<<number<<std::endl;

}