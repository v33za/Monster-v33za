#ifndef monster_h
#define monster_h

class monster
{
  private:
  	string name;
	 int hp,potion;
  public:

  void operator++();
  void operator--();
  void operator+=(int); // += hp

  void Attack(monster &); 
  void set_hp(int);
  int get_hp();
  void print_hp();
  void set_name(string);
  void print(); // to print all data
  bool not_dead() { return hp>0;  }

  monster(string, int=0,int=0);
  monster();

  ~monster();

};

void monster::print_hp()
{
  cout << setw(3) << "HP : " << get_hp() << "\n";
}

void monster::print()
{
  cout<<"Monster "<<name;
  cout<<" hp:"<<hp<<" potion:   "<<potion<<endl;
  
}

void monster::set_hp(int hp)
{
  this->hp = hp;
}

int monster::get_hp()
{
  return hp;
}


void monster::Attack(monster & b)
{
  // x.Attack(y)
     cout<<"ATTACK!!!!!"<<endl;
     if(this->hp>0)
     {
         cout<<"Monster got hit"<<endl;
     }
  else cout<<"I am dead"<<endl;
  
}

monster::~monster()
{
  cout<<name<<" is dead"<<endl;
}

monster::monster()
{

}

monster::monster(string n ,int p,int h)
{

  //set var
  name=n;
  hp=h ;
  potion=p;
  cout<<"monster "<<name <<" is here WAHAHAHA"<<endl;
  
}

void monster::set_name(string x)
{
  name=x;
}

#endif
