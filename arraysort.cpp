#include<iostream>

#include<iterator>
#include<algorithm>
#include<conio.h>
 using namespace std;
 int main()
 {

  int ar[5]={5,2,1,6,8};
  sort(ar,ar+5);
  for (int i=0;i<5;i++)
  {
    cout<<ar[i] <<"\t";
  }
    cout<<endl;



 }
