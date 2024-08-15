#include <string>
#include <iostream>
using namespace std;

class Student {

    private:
        //Data for individual students
        string firstName = "";
        string lastName = "";
        int number = 0;
        //Student* next;

    public:
        Student(string newFirst, string newSecond, int newNumber){
            this->firstName = newFirst;
            this->lastName = newSecond;
            this->number = newNumber;
            //this->next = NULL;
        }

        void print(){
            cout << "First Name: " << firstName << endl;
            cout << "Last Name: " << lastName << endl;
            cout << "Number: " << number << endl;
        }

        void changeFirstName(string newName){
            this->firstName = newName;
        }
};