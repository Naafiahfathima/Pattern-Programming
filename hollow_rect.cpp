#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the number:";
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == 1 || i == 5 || j == 1 || j == 5)
        cout << "*";
      else
      {
        cout << " ";
      }
    }
    cout << "\n";
  }
}
