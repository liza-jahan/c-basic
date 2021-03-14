#include<iostream>
#include<list>
#include<queue>
#include<string>
#include<iterator>
using namespace std;
int main()
{

 list <float> mylist;

  list<float>::iterator it;
  mylist.push_back(10);
  mylist.push_back(14);
  mylist.push_back(9);
  mylist.push_front(5);

   cout<< mylist.size()<<endl;

}







