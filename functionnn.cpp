/*#include<iostream>
using namespace std;

int shots(int n){
    return n*30;

}
int main(){
int a;
    cout<<"enter the no.of shots:";
    cin>>a;
    cout<<shots(a)<<"ml";
    return 0;
}*/      //ye to khud se kiya tha help leke 

//new code 

#include <iostream>
using namespace std;
int coffeevol(int shots){
    return shots *30;
}
int main()
{
    int shots;
    cout<<"enter no of coffee shots:";
    cin>>shots;
cout<<"volume of coffee:"<<coffeevol(shots)<<"ml"<<endl;
return 0;

}