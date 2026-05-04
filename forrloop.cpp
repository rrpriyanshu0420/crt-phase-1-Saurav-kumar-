#include<iostream>
using namespace std;
int main()
{
int n,fact=1; //1 2 6
cout<<"enter the integer:"<<endl;
cin>>n;
for(int i=1;i<=n;i++){
    fact=fact*i;
}

cout<<"the factorial of given no.is "<<fact<<endl;
return 0;
}