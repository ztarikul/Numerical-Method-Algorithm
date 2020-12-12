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
    float a,b,c,x1,x2,x3,f1,f2,f3;
    cout<<"Input the Value of a,b,c,x1,x2"<<endl;
    cin>>a>>b>>c>>x1>>x2;
    //cout<<"Input the value of x1 and x2"<<endl;
    //

    //cin>>x1>>x2;
    f1= fun(a,b,c,x1);
    f2= fun(a,b,c,x2);
    //cout<<f1<<endl<<f2;
    x3= x2-(f2*(x2-x1))/(f2-f1);
    f3= fun(a,b,c,x3);
    cout<<f3;
    while(fabs(f3)>=0.01)
    {
        float px2=x2;
        x2=x3;
        x1=px2;
       x3= x2-((f2*(x2-x1))/(f2-f1));
       f3= fun(a,b,c,x3);
    }
    cout<<"The Root is : "<<x3;*/
    return 0;

}
