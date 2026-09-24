#include<iostream>
using namespace std;
int zm,a,b,a1[1000],b1[1000],i,nwd,x,y;
bool zmieniane=false;
int main()
{
    cin>>a>>b;
    if(a<b)
    {
        zm=a;
        a=b;
        b=zm;
        zmieniane=true;
    }
    a1[0]=a;
    b1[0]=b;
    i=1;
    while(a1[i-1]%b1[i-1]!=0)
    {
        a1[i]=b1[i-1];
        b1[i]=a1[i-1]%b1[i-1];
        i++;
    }
     a1[i]=b1[i-1];
     b1[i]=a1[i-1]%b1[i-1];
     nwd=a1[i];
    //cout<<a1[i]<<" "<<b1[i]<<" "<<i;
    x=0;
    y=0;
    for(int k=i-1;k>=0;k--)
    {

       x=y;
       y=(nwd-(a1[k]*x))/b1[k];
    }
    if(zmieniane==true)
    {
        zm=x;
        x=y;
        y=zm;
    }
    cout<<"x : "<<x<<endl;
    cout<<"y : "<<y;
}
