#include<iostream>
#include<math.h>
using namespace std;

float fun(float x, float a, float b, float c)
{
    float y= (a*x*x)+(b*x)+c;
    return y;
}
int main()
{
    float a,b,c,x1,x2,Xo,f1,f2,fo,y;
    cout<<"Input the value of a,b,c"<<endl;
    cin>>a>>b>>c;
    cout<<"Input the value of x1 and x2"<<endl;
    cin>>x1>>x2;
    f1= fun(x1,a,b,c);
    f2= fun(x2,a,b,c);
    if(f1*f2<0)
    {
        Xo=(x1+x2)/2;
        fo= fun(Xo,a,b,c);
        while(fabs(fo)>=0.01)
        {
            if(f1*fo<0)
            {
                x2=Xo;
                f2=fo;
                Xo=(x1+x2)/2;
                fo=fun(Xo,a,b,c);

            }
            if(f2*fo<0)
            {
                x1=Xo;
                f1=fo;
                Xo=(x1+x2)/2;
                fo=fun(Xo,a,b,c);
            }
        }
    }
    cout<<"The Root is :"<<Xo;     //done
}

