#include <iostream>
//C++와 C언어의 공통 문법 구조.
int main(){
    int* a1 = new int(10);
    int* a2 = new int[5];
    int* a3 = new int[5] {1,2,3,4,5};

    std::cout << "a1이 가리키는 주소 값 : " << a1<<std::endl;
    std::cout << "a2이 가리키는 주소 값 : " << a2 <<std::endl;
    std::cout<<"a3이 가리키는 주소 값 (heap memory) : " << a3 << std::endl;
    std::cout<<"a1의 주소값 : " << &a1 << std::endl;
    std::cout <<"a2의 주소값 : " << &a2<< std::endl;
    std::cout << "a3의 주소값 (stack memory) : " << &a3 << std::endl;

    int n1= 10;
    int n2 = 20;
    int* b = &n1;
    int* c = &n2;

    std::cout <<"b의 주소값(stack memory) : " << b << std::endl;
    std::cout << "c의 주소값(stack memory) : " << c << std::endl;

    delete a1;
    delete[] a2;
    delete[] a3;

    return 0;

}