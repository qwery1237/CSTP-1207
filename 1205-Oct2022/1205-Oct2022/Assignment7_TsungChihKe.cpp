#include <iostream>
#include <fstream>
#include <cstring>
#include <string>
using namespace std;


void Assignment7() {
    int const filename_maxsize = 100;
    char filename[filename_maxsize];
    cout << "enter a filename and press ENTER:";
    cin.getline(filename, filename_maxsize);

    cout << "Your file name is: " << filename << endl;

    ofstream file_out(filename);
    if (!file_out)
    {
        cout << "FILENAME: " << filename << " could not be opened" << endl;
        return;
    }
    cin.clear();
    cin.ignore(1024, '\n');

    int numLine;
    cout << "please enter how many lines ";
    cin >> numLine;

    char line[filename_maxsize];
    for (int i = 0; i < numLine; ++i) {
        cin.clear();
        cin.ignore(1024, '\n');
        cout << "please enter your content of line " << i+1 << " : "<< endl;
        cin.getline(line, filename_maxsize);
      
        file_out << line << endl;
    }
    
 
    file_out.close();
}

void DisplayQuiz7() {
    int const filename_maxsize = 100;
    char filename[filename_maxsize];
    cin.clear();
    cin.ignore(1024, '\n');
    cout << "enter a filename and press ENTER:";
    cin.getline(filename, filename_maxsize);

    ifstream file_in(filename);

    if (!file_in)
    {
        cout << filename << " could not be opened" << endl;
        return;
    }

    string line;

    while (!file_in.eof()) {
        getline(file_in, line);
        cout << line << endl;
    }
}