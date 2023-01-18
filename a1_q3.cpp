#include <iostream>
int main()

{
    int num , prime=1;
    std::cout<<"Enter the Number: ";
    std::cin>>num;
    for(int i=2 ; i<num ; i++)
    {
        if(num%i==0)
        prime=0;
    }
    if (prime==0)
    std::cout<<num<<"is not a prime number. ";
    if(prime==1)
    std::cout<<num<<"is a prime number.";

    return 0;
}
