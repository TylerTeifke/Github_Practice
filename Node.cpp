#include <string>
#include <iostream>
using namespace std;

class Node{
    private:
        //Data for individual students
        string firstName = "";
        string lastName = "";
        int number = 0;

        //Next node in the list
        Node* next;
        Node* head;

    public:
        Node(string newFirst, string newSecond, int newNumber){
            this->firstName = newFirst;
            this->lastName = newSecond;
            this->number = newNumber;
            this->next = NULL;
            this->head = this;
        }

        void printData(){
            //Will track which node the function is currently on
            Node* current = head;
            //Will track how many students there are
            int studentNum = 1;

            while(current != NULL){
                cout << "Student #" << studentNum << endl;
                cout << "First Name: " << current->firstName << endl;
                cout << "Last Name: " << current->lastName << endl;
                cout << "Number: " << current->number << endl;
                cout << endl;

                studentNum++;

                current = current->next;
            }
        }

        void addNode(string newFirst, string newSecond, int newNumber){
            Node* newNode = new Node(newFirst, newSecond, newNumber);

            newNode->next = head;
            head = newNode;
        }

        void deleteNode(){
            if(head != NULL){
                Node* oldHead = head;
                head = head->next;
                delete oldHead;
            }
        }

};