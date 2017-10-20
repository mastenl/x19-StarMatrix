//Author:Masten Leonard
#include <vector>
#include <iostream>
using namespace std;

int main()
{
  int row;
  int column;
  vector<vector< char > > starTable;

  cout << "Enter rows and columns of stars:" << '\n';
  cin >> row;
  cin >> column;
  if(row<=0)
  {
    return 0;
  }
  if(column<=0)
  {
    return 0;
  }


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
