#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
  int N;
  cin >> N;

  string temp;
  int numRemove;
  for(int n = 0; n < N; n++)
  {
    cin >> numRemove;
    getline(cin, temp);
    temp.erase(temp.begin()+numRemove);
    cout << n+1;
    cout << " " << temp << "\n";
  }
}


