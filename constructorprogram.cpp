#include<iostream>
using namespace std;
class complex
{
    private:
    int a,b;
    public:
    complex(int x,int y)
    {
        a=x;
        b=y;
    }
    complex(int z)
    {
        a=z;
    }
    complex()
    {
        
    }

};
int main()
{
    complex c1(3,4),c2(5),c3,c4(3,8);
}