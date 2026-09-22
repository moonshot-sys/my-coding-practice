#include <iostream>
//참조자 이해하기

int main(){
  int x;
  int& y = x;
  int& z =y;

  x=1;
  std::cout << "x : " << x << "y : "<< y << "z : "<< z <<std::endl;
  
  y=2;
  std::cout << "x : " << x << "y : "<< y << "z : "<< z <<std::endl;

  z=3;
  std::cout << "x : " << x << "y : "<< y << "z : "<< z <<std::endl;
//참조자의 참조자는 없다.
//참조자를 사용하게 되면 불필요한 &와 *가 필요없기 때문에 코드를 훨씬 간결하게 나타낼 수 있다.
//이에 대한 내용으로 cin을 들 수 있다. 
//scanf로 사용할때는 scanf("%d", &user_input)과 같이 항상 주소값을 전달해 주어야 했지만
//cin에서는 그냥 std::cout>>user_input;만 해도 잘 작동한다.
//이는 cin이 레퍼런스로 user_input을 받아서 그렇다. 
//cin에게 변수 이름을 그대로 넘겨주면 cin은 그 변수의 실제 메모리 주소를 내부적으로 알아서 찾아가 값을 바꿉니다.
//cin: 변수의 별명(참조)을 바로 붙잡으므로 user_input (참조 전달)
}