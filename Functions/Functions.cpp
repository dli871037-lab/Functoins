
#include <iostream>
#include <vector>

using namespace std;

int getNonZeroCount(const vector<vector<double>>& matrix, int countOfColoumn, int countOfRow) {
  int countNonZeroElements = 0;

  for (int indexInColoumn = 0; indexInColoumn < countOfColoumn; ++indexInColoumn) {
    for (int indexInRow = 0; indexInRow < countOfRow; ++indexInRow) {
      const double& element = matrix[indexInColoumn][indexInRow];

      if (element != 0.0) {
        ++countNonZeroElements;
      }
    }
  }
  return countNonZeroElements;
}

int main()
{
  int countOfColoumn, countOfRow;
  vector<vector<double>> F, G;

  cout << "Entry count of coloumns: ";
  if (!(cin >> countOfColoumn) || countOfColoumn < 0) {
    cout << "INVALID\n"; 
    return 0; 
  }
  cout << "Entry count of rows: ";
  if (!(cin >> countOfRow) || countOfRow < 0) {
    cout << "INVALID\n"; 
    return 0; 
  }

  F.resize(countOfColoumn, vector<double>(countOfRow, 0.0));
  G.resize(countOfColoumn, vector<double>(countOfRow, 0.0));

  cout << "Entry elements of matrix F" << endl;
  for (int indexInColoumn = 0; indexInColoumn < countOfColoumn; ++indexInColoumn) {
    for (int indexInRow = 0; indexInRow < countOfRow; ++indexInRow) {
      if (!(cin >> F[indexInColoumn][indexInRow])) {
        cout << "INVALID\n";
        return 0;
      }
    }
  }

  cout << "Entry elements of matrix G: " << endl;
  for (int indexInColoumn = 0; indexInColoumn < countOfColoumn; ++indexInColoumn) {
    for (int indexInRow = 0; indexInRow < countOfRow; ++indexInRow) {
      if (!(cin >> G[indexInColoumn][indexInRow])) {
        cout << "INVALID\n";
        return 0;
      }
    }
  }

  cout << "Count of noZero elements of the first matrix: "
       << getNonZeroCount(F, countOfColoumn, countOfRow) << endl
       << "Count of noZero elements of the second matrix: "
       << getNonZeroCount(G, countOfColoumn, countOfRow) << endl;

  return 0;
}

