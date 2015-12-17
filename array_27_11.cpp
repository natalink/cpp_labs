#include <iostream>
#include <string>
#include <vector>
#include <memory>
using namespace std;


class AbstractVal{
public:
    virtual void print() = 0;
};

class StrVal : public AbstractVal {
    string x_;
public:
    StrVal(string x) : x_(x) {}
    void print() override {
        cout << x_ << endl;
    }
};

class IntVal : public AbstractVal {
    int x_;
public:
    IntVal(int x) : x_(x) {}
    void print() override {
        cout << x_ << endl;
    }
};

typedef unique_ptr<AbstractVal> valptr;


class Seznam {
public:
    void add(valptr p) { pole.push_back(move(p)); }
    void print() { for (const auto&x : pole) x->print(); }
private:
    vector<valptr> pole;
};

int main(){
    Seznam s;
    s.add(make_unique<IntVal>(123));
    s.add(make_unique<StrVal>("Adgfjhdlsf"));
    s.print();
    system("pause");
}

