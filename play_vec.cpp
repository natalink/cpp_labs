#include <algorithm>
#include <functional>
#include <iostream>
#include <vector>
using namespace std;

bool IsEven(int n) {
    return (n % 2) == 0;
}


int main(int argc, char ** arg)
{
    vector<int> vec{ 4, 9, 10, 7, 1 };
    vector<int>::iterator it;
    int even = count_if(vec.begin(), vec.end(), IsEven);
    cout << "Even numbers, algorithm: " << endl;

    cout << even << endl;
    system("pause");

    cout << "Even,lambda "<< endl;
    int n = count_if(vec.begin(), vec.end(), [](int& x) { return (x % 2) == 0; });
    cout << n << endl;

   
    cout << "Sorted vector:  " << endl;
    sort(vec.begin(), vec.end());
    for (it = vec.begin(); it != vec.end(); ++it){
       
        cout << *it << ' ';
       
    }
    system("pause");

    cout << "reverse vector: " << endl;
    reverse(vec.begin(), vec.end());
    for (it = vec.begin(); it != vec.end(); ++it){

        cout << *it << ' ';

    }
    system("pause");


}
