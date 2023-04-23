#include <iostream>
#include <ctime>
using namespace std;

int board[11][11];
bool used[11][11];

int row[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int col[] = {-1, 0, 1, -1, 1, -1, 0, 1};

string player1;

int moves;
int opened;
void restart();

void fill_board() {

  for (int i = 0; i < 11; ++i) {
    for (int j = 0; j < 11; ++j) {
      board[i][j] = 0;
      used[i][j] = false;
      moves = 0;
      opened = 0;
    }
  }

  for (int i = 0; i < 11; ++i) {
    board[0][i] = -1;
    board[i][0] = -1;
    board[10][i] = -1;
    board[i][10] = -1;
  }

  srand(time(0));
  int mines = 0;
  while (mines < 10) {
    int x = rand() % 9 + 1;
    int y = rand() % 9 + 1;
    if (board[x][y] != 9) {
      board[x][y] = 9;
      for (int i = 0; i < 8; ++i) {
        if (board[x + row[i]][y + col[i]] != -1 && board[x + row[i]][y + col[i]] != 9) {
          board[x + row[i]][y + col[i]]++;
        }
      }
      mines++;
    } else {}
  }
}

void print_board_lose() {
  cout << "   ";
  for (int i = 1; i <= 9; ++i) {
    cout << i << " ";
  }
  cout << "\n -------------------\n";
  for (int i = 1; i <= 9; ++i) {
    cout << " " << i << "|";
    for (int j = 1; j <= 9; ++j) {
      cout << board[i][j] << ' ';

    }
    cout << '\n';
  }
}

void print_board() {
  cout << "   ";
  for (int i = 1; i <= 9; ++i) {
    cout << i << " ";
  }
  cout << "\n -------------------\n";
  for (int i = 1; i <= 9; ++i) {
    cout << " " << i << "|";
    for (int j = 1; j <= 9; ++j) {
      if (used[i][j]) {
        cout << board[i][j] << ' ';
      } else {
        cout << 'x' << ' ';
      }
    }
    cout << '\n';
  }
}

void enter_players_nicks() {
  cout << "Please, enter the player's nickname: \n";
  cin >> player1;
}
//возвращаем пару
pair<int, int> next_move() {
  bool valid = false;
  int cur_row, cur_col;
  while (!valid) {
    if (moves % 2 == 0) {
      cout << player1 << " ";
    } else {
      cout << player1 << " ";
    }

    cout << " now is your turn, please enter the data like this (enter through the space row[1-9] column[1-9]): \n";
    cin >> cur_row >> cur_col;

    if (cur_row > 9 || cur_row < 1 || cur_col > 9 || cur_col < 1 || used[cur_row][cur_col]) {
      cout << "Invalid move. Try again: \n";
    } else {
      valid = true;
    }
  }
  return {cur_row, cur_col};
};

void recursion(int move_row, int move_col) {
  used[move_row][move_col] = true;
  opened++;
  for (int i = 0; i < 8; ++i) {
    if (!used[move_row + row[i]][move_col + col[i]]) {
      if (board[move_row + row[i]][move_col + col[i]] > 0 && board[move_row + row[i]][move_col + col[i]] < 9) {
        used[move_row + row[i]][move_col + col[i]] = true;
        opened++;
      } else if (board[move_row + row[i]][move_col + col[i]] == 0) {
        recursion(move_row + row[i], move_col + col[i]);
      }
    }
  }
}

void go_on() {
  cout << "Would you like to play again? (Y/N): \n";
  char re;
  cin >> re;
  if (re == 'Y') {
    restart();
  } else if (re == 'N') {
    exit(0);
  } else {
    bool good = false;
    while (!good) {
      cout << "You have entered wrong value. Answer again.Would you like to play again? (Y/N): \n";
      cin >> re;
      if (re == 'Y' || re == 'N') {
        good = true;
      }
    }
    if (re == 'Y') {
      restart();
    } else if (re == 'N') {
      exit(0);
    }
  }
}

void game() {
  pair<int, int> move = next_move();
  int move_row = move.first;
  int move_col = move.second;
  if (board[move_row][move_col] == 9) {
    cout << "Game Ower\n";
    print_board_lose();
    if (moves % 2 == 0) {
      cout << player1 << " ";
    } else {
      cout << player1 << " ";
    }
    cout << "Your Lose. \n";

    go_on();

    //если поле равно нулю
  } else if (board[move_row][move_col] == 0) {
    recursion(move_row, move_col);
    //если поле не равно не мине не нулю
  } else {
    used[move_row][move_col] = true;
    opened++;
  }
  moves++;
  print_board();
  if (opened == 9 * 9 - 10) {
    cout << "You Win\n";
    go_on();
  } else {
    game();
  }
}

void restart() {
  fill_board();
  print_board();
  game();
}

int main() {
  cout << "--------------------------\n";
  cout << "New Game: \n";
  enter_players_nicks();
  fill_board();
  print_board();
  game();
}