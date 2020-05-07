#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  int Arr [14][5];

  // Initialization
  // Arr[0][0] = X reads "If youre at state 0 and see an I, go to X"
  // 0-4 is I,V,X,L,C respectively.

  // q0
  Arr[0][0] = 1;
  Arr[0][1] = 4;
  Arr[0][2] = 7;
  Arr[0][3] = 10;
  Arr[0][4] = 11;

  // q1
  Arr[1][0] = 2;
  Arr[1][1] = 6;
  Arr[1][2] = 6;
  Arr[1][3] = -1;
  Arr[1][4] = -1;

  // q2
  Arr[2][0] = 3;
  Arr[2][1] = -1;
  Arr[2][2] = -1;
  Arr[2][3] = -1;
  Arr[2][4] = -1;

  // q3
  Arr[3][0] = -1;
  Arr[3][1] = -1;
  Arr[3][2] = -1;
  Arr[3][3] = -1;
  Arr[3][4] = -1;

  // q4
  Arr[4][0] = 5;
  Arr[4][1] = -1;
  Arr[4][2] = -1;
  Arr[4][3] = -1;
  Arr[4][4] = -1;

  // q5
  Arr[5][0] = 2;
  Arr[5][1] = -1;
  Arr[5][2] = -1;
  Arr[5][3] = -1;
  Arr[5][4] = -1;

  // q6
  Arr[6][0] = -1;
  Arr[6][1] = -1;
  Arr[6][2] = -1;
  Arr[6][3] = -1;
  Arr[6][4] = -1;

  // q7
  Arr[7][0] = 1;
  Arr[7][1] = 4;
  Arr[7][2] = 8;
  Arr[7][3] = 13;
  Arr[7][4] = 12;

  // q8
  Arr[8][0] = 1;
  Arr[8][1] = 4;
  Arr[8][2] = 9;
  Arr[8][3] = -1;
  Arr[8][4] = -1;

  // q9
  Arr[9][0] = 1;
  Arr[9][1] = 4;
  Arr[9][2] = -1;
  Arr[9][3] = -1;
  Arr[9][4] = -1;

  // q10
  Arr[10][0] = 1;
  Arr[10][1] = 4;
  Arr[10][2] = 7;
  Arr[10][3] = -1;
  Arr[10][4] = -1;

  // q11
  Arr[11][0] = -1;
  Arr[11][1] = -1;
  Arr[11][2] = -1;
  Arr[11][3] = -1;
  Arr[11][4] = -1;

  // q12
  Arr[12][0] = 1;
  Arr[12][1] = 4;
  Arr[12][2] = -1;
  Arr[12][3] = -1;
  Arr[12][4] = -1;

  // q13
  Arr[13][0] = 1;
  Arr[13][1] = 4;
  Arr[13][2] = -1;
  Arr[13][3] = 7;
  Arr[13][4] = -1;


// Actual code

  char Rom[10];

  cout << "Please enter a Roman numeral from 1 to 100\n";
  cin >> Rom;
  int Length = strlen(Rom);
  int state = 0;
  int i = 0;
  int stateint;

  while( ( Length != 0) && (state != -1) )
  {
    if(Rom[i] == 'I')
    {
        stateint = 0;
    }
    else if(Rom[i] == 'V')
    {
      stateint = 1;
    }
    else if(Rom[i] == 'X')
    {
      stateint = 2;
    }
    else if(Rom[i] == 'L')
    {
      stateint = 3;
    }
    else if(Rom[i] == 'C')
    {
      stateint = 4;
    }
    else
    {
      stateint = -1;
    }
      i++;
      Length--;
      state = Arr[state][stateint];
  }

  if(state == -1)
  {
      cout << "Rejected\n";
  }
  else
  {
      cout << "Accepted\n";
  }






}
