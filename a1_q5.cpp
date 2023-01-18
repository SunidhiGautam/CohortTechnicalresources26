#include<iostream>

//Program to count digits in a number.

int main()
{
   int num, total=0;
  std::cout<<"Enter the Number: ";
   std::cin>>num;
   while(num>0)
   {
      total++;
      num = num/10;
   }
   std::cout<<"Total Digits = "<<total<<std::endl;
   std::cout<<std::endl;
   return 0;
}
