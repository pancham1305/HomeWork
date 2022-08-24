#include <iostream>
using namespace std;

class Employee{
    private:
        string name;
        int id;
        float salary;
    public:
    Employee(string name, int id, float salary){
        this->name = name;
        this->id = id;
        this->salary = salary;
    }
    void display(){
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "salary: " << salary << endl;
    }
};

int main(){
    string n;
    int i;
    float s;
    cout << "Enter the Name of employee: \n";
    cin >> n;
    cout << "Enter the ID of employee: \n";
    cin >> i;
    cout << "Enter the salary of employee: \n";
    cin >> s;
    Employee e(n, i, s);
    e.display();
    return 0;
}