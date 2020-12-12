#include<iostream>
using namespace std;
float fun1(float a, float b, float c, float x)
{
    float p= (-c-(a*x*x))/b;
    return p;
}
float fun2(float a, float c, float x)
{
    float q= -c/(a*x);
    return q;
}

int main()
{
    float a,b,c,x;
    cout<<"Enter a,b,c"<<endl;
    cin>>a>>b>>c;
    cout<<"Enter x;"<<endl;
    cin>>x;
    if(b==0)
    {
        float f1=fun2(a,c,x);
        float f2= fun2(a,c,f1);
        float f3= fun2(a,c,f2);
        float f4= fun2(a,c,f3);
        if(f1==f3)
        {
            cout<<"Oscillatory Divergence"<<endl;
        }
        if(f3>f2&&f4>f3)
        {
            cout<<"Monotone Divergence"<<endl;
        }
        if(f2==f3||f3==f4)
        {
            cout<<"Root is : "<<f3;
        }
    }

     if(b!=0)
    {
        float f1=fun1(a,b,c,x);
        float f2= fun1(a,b,c,f1);
        float f3= fun1(a,b,c,f2);
        float f4= fun1(a,b,c,f3);
        if(f1==f3)
        {
            cout<<"Oscillatory Divergence"<<endl;
        }
        if(f3>f2&&f4>f3)
        {
            cout<<"Monotone Divergence"<<endl;
        }
        if(f2==f3||f3==f4)
        {
            cout<<"Root is : "<<f3;
        }
    }
}
