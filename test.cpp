#include <iostream>
//C++와 C언어의 공통 문법 구조.
int main(){
    int arr[3] = {1,2,3};

    std::cout << "arr (heap) : "<<arr<<std::endl;
    std::cout << "&arr (stack) : "<<&arr<<std::endl;
    std::cout << "&arr[0] : " << & arr[0] <<std::endl;
    std::cout << "&arr[1] : " << & arr[1] <<std::endl;
    std::cout << "&arr[2] : " << &arr[2] << std::endl;
    std::cout << "(arr + 1) : "<< (arr+1)<<std::endl;
    std::cout << "&arr[0] +1 : "<<& arr[0] + 1<<std::endl;

    return 0; 
}