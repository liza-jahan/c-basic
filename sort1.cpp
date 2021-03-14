#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#include<conio.h>
 using namespace std;
 int main ()
{ int i;

  vector<int>vec;//amra caile vector<int>vec(5,-2) avabe o likte pari....ate bucai 5 ta value jar man -2 kore ;
vector<int>::iterator it;
    vec.push_back(23);
    vec.push_back(34);
    vec.push_back(3);
   vec.push_back(67);
     sort(vec.begin(),vec.end());
    //cout << vec.size()<< endl;
    for(it = vec.begin();it !=vec.end();it++)
    {
        cout << *it <<"\t";
    }
    puts(" ");
//  cout << end;
 getch();
}
