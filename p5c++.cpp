#include<iostream>
using namespace std;
int main()
{
  int age;
  cout<<"Enter your age :- ";
  cin>>age;
  if(age>=18)
  {
  	cout<<"you are eligible for voting.";
  }
  else
  {
  	cout<<"your are noneligible for voting.";
  	cout<<"wait for"<<18-age<<"year(s):";
  }
  return 0;
}

