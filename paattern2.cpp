#include <iostream>
using namespace std;

int main() 
{
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      cout<<" 0";
    }
    cout<<endl;
  }
}

/*
pattern2
0
00
000
0000
*/