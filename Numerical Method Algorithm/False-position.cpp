#include<iostream>
#include<math.h>
using namespace std;

float fun(float a, float b, float c, float x)
{
    float y= (a*x*x)+(b*x)+c;
    return y;
}

int main()
{
    float a,b,c,x1,x2,xo,f1,f2,fo;
    cin>>a>>b>>c>>x1>>x2;
    f1=fun(a,b,c,x1);
    f2=fun(a,b,c,x2);
    xo=x1-((f1*(x2-x1))/(f2-f1));
    fo= fun(a,b,c,xo);
    while(fabs(fo)>=0.01)
    {
        x1=xo;
        f1=fo;
        xo=x1-((f1*(x2-x1))/(f2-f1));
        fo= fun(a,b,c,xo);
    }
    cout<<"Root is : "<<xo;
}
