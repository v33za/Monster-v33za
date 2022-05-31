class monster{
private:
	string name;
	int hp,potion;
public:
	/*void Attack(moster &);
          void heal();*/
	monster(string ="Bob", int =30,int=69420);
  ~monster();
};
monster::~monster(){
   cout<<"==========="<<endl;
   cout<<name<<"Destroyed"<<endl;
}

monster::monster(string n,int h,int p){
  name=n;
  hp=h;
  potion=p;
  cout<<name<<" created"<<endl;
  
}
