#include<iostream>
using namespace std;
#include<string>
#include"animal.h"
int main()
{

	string na_, co_, fo_;
	float ag_, len_, wei_;
	cout << "Welcom" << endl;
	cout << "@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#@#" << endl << endl;
	cout << "please,Enter Your Name Of Animal" << endl;
	cin >> na_;
	cout << "please,Enter Your Color Of Animal" << endl;
	cin >> co_;
	cout << "Please,Enter Your Food of Animal" << endl;
	cin >> fo_;
	cout << "please,Enter Your Age Of Animal" << endl;
	cin >> ag_;
	cout << "please,Enter Your Length Of Animal by Meters" << endl;
	cin >> len_;
	cout << "please,Enter Your Weight Of Animal by Kgm" << endl;
	cin >> wei_;

	animal Animal(na_, co_, fo_, ag_, len_, wei_);
	Animal.set_data_animal(na_, co_, fo_, ag_, len_, wei_);
	Animal.get_name();				//return name
	Animal.get_color();				//return color
	Animal.get_food();               //return food
	Animal.get_age();               //return age
	Animal.get_length();            //return length
	Animal.get_weight();           // return weight 
	Animal.display();             //  this is function is used  to display data of animal

	cout << endl << endl;

	string pets_animals;

	char ch;
	cout << "Do you this Animal is Pet ?? please ,Choice Your answer (True or False) to Advice you how to deal With this pets " << endl;
	cin >> pets_animals;
	do
	{

		cout << endl << endl;
		// This steps for Knowning this animal is pets or non Domestic 
		if (pets_animals == "True" || pets_animals == "true")
		{
			Animal.pets_animals();
			cout << endl;
		}
		else if (pets_animals == "False" || pets_animals == "false")
			{
				Animal.non_pets_animals();
				cout << endl;
			}
		else
		{
			cout << "This is Occuring erroe " << endl;
			cout << "my Dear ,please Enter true or false  " << endl;
		}
		cout << "Do Another ,please Enter (y,n)" << endl;
		cin >> ch;
		cout << endl;
		if (ch == 'y')
		{
			cin >> pets_animals;
			cout << endl;
		}
		else
			exit;
		
	} while (ch !='n');
			




}