#include "Student.cpp"
#include "Node.cpp"

int main(){
    Node list("John", "Smith", 1234);
    cout << "Testing addNode" << endl;
    list.addNode("Jane", "Doe", 5678);
    list.printData();

    cout << "Testing deleteNode" << endl;
    list.deleteNode();
    list.printData();

    //TODO: Make a linked list of students
}