#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "monster.h"
#include "Thanos.h"

int main(int argc, char* argv[]) 
{
  Thanos T;
  int n;
  int hp_in;
  string ky;

  cout << "How many monsters? ";
  cin >> n;

  monster *m = new monster[n];

  for(int j = 0; j < n; j++)
  {
    cout << "Input monster's HP : ";
    cin >> hp_in;
    m[j].set_hp(hp_in);
    cout << "Input monster's name : ";
    cin >> ky;
    m[j].set_name(ky);
    
  }
  
  cout << "\n" << "Thanos is coming." << "\n";
  T.operator++();
  m[1].Attack(m[2]);
  cout << "Thanos is coming." << "\n";
  T.operator++();
  
    T.snap_finger(m, n);
  
  cout << "Thanos is coming." << "\n";
  T.operator++();
  cout << "Thanos is coming." << "\n";
  T.operator++();
  
    T.snap_finger(m, n);

  cout << "Thanos is coming." << "\n";
  T.operator++();
  cout << "Thanos is coming." << "\n";
  T.operator++();
  cout << "Thanos is here!" << "\n";
    T.snap_finger(m, n);

  delete []m;
  
  return 0;
}
