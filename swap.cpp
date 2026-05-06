#include<iostream>
using namespace std;
void swapnumbers(int *a,int *b) {
int temp = *a;
*a= *b;
*b = temp;

}int main()
{
    int x,y;
    cout<<"enter two numbers:";
    cin>>x>>y;

    swapnumbers(&x,&y);

    cout<<"after swapping:"<<endl;
    cout<<"x = "<<x<<"y = "<<y<<endl;
    return 0;
}