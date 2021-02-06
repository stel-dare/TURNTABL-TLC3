#include <iostream>

int main(){
    std::cout<<"Enter a number: ";
    int num;
    std::cin>>num;
    if(num%2==0){
        int counter = 1;
        while(counter <= 20){
            std::cout<< counter << " x "<<num<<" = " << counter*num <<"\n";
            counter++;
        }
    }
    else{
        int counter = 1;
        int notDivisibleByNum = 0;
        while(notDivisibleByNum < 30){
            if(counter % num !=0){
                std::cout<<counter<<"\n";
                notDivisibleByNum++;
            }
                
            counter++;    
        }
    }
    return 0;
}