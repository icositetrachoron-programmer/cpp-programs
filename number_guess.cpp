#include <bits/stdc++.h>
using namespace std;
//https://stackoverflow.com/a/40275692
int main() {
  int upper_bound = 100;
  int lower_bound = 1;
  string answer;
  int guess;
  cout << "Think of a number between 1 and 100 and I will guess it.\n";
  while(true){
    guess = rand()%((upper_bound - lower_bound) + 1) + lower_bound;
    cout<<"Guess: "<<guess<<endl;
    cout<<"Type 'yes' if the guess is correct, 'smaller' if the number is smaller, and 'larger' if the number is larger. >> ";
    cin >> answer;
    if (answer == "yes") {
      cout<<"The number is "<<guess;
      break;
    } else if (answer == "smaller") {
        if (upper_bound == 1){
          cout<<"The smallest possible value is 1. Program ended";
          break;
        } else {
          upper_bound = guess-1;
        }
    } else if (answer == "larger") {
        if (lower_bound == 100){
          cout<<"The largest possible value is 100. Program ended";
          break;
        } else {
          lower_bound = guess+1;
        }
    } else {
      cout<<"Unknown phrase. Note that 'yes', 'smaller', and 'larger' are case sensitive."<<endl;
    }
  }
}
