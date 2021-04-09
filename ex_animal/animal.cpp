#include "animal.h"
#include<iostream>
using namespace std;
#include<string>

// this constructor is empty   and this way initialization list

animal::animal() :name("UnKnown"), color("UnKnown"),food("UnKnown"), age(0.0),length(0.0), weight(0.0)
{
	
}
                //this constructor is take parameter by way initialization list
animal::animal(string na, string co, string fo, float ag, float le, float wei) : name(na), color(co),food(fo), age(ag), length(le), weight(wei)
{

}
void animal::set_data_animal(string na, string co, string fo, float ag, float le, float wei)
{
	name = na;
	color = co;
	food = fo;
	age = ag;
	length = le;
	weight = wei;
}
string animal::get_name()    //This Function is Usted for Returning  name
{
	return name;
}
string animal::get_color()    //This Function is Usted for Returning  color
{
	return color;
}
string animal::get_food()   //This Function is Usted for Returning  food 
{
	return food;
}
float animal::get_age()     //This Function is Usted for Returning age 
{
	return (age);
}
float animal::get_length()   //This Function is Usted for Returning  length
{
	return length;
}
float animal::get_weight()   //This Function is Usted for Returning weight
{
	return weight;
}
void animal::display()     //this function is used for Displaying the Data of Animals 
{
	cout << " This is Data of animals" << endl;
	cout << "Name   : " << name << endl;
	cout << "Color  : " << color << endl;
	cout << "Food   : " << food << endl; 
	cout << "Age    : " << age <<"  Years"<< endl;
	cout << "Length : " << length<<" Meters" << endl;
	cout << "Weight : " << weight <<"  Kgm"<< endl;
}

void animal::pets_animals()      //this function has information of pets animals 
{
	cout << "Be Careful to Play Games with Pets Animal" << endl;
	cout << "Buy some toys for your pets " << endl;
	cout << "A Pet is a Fun Animal and That helps you in the House or in any other woek " << endl;
	cout << "You Must be interested in Caring for him . " << endl;

}
void animal::non_pets_animals()     // this function  has information of Non-Domestic animals
{
	cout << "Non pets Animals are Dangerous " << endl;
	cout << "Non-Domestic animals are the ones That feed on prey " << endl;
	cout << "Non-Domestic animals are eating All Meats and Green grass " << endl;
}

animal::~animal()       //this Destructor
{
	cout << " Thanks For Cooperation \n ";
}
