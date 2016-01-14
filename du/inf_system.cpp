// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "inf_system.h"
#include <vector>
#include <string>

using namespace std;

vector<inf_system::row_def> vt;
inf_system::row_def row_def;


void inf_system::insert(const string& first_name, const std::string& last_name, const position& position, const size_t& telephone, const std::string& address){
	auto t = make_tuple(first_name, last_name, position, telephone, address);
	cout << "Pridano: " << telephone << endl;
	vt.push_back(make_tuple(first_name, last_name, position, telephone, address));
}

void print_vector(const vector<inf_system::row_def>& vector) {
	for (const auto& r : vector) {
		cout << get<0>(r) << " " << get<1>(r) << " " << get<2>(r) <<
			" " << get<3>(r) << " " << get<4>(r) << endl;
	}
}

int main(){
	inf_system inf_system;
	inf_system.insert("Pepa", "Skoba", student, 2343241324, "adresa Pepy");
	inf_system.insert("Adam", "Jarous", student, 34541324, "adresa Adama");
	inf_system.insert("Jarda", "Skoba", teacher, 34541324, "adresa Jardy");
	print_vector(vt);
	system("pause");


}

//vector<inf_system::row_def> find<idx>(const type<idx>& value) {
//	vector<inf_system::row_def> subvector;
//	for (inf_system::row_def &tup : vt) {
//		cout << get<idx>(tup) << endl;
//		if (get<idx>(tup) == value) {
//			subvector.push_back(tup);
//		}
//
//	}
//	return subvector;	
//}

