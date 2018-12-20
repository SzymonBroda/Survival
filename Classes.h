#include <iostream>

using namespace std;
const int Max_nb_ablilites = 10; //Max posible number of abilities 
//enum abilities {sense, };

//----------------------------umiejetnosci
class Creature;
class Point;



class ability
{
protected:
	int range;
	
};
class sense :public ability
{
	
};
class jump :public ability
{
	
public:
	void use_jump(Creature);
};

//----------------------------- stworzenia
class Creature
{	
protected:
	Point position();
	int velocity;
	char sign;
	int range_m;//zasieg ruchu
	int range_s;//zasieg wzroku
	ability list_abl[Max_nb_ablilites]; // list of abilities
public:
	void move(int);
	virtual void die();
	virtual int decide_wmove(); // zdecyduj gdzie sie ruszyc
};

class Predator :public Creature
{

public:
	
	
	
};

class prey :public Creature // ofiara
{
	
	
};

//------------------- Mapa itp
class Map
{
private:
	int height;
	int width;
public:
	Map(int h = 20, int w = 50);
	void create();
	void load();
};

class Point
{
public:
	int x; // szerokosc
	int y; // wysokosc
	Point(int x1 = 0, int y1 = 0);
	void set(int x1, int y1 = -1); //gdy mniejsze od 0 - losowanie 
};
