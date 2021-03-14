#include<iostream>
#include<list>
#include<queue>
#include<string>
#include<iterator>
using namespace std;
int main()
{
 list<float>mylist;

  list<float>::iterator it;
  mylist.push_back(10);
  mylist.push_back(14);
  mylist.push_back(9);//list er picon a jabe
  mylist.push_front(5);//list er samon a jabe
  mylist.reverse();
   for(it = mylist.begin(); it != mylist.end (); it++)

    cout <<*it<<endl;
}
