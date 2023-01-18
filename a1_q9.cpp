#include<iostream>

//Program to print GCD and LCM of two numbers.

int main()
{
    int num1 , num2 , c;
    std::cout<<"Enter num1"<<std::endl;
    std::cin>>num1;

    std::cout<<"Enter num2"<<std::endl;
    std::cin>>num2;
    c=num1*num2;

    while(num1 != num2)
    {
        if(num2>num1)
        num2=num2-num1;

        else
        num1=num1-num2;
    }
    std::cout<<"GCD = "<<num1<<std::endl;
    std::cout<<"LCM = "<< c/num1 <<std::endl;

    return 0;
    


}
