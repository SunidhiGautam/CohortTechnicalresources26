#include<iostream>

//Program to print reverse of a number .

int main()
{
    int n ,i, reversednum=0 , remainder;
    std::cout<<"Enter a number"<<std::endl;
    std::cin>>n;
    

   for (i=n ; i>0;) {
    remainder = i % 10;
    reversednum = reversednum * 10 + remainder;
      i=i/10;
  
  }

 std::cout<<"  The Reverse Number of "<<n<<" is "<<reversednum;

  return 0;
}
