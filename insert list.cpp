#include<iostream>
#include<list>
#include<iterator>
#include<algorithm>
using namespace std;
int main()
{
 int ar[7] = {1,3,2,8,5,7,4};
   list<int>mylist(ar,ar+7);
   list<int>::iterator it;
    it = find(mylist.begin(),mylist.end(),8);
  // it =mylist.begin();
  // it++;
   cout<<*it<<endl;
   mylist.insert(it,45);
  // mylist.insert(it,87);
  for( it = mylist.begin(); it != mylist.end (); it++){

    cout << *it<<"\t"; }
    cout <<"\n";



}

