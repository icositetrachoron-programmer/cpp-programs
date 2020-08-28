/*
Conway's Game of Life on a 5x5 grid
Rules: https://bitstorm.org/gameoflife/
*/

#include <iostream>
using namespace std;

int main() {
  int cells[5][5];
  int count;
  int input;
  for (int k = 0; k<5; k++) {
    for (int l = 0; l<5; l++) {
      while (true) {
        cout<<"Type a one or zero value for cell "<<k+1<<" "<<l+1<<" >> ";
        cin>>input;
        if (input != 1 and input != 0) {
          cout<<"Invalid character. Please type again (type 1 or 0)\n";
        } else {
          cells[k][l] = input;
          break;
        }
      }
    }
  }
  for(int i = 0; i<5; i++){
    for(int j = 0; j<5; j++){
      if (cells[i][j] == 1) {
        if (cells[i+1][j] == 1) {
          count++;
        }
        if(cells[i-1][j] == 1) {
          count++;
        }
        if(cells[i][j+1] == 1) {
          count++;
        }
        if(cells[i][j-1] == 1) {
          count++;
        }
        if(cells[i+1][j+1] == 1) {
          count++;
        }
        if(cells[i-1][j+1] == 1) {
          count++;
        }
        if(cells[i+1][j-1] == 1) {
          count++;
        }
        if(cells[i-1][j-1] == 1) {
          count++;
        }

        if (count <= 0) {
          cells[i][j] = 0;
          continue;
        } else if (count >= 4) {
          cells[i][j] = 0;
        } else{
          continue;
        }
      }
    }
  }
  for (int m = 0; m<5; m++) {
    for (int n = 0; n<5; n++) {
      cout<<cells[m][n]<<" ";
    }
    cout<<"\n";
  }
  return 0;
}
