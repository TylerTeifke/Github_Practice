#include "Student.cpp"
#include "Node.cpp"

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}

void recursion(int num){
    if(num > 0){
        cout << num << endl;
        recursion(num - 1);
    }
    else{
        cout << num << endl;
    }
}

int main(){
    Node list("John", "Smith", 1234);
    cout << "Testing addNode" << endl;
    list.addNode("Jane", "Doe", 5678);
    list.printData();

    cout << "Testing deleteNode" << endl;
    list.deleteNode();
    list.printData();

    int num = sum(10);

    cout << sum(10) << endl;
    cout << sum(0) << endl;
    cout << sum(-10) << endl;
    recursion(10);
}

