///////////////////////////////////////////////////////////////////////////////////////////////////
//                         COMPUTER METHODS 3 PRACTICAL TEST 1 (MOCK)
// Name: Kshir Ramruthan
// Student No: 214502398
// Date:
///////////////////////////////////////////////////////////////////////////////////////////////////

// ***** QUESTION 4 ****
// Question 4 has 3 parts (you do NOT need to include each class in a separate file!)
// 4.1 Create a virtual base class "Animal" which has two methods, name() and does(). 
// 4.2 From class "Animal", derive a concrete class "Bird" and "Dog".  Print appropriate message for
//     each method.
// 4.3 Write a driver program which creates an object of each type and demonstrates POLYMORPHISM. 
#include<iostream>
#include<string>

using namespace std;

class Animal
{
protected:

public:
	virtual void name()
	{
	}

	virtual void does()
	{
	}
};

class Dog : public Animal{
	void name()
	{
		cout << "Dog" << endl;
	}

	void does()
	{
		cout << "Bark" << endl;
	}
};

class Bird : public Animal{
	void name()
	{
		cout << "Bird" << endl;
	}

	void does()
	{
		cout << "Chirp" << endl;
	}
};

int main()
{
	Dog dogObj;
	Bird birdObj;

	Animal *ptrDog;
	Animal *ptrBird;

	ptrDog = &dogObj;
	ptrBird = &birdObj;

	ptrDog->name();
	ptrDog->does();
	ptrBird->name();
	ptrBird->does();

	return 0;
}