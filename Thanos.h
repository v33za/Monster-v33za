#include "monster.h"

class Thanos 
{
  private:
   int stones;
   int hp; // extra hp;
  public:
    /* constructor and destructor */
    Thanos(int = 0, int = 100000);
    ~Thanos(); // cout something

    void snap_finger(monster[], int);
    void operator++(); // increase the stone;
};

 Thanos::Thanos(int x, int y) 
{
  stones = x;
  hp = y;
}
void Thanos::operator++(){
  stones++;
}

Thanos::~Thanos()
{
  
};

void Thanos::snap_finger(monster m[], int n){
      if(stones<6) 
          cout<<"Stones maii porr na jaa"<<endl;
      else{
        int i;
        for(i=0;i<n;i+=2){

            m[i].set_hp(0);
        }

        
      }
}