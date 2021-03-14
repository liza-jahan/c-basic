
#include<iostream>
#include<vector>
#include<string>
#include<conio.h>
 using namespace std;
 int main ()
{ int i;

  vector<int>vec;

    vec.push_back(23);
    vec.push_back(34);
    vec.push_back(3);
   vec[2]=67;
    cout << vec.size()<< endl;
    for(i=0;i<vec.size();i++)
    {
        cout << vec[i] <<endl;
    }
  //  cout << end;
 getch();

}
