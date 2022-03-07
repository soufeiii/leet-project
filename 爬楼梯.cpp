#include <iostream>
using namespace std;
 
int main ()
{
   int n = 3;
   int a1=0, a2=1;
   for(int i=0;i<n;i++)
   {
       int temp=a2;
       a2=a1+a2;
       a1=temp;

   }
 
   cout <<  a2 << endl;
 
   return 0;
}