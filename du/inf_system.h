#include <tuple> 
#include <iostream>

enum position { student, teacher, external_worker};
using namespace std;

class inf_system
{
typedef tuple<string, string, position, size_t, string> row_def;
typedef const row_def * row_def_const_ptr; 
template<size_t idx>
using type = typename tuple_element<idx, row_def>::type;

void insert(const string& first_name, const std::string& last_name, const position& position, const size_t& telephone, const std::string& address);

};
