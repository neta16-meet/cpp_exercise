#include <iostream>

using namespace std;

class Animal {
private:
	//char[]* _name;
	std::string name;
	int _num_of_legs;
	bool _is_hungry;
	bool _is_asleep;

public:
	Animal(/* char[]* _name ,*/ int _num_of_legs, bool _is_hungry, bool _is_asleep);
	~Animal();

	bool isAsleep();
	bool isHungry();
	int getNumOfLegs();
	void feed();

}