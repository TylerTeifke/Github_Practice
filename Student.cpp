#include <string>
#include <iostream>
using namespace std;

class Student {

    private:
        string firstName = "";
        string lastName = "";
        int number = 0;

    public:
        Student(string newFirst, string newSecond, int newNumber){
            this->firstName = newFirst;
            this->lastName = newSecond;
            this->number = newNumber;
        }

        void print(){
            cout << "First Name: " << firstName << endl;
            cout << "Last Name: " << lastName << endl;
            cout << "Number: " << number << endl;
        }
};