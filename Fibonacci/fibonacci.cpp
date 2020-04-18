#include<iostream>

unsigned long long fibonacci(unsigned short x);

int main(){
unsigned short n;
std::cout<<"Enter a number:";
std::cin>>n;
std::cout<<fibonacci(n)<<std::endl;

}

unsigned long long fibonacci(unsigned short x){
switch(x){
case 0:
  return 0;
  break;
case 1:
  return 1;
  break;
default:
  return fibonacci(x-1)+fibonacci(x-2);


}

}
