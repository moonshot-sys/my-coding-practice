#include <iostream>
//C++의 for 문
/*변수는 변수 사용 직전에 선언해도 된다.*/
/*행운의 숫자 맞추기*/

int main(){
  int lucky_number = 3;
  std::cout << "내 비밀의 수를 맞추어 보세요~"<< std::endl;

  int user_input; //사용자 입력
  while (1) {
    std::cout <<"입력 : ";
    std::cin >>user_input; //cin은 사용자로부터 입력을 받아서 >>를 통해 변수에 넣는다.
                           //cin 또한 std에 정의
    if(lucky_number == user_input){
      std::cout<<"맞추셨습니다. "<<std::endl;
      break;
    }else{
      std::cout <<"다시 생각해보세요~" <<std::endl;
    }
  }
  return 0;
}