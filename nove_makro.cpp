#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;


int main(int argc, char ** arg)
{
    string str("text #novemakro obsah makra # dalsi novemakro konec");
    unsigned first = str.find("#");
    unsigned last = str.find(" ");
    string macro_name = str.substr (first, last-first);
    cout << "macro name: " << endl;
    cout << macro_name<< endl;
    system("pause");


}
