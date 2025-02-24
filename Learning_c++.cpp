#include<iostream>
using namespace std;

int main ()
{
int n = 0;
int sum = 0;
int check = 1 ;
int i = 1;
cout<<"N"<<i<<" = ";
cin>>n;

for (i = 2 ; i <= 20; i++)
{
  int n = 0;
  cout<<"N"<<i<<" = ";
  cin>>n;
  if (n % 2 == 0)
    sum = sum + n;
  else
    check = n;
  if (check > n)
      check = n;      
}
cout<<"Sum = "<<sum<<endl;
cout<<"Smallest odd number = "<<check;


}//end of main
