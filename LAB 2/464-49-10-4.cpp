//CODEFORCE PROBLEM : 158A
//PROBLEM NAME : NEXT ROUND

#include<iostream>
using namespace std;
int main ()
{ int a,c,b,x=0;
  cin>>a>>c;
  for(int i=0;i<a;i++)
  {  cin>>b;
     if(b>c&&b>0)
      x++;
  }
    cout<<x;
 return 0;
}
