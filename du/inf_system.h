
#include <tuple>
#include <iostream>
#include <stdio.h>
#include <vector>
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

	template<size_t idx>
	vector<row_def> find(const type<idx>& value)
	{
		vector<row_def> subvector;
		for (row_def &tup : vt) {
			cout << get<idx>(tup) << endl;
			if (get<idx>(tup) == value) {
				subvector.push_back(tup);
			}

		}
		return subvector;
	}

	template<size_t idx>
        size_t find(const type<idx>& value)
        {
		size_t count;
                for (row_def &tup : vt) {
                        cout << "Erasing " << get<idx>(tup) << endl;
                        if (get<idx>(tup) == value) {
				vt.erase(std::remove(vt.begin(), vt.end(), tup), vt.end());
                                count++;
                        }

                }
                return count;
        }


private:
	vector<row_def> vt;
};
