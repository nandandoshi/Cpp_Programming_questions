#include<iostream>
using namespace std;
   class number
{
public:
int n ,i;
 void get()
{
  cin >> n;
}
  void show ()
{
  for(i=1;i<=n;i++)
{
  cout<<i<<" ";
}
}
};

    int main ()
{
   number obj;
  obj.get();
  obj.show();
   return 0;
}
