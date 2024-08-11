#include "Student.cpp"

int main(){
    Student John("John", "Smith", 1234);
    Student Luke("Luke", "King", 5678);

    John.print();
    Luke.print();
    cout << "Hello World" << endl;
}