#include<iostream>
using namespace std;
int fip(int n){
    
    if(n==0){
        return 1;

    }
    else if (n==1)
    {
        // p[0]=1;
        //p[1]=1;
        return 1;
    }
    int *p=new int[n+1];
    p[0]=1;
    p[1]=1;
    for(int i=2;i<n+1;i++)
    {
        p[i]=(p[i-1]+p[i-2])%1000000007;
    }
    return p[n];

}
int main(){
    int n=5;
    int x=fip(n);
    cout<<x<<endl;
}