#include<iostream>

//Program to print prime factors of a number.

int main(){
    int n;
    std::cout<<"Enter a number : "<<std::endl;
    std::cin >> n;

    for(int div = 2; div * div <= n; div++){
        while(n % div == 0){
            n /= div;
            std::cout<<div<<" ";
        }
    }
    if(n != 1){
        std::cout<<n<<std::endl;
    }
    return 0;
}
