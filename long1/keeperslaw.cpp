#include<iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        // square of the time period is directly proportional to the cube of the semi major axis (T2 = xR3)
        // T1/R1 = T2/R2

        int t1,t2,r1,r2;
        cin>>t1>>t2>>r1>>r2;
        if(t1*t1*r2*r2*r2 == t2*t2*r1*r1*r1)
        {
            cout<<"yes"<<endl;
        }
        else
            cout<<"no"<<endl;
    }
    return 0;

}