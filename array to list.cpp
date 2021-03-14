#include<iostream>
#include<list>
#include<iterator>
using namespace std;
int main()
{
 int ar[7] = {1,3,2,8,5,7,4};
   list<int>mylist(ar,ar+7);
   list<int>::iterator it;


  for( it = mylist.begin(); it != mylist.end (); it++){

    cout << *it<<endl; }
    cout <<"\n";



}
