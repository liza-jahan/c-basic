#include<iostream>
#include<vector>
#include<string>
#include<conio.h>
#include<iterator>
 using namespace std;
 int main ()
{ int i;

  vector<int>vec;//amra caile vector<int>vec(5,-2) avabe o likte pari....ate bucai 5 ta value jar man -2 kore ;
  vector<int>::iterator it;
  for(i=1;i<=5;i++){
    vec.push_back(i);}

    for(i=0;i<vec.size();i++)
    {
        cout << vec[i] << "\t";
    }
    puts(" ");
    it = vec.begin();//output 1 2 3 4 5;
      it++;                       //  1;
   cout << *it << endl;
//  cout << end;
 getch();
}
