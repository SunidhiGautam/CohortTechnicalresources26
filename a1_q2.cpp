#include<iostream>

//Grading System
int main()
{
    int m;
    std::cout<<"Enter your marks :"<<std::endl;
    std::cin>>m;

    if(m>90)
    std::cout<<"Excellent" ;
    
    else if(m>80 && m<= 90)
        std::cout<<"good" ;
    
    else if (m>70 && m<= 80 )
        std::cout<<"fair" ;

    
    else if (m>60 && m<=70)
        std::cout<<"below par" ;
    
    else 
    std::cout<<"Invalid" ;
    
}
