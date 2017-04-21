#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void printBoard(int n, const vector<vector<bool> >& board)
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << (board[i][j] ? " Q" : " -");
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++) 
    cout << " *";
  cout << endl;
}

bool isGoodPosition(int row, int col, int n, const vector<vector<bool> >& board)
{
  for (int i = 0; i < n; i++) if (board[row][i]) return false;
  for (int i = 0; i < n; i++) if (board[i][col]) return false;
  for (int i = 0; i < n; i++) {
    int j = i - (row-col);
    if (j >= 0 && j < n && board[i][j]) return false;
  }
  for (int i = 0; i < n; i++) {
    int j = (row+col)-i;
    if (j >= 0 && j < n && board[i][j]) return false;
  }
  return true;
}

void printQueen(int qIndex, int n, vector<vector<bool> >& board)
{
  if (qIndex == n) {
    printBoard(n, board);
    return;
  }
  for (int col = 0; col < n; col++) {
    // ask if (qIndex, col) is a good position
    if (isGoodPosition(qIndex, col, n, board)) {
      board[qIndex][col] = true;
      printQueen(qIndex+1, n, board);
      board[qIndex][col] = false;
    }
  }
}

void printQueenWithNoThreat(int n)
{
  vector<vector<bool> > board(n, vector<bool>(n, false));
  printQueen(0, n, board);
}

int main(int argc, char* argv[])
{
  int n = argc > 1 ? atoi(argv[1]) : 8;
  printQueenWithNoThreat(n);
}
