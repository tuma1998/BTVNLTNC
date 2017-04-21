#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

void createHadamard(int n, vector<vector<bool> >& board)
{
  if (n == 1) {
    board[0][0] = false;
    return;
  }
  createHadamard(n/2, board);
  for (int i = 0; i < n/2; i++) {
    for (int j = 0; j < n/2; j++) {
      board[i+n/2][j] = board[i][j];
      board[i][j+n/2] = board[i][j];
      board[i+n/2][j+n/2] = !board[i][j];
    }
  }
}

void printHadamard(int n, vector<vector<bool> >& board)
{
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << (board[i][j] ? " -" : " O");
    }
    cout << endl;
  }
}

void createHadamard(int n)
{
  vector<vector<bool> > board(n, vector<bool>(n, false));
  createHadamard(n, board);
  printHadamard(n, board);
}

int main(int argc, char* argv[])
{
  int n = argc > 1 ? atoi(argv[1]) : 8;
  createHadamard(n);
}

