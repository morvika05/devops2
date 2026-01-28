#include<iostream>
using namespace std;
int main()
{
    int base=2;
    int exp=5;
    int result=1;
    while(exp>0)
    {
     result=(result*base) ;
     exp--;  
    }
    cout<<result;
    return 0;
}