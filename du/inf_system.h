#include <tuple>
#include <iostream>
#include <stdio.h>
using namespace std;

enum position { student, teacher, external_worker };

class inf_system
{
public:
	typedef tuple<string, string, position, size_t, string> row_def;
	typedef const row_def * row_def_const_ptr;

	template<size_t idx>
	using type = typename tuple_element<idx, row_def>::type;

	void insert(const string& first_name, const std::string& last_name, const position& position,
		const size_t& telephone, const std::string& address);

	//template<size_t idx>
	//std::vector<row_def> find(const type<idx>& value){ return 0; }
	//
};
