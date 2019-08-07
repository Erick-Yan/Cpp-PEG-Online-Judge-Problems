#include <iostream>
using namespace std;

int main() {
  int T;
  int N;
  int input;
  int biggestNumber = 0;

  cin >> T;
  for(int t = 0; t < T; t++)
  {
    cin >> N;
    for(int n = 0; n < N; n++)
    {
      cin >> input;
      if(input > biggestNumber)
        biggestNumber = input;
    }
    cout << endl << biggestNumber;
    biggestNumber = 0;
  }
}


