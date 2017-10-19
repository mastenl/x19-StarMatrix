//Author:Masten Leonard
#include <vector>
#include <iostream>
using namespace std;

int main()
{
  int row;
 int column;
  vector<vector< char > > starTable;

  cout << "Enter the number of columns of stars:" << '\n';
  cin >> column;
  cout << "Enter the number of rows of stars:" << '\n';
  cin >> row;

  starTable.resize(row);

  for(int i = 0; i < starTable.size() ;i++)
  {
    starTable[i].resize(column);
        for(int j = 0; j < starTable[i].size() ;j++)
        {
          starTable[i][j] = '*';
          cout<<starTable[i][j];
        }
        cout << endl;
  }
  return 0;
}
