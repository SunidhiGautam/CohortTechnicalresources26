#include <iostream>

//Program to print prime numbers between a range. 

int main() {
    
    int n1 , n2 ,i , count,j  ;
    
    std::cout<<"low"<<std::endl;
    std::cin>>n1;
    std::cout<<"high"<<std::endl;
    std::cin>>n2;
    std::cout<<"Prime numbers between "<< n1 <<" and "<< n2 <<" are "<<std::endl;
    
    
    for (i=n1;i<n2;i++)
    {
        for (j=2;j<i;j++)
        {
            count=i%j;
        if (count==0)
            break;
        }
        if (count!=0)
            std::cout<<j<<std::endl;

    }
}
