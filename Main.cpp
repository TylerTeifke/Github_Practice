#include "Student.cpp"
#include "Node.cpp"
#include <fstream>

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

void fileWrite(){
    // Create and open a text file
    ofstream MyFile("filename.txt");

    // Write to the file
    MyFile << "Test" << endl;
    MyFile << "Hello World" << endl;

    // Close the file
    MyFile.close();
}

void fileRead(){
    // Create a text string, which is used to output the text file
    string myText;

    // Read from the text file
    ifstream MyReadFile("filename.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline (MyReadFile, myText)) {
      // Output the text from the file
      cout << myText << endl;
    }

    // Close the file
    MyReadFile.close();
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

    fileWrite();
    fileRead();
}

