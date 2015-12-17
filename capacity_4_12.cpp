#include <memory>
#include <vector>
#include <iostream>
#include <string>
using namespace std;
template <typename T> class array {
public:
array() {
capacity = 10;
int_array = make_unique< T[]>( capacity);
}
void insert(T a){
int_array[last_el] = a;
last_el++;
capacity++;
}
void erase(int a){
for (a; a < capacity; ++a){
int_array[a] = int_array[a + 1];
int_array[capacity - 1] = 0;
}
}
T at(int a){
return int_array[a];
}
int size(){
return last_el;
}
private:
unique_ptr< T[]> int_array;
int last_el, capacity;
};
int main()
{
array< int> Pole;
Pole.insert(1);
Pole.insert(2);
Pole.insert(3);
for (int i = 0; i < Pole.size(); ++i){
cout << "Pole: " << Pole.at(i) << endl;
}
Pole.erase(1);
system("pause");
}
