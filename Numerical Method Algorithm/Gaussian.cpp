#include<iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"How many unknown Variable : "<<endl;
    cin>> m;
    cout<<"How many Equation : "<<endl;
    cin>>n;
    float arr[10][10];
    float arr3[10][10];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m+1; j++)
        {
            cin>>arr[i][j];
            arr3[i][j]=arr[i][j];
        }
    }
    int arr2[100][100];
        for(int i=0; i<n; i++)
    {
        for(int j=0; j<m+1; j++)
        {
            if(arr[i][i]==0)
            {
                arr2[i][j]=arr3[i+1][j];
                arr3[i+1][j]=arr[i][j];
            }
            if(arr[i][i]!=0)
            {
                arr2[i][j]=arr3[i][j];
            }

            cout<<endl<<arr2[i][j]<<endl;
        }
    }
    float v= arr2[0][0];
    float w=arr2[1][0];
        int k=0;
        int l=0;
 for(int p=0; p<n-1; p++)
 {
   // float d= arr[p][p];
    //float m= arr[p+1][p];
    for(int i=1; i<n; i++)
    {
        //int k=p;
        int s=l;
        for(int j=0; j<m+1; j++)
        {
            arr2[i][j]=arr2[i][j]-((arr2[k][l]*w)/v);
            s++;
        }
        w=arr2[p+2][0];
    }
    v=arr2[p+1][p+1];
    w=arr2[p+2][p+1];
    k++;
    l++;
}
    /*for(int i=2; i<3; i++)
    {
        int k=1;
        int l=1;
        for(int j =1; j<4; j++)
        {
            arr[i][j]=arr[i][j]-((arr[k][l]*m)/d);
            l++;
        }
        m= arr[3][1];
    }*/
       //float arr[10][10];
       cout<<endl<<endl;
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<arr2[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl<<endl;

    float x3= arr2[2][3]/arr2[2][2];
    float x2= (arr2[1][3]-arr2[1][2]*x3)/arr2[1][1];
    float x1= (arr2[0][3]-arr2[0][1]*x2-arr2[0][2]*x3)/arr2[0][1];
    cout<<"x1 : "<<x1<<endl;
    cout<<"x2 : "<<x2<<endl;
    cout<<"x3 : "<<x3<<endl;

}
