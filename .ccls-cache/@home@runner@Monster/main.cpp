#include <iostream>
using namespace std;
#include"monster.h"

int main() {
  monster m("Strange",10,20);
  //monster x[10]={{"JJ",20,20},{"Burin"}};
  monster a("JJ",20,20),b("Sittipoj");
  
    monster *p;
  p=new monster[3];
  // how to create a monster object for p
  // how to delete 
  delete []p;
}