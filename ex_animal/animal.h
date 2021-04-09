#pragma once
#include<iostream>
using namespace std;
#include<string>
class animal
{
	private:
		string name, color ,food;
		float length,age, weight;
		
	public:
		animal();
		animal(string na, string co,string fo, float ag, float le, float wei);
		void set_data_animal(string na, string co, string fo, float ag, float le, float wei);
		string get_name();
		string get_color();
		string get_food();
		float get_age();
		float get_length();
		float get_weight();
		void display();

		void pets_animals();
		void non_pets_animals();


		~animal();
};

