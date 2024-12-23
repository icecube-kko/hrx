#include<iostream>
using namespace std;

class LargestFinder{
private:
  double num1,num2,num3;

public:
    void inputNumbers(){
     cout<<"Enter three numbers:";
     cin>>num1>>num2>>num3;
     }
     double findLargest(){
     if(num1>=num2&&num1>=num3)
        return num1;
    else if(num2>=num1&&num2>=num3)
        return num2;
    else
        return num3;
     }
     };
int main(){
LargestFinder finder;

finder.inputNumbers();

cout<<"The largest number is:"<<finder.findLargest()<<endl;

return 0;
}

