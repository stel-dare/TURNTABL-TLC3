#include <iostream>
#include <algorithm>
int main(){

std::cout << "Enter 5 numbers : \n";
int num[5];
std::cin >> num[0] >> num[1] >> num[2] >> num[3] >> num[4];
double mean = (num[0]+num[1]+num[2]+num[3]+num[4])/5;
std::sort(num, num+5);
int highestCount=1;
int mode=num[0];
for(int i=0; i<5; i++){
    int count = 1;
    while(num[i]==num[i+1] && i<5){
        count++;
        i++;
    }
    if(count>highestCount){
        highestCount = count;
        mode = num[i];
    }
}
std::cout<< "The mean is: " << mean  <<"\nThe median is: " << num[2] << "\n";
if(highestCount==1){
    std::cout<<"There was no mode \n";
}
else{
    std::cout<<"The mode is "<<mode<<" with a frequency of "<<highestCount<<"\n";
}

return 0;

}
