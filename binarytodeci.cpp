#include<iostream.h>
using namespace std;
int binaryTodecimal(int n)
{
    cout<<"enter a binary number";
    cin>>n;
    int x=1;
    int ans=0;
    while(n>0){
       int y=n%10;
       ans+=x*y;
       x*=2;
       n/=10;

    }
    return ans;
    }

int main(){
    int n;
    cin>>n;
    cout<<binaryTodecimal(n);

}
