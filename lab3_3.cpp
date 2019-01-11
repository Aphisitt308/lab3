#include<iostream>

using namespace std;
int main()
{   double x = 6 ,sum;
    while(x<20){
        sum +=1/x;
        x=x+1;

    }
    cout << sum;
    return 0;
}
