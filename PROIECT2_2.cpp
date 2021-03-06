// PROIECT2_2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "Activity.hpp"
#include "TeacherRole.hpp"
#include "StudentRole.hpp"
#include "PersonRepository.hpp"
#include "RoomRepository.hpp"
#include "ActivityRepository.hpp"
#include "DisciplineRepository.hpp"
#include <string>
#include <vector>


int main()
{
	PersonRepository X;
	PersonRepository Y;
	
	X.Add(new Person({ new StudentRole() }, "202", "Neagu", "Oana", "oanang@gmail.com"));
	X.Add(new Person({ new StudentRole() }, "333", "Musat", "Alexandra", "alexandra.musat@gmail.com"));
	X.Add(new Person({ new StudentRole() }, "444", "Istrate", "Madalina", "madalina.istrate@gmail.com"));
	X.Add(new Person({ new StudentRole() }, "555", "Raduta", "Andreea", "andreea.raduta@gmail.com"));



	Y.Add(new Person({ new TeacherRole() }, "12345", "Popescu", "Ilinca", "ilincapopescu@gmail.com"));
	Y.Add(new Person({ new TeacherRole() }, "54321", "Ion", "Diana", "diana.ion@gmail.com"));
	Y.Add(new Person({ new TeacherRole() }, "56789", "Preda", "Ionut", "preda.ionut@gmail.com"));
	Y.Add(new Person({ new TeacherRole() }, "98765", "Dobrovat", "Anca", "anca.dobrovat@gmail.com"));


	
	
	RoomRepository R;
	R.Add(new Room("Pompeiu"));
	R.Add(new Room("Haret"));
	R.Add(new Room("Titeica"));
	R.Add(new Room("Lab 204"));

	ActivityRepository A;
	A.Add(new Activity(R.findByName("Pompeiu"), Y.findByCNP("12345"), "Curs"));
	A.Add(new Activity(R.findByName("Haret"), Y.findByCNP("54321"), "Curs"));
	A.Add(new Activity(R.findByName("Titeica"), Y.findByCNP("56789"), "Seminar"));
	A.Add(new Activity(R.findByName("Lab 204"), Y.findByCNP("98765"), "Laborator"));


	DisciplineRepository D;
	D.Add(new Discipline("OOP", "Laborator", { A.findByOwner(Y.findByCNP("12345")) }));
	D.Add(new Discipline("OOP", "Curs", { A.findByLocation(R.findByName("Haret")) }));

	std::cout << "Students:\n";
	X.print();
	std::cout << "Teachers:\n";
	Y.print();
	std::cout << "Rooms:\n";
	R.print();
	std::cout << "Activities:\n";
	A.print();

	//R.Add(new Room("Haret"));
	//A.Add(new Activity(R.findByName("Haret"), X.findByCNP("1234"), "Laborator"));
	//X.Print();

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
