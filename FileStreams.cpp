#include <fstream>
#include <iostream>
using namespace std;

void outputStreamStatus(ofstream& stream) {

  if (stream.is_open()) {

    cout << "File stream is still open..." << endl;
    return;

  }
  cout << "File stream is closed." << endl;
}

int main() {

  try {

    ofstream testFile("testFile.txt");
    testFile << "Text to add" << endl;
    cout << endl << "Added text to testFile.txt..." << endl;
    outputStreamStatus(testFile);
    cout << "Closing file..." << endl;
    testFile.close();
    outputStreamStatus(testFile);
    cout << endl;

  } catch(...) {

    cout << "Something went wrong..." << endl << endl;

  }
}
