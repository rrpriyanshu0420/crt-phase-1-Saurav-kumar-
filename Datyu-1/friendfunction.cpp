#include<iostream>
using namespace std;
class area{
    private:
    int length;
    int width;
    public:
    void setsides(int l, int w){
        length = l;
        width = w;
    }
    friend void showarea(area a);

};

void showarea(area b)
{
    int area= b.length* b.width;
    cout<<"area is:"<<area<<endl;
}

int main(){
    area a;
    a.setsides(5,10);
    showarea(a);

    return 0;
}