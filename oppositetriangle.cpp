#include<iostream>
using namespace std;
int main()
{
int k,n=4;

for(int i=1;i<=n;i++){

    for(int j=1;j<=(n-i);j++){
        cout<<" ";
    }
    for(k=1;k<=i;k++){
        cout<<'*';
    }cout<<endl;
}return 0;
}