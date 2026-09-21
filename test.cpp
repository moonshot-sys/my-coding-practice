#include <iostream>
//C++의 for 문
void print(){
int i;

  for(i=0;i<10;i++){
    std::cout << i << std::endl;

  }
  
}

void sum(){
    int i, sum = 0;
    for(i =1; i<=10;i++){
        sum+=i;
    }

    std::cout<<"합은 : " <<sum << std::endl;
   
}
int main(){
    print();
    sum();
 return 0;
}