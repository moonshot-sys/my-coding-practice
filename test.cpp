#include <iostream>
//C++와 C언어의 공통 문법 구조.
//포인터는 주소값을 저장하는 변수이기 때문에 포인터끼리의 사칙 연산 중 뺄셈을 
//제외한 나머지 연산은 의미가 없다. 뼬셈의 경우 두 포인터 사이의 거리를 나타냄.
//포인터에 정수 갓을 더하거나 빼는 것(위치 이동)은 가능하지만 float과 같은 실수는 연산할 수 없다.
//[] 연산자가 포인터의 엇셈과 동일한 역할을 한다. 즉 arr[1] 은 arr+1과 동일한 역할
int main(){
    int arr[4] ={1,2,3,4};
    int* p = arr;

    std::cout<<p+3<<std::endl;
    std::cout <<&p[3]<<std::endl;

    std::cout << *(p+3) << std::endl;
    std::cout<< p[3] <<std::endl;

    std::cout<<sizeof(arr)<<std::endl;
    std::cout << sizeof(p) << std::endl;

    return 0;
}