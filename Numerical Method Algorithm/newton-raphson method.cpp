#include<iostream>
#include<math.h>
using namespace std;
float fun1(float x, float a, float b, float c)
{
    float y= (a*x*x)+(b*x)+c;
    return y;
}
float fun2(float x,float a,float b)    //function of differentiaton of funtion 1
{
    float z= (2*a*x)+b;
    return z;
}
int main()
{
    float Xo,a,b,c,f1,f2,x,e=0.01;
    cout<<"Input the Value of a,b,c and Xo"<<endl;
    cin>>a>>b>>c>>Xo;
    f1= fun1(Xo,a,b,c);
    f2= fun2(Xo,a,b);
    x= Xo-(f1/f2);
    while(fabs(x-Xo)>=e)
    {
        Xo=x;
        f1=fun1(Xo,a,b,c);
        f2=fun2(Xo,a,b);
        x=Xo-(f1/f2);
    }
    cout<<"The Root is "<<" "<<x<<endl;
}
