#include <iostream>
#include "inf_system.h"
#include <vector>       

using namespace std;


vector<tuple> vector_of_tuples;

void inf_system::insert(const string& first_name, const std::string& last_name, const position& position,
const size_t& telephone, const std::string& address){
    auto t = make_tuple(first_name, last_name, position, telephone, address);
    cout << "Pridano: " << first_name << endl;
  //  add_to_vector_of_tuples
    vector_of_tuples.push_back(t);
    
}

int main(){
    inf_system inf_system;
    inf_system.insert("Pepa", "Skoba", student, 2343241324, "adresa nejaka");

 
}  
void print_vector(const vector<inf_system::row_def_const_ptr>& vector) {
    for (const auto& r : vector) {
        cout << get<0>(*r) << " " << get<1>(*r) << " " << get<2>(*r) <<
        " " << get<3>(*r) << " " << get<4>(*r) << endl;
    }
}
