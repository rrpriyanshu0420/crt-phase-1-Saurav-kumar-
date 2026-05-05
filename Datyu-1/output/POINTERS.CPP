/*#include<iostream>
using namespace std;
int main()
{
    int a=5;
    int*ptr =&a;
    cout<<ptr<<endl;
    return 0;
}*/
//new code
#include<iostream>               //ptr=pointer    
using namespace std;
int main()
{
    int value=10;
    int *ptr=&value;
    cout<<"add:"<<ptr<<endl;
    cout<<"value:"<<*ptr<<endl;
    *ptr=20;
    cout<<"value:"<<*ptr<<endl;
    cout<<"value:"<<value<<endl;
    return 0;
}