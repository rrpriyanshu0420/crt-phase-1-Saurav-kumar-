#include<iostream>
using namespace std;
int main(){

int n;
cout<<"enter a no."<<endl;
cin>>n;

cout<<"numbers that are divisible by two between 1 and"<<n<<"are"<<endl;

for(int i=1;i<=n;i++){

    if(i%2==0){
    cout<<i<<endl;
}

}



    return 0;
}