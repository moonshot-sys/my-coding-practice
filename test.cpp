#include <iostream>
//C++와 C언어의 공통 문법 구조.
void getType(int a) {
    std::cout<<"int"<<std::endl;
}

void getType(int* a){
    std::cout <<"int*"<<std::endl;
}

int main(){
    int* a;
    a=nullptr;
    std::cout<<a<<std::endl;

    return 0;

}