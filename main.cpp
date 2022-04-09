// Title :  Find_First_Of
// Purpose : New function call here!!!, using find_first_of()?
// Enjoy the process - Practices make improvement
// Author : Fransiskus Agapa

#include <iostream>
#include <iomanip>               // use basic manipulation

using std::cout;
using std::endl;
using std::getline;
using std::string;
using std::cin;
using std::setw;
using std::setfill;
using std::fixed;

int main()
{
    string userLine;
    string userLineToFind;
    size_t userPos = 0;
    int numMode = 1;

    cout << " Start Program..." << endl << endl;
    //Default program
    cout  << numMode << ".) Default Mode " << endl;
    string line = " Local food are the best! ";
    size_t pos = line.find_first_of("lfat!");                          // capital or not Matters* | the line to locate is up to you!
    cout << " This is the default strings [ " << line << " ]" << endl;
    cout << " The strings we are looking from: " << "[ lfat ]" << endl;

    while(pos != string::npos)                                            // while string is found
    {
        cout << " Found: " << line.at(pos) << " at position " << pos << endl;
        pos = line.find_first_of("lfat", pos + 1);                 //  loop to the next string to find
    }

    cout << fixed << endl;
    cout << setfill('-') << setw(50) << "" << endl;

    numMode++;                                                            // increment to indicate 2nd mode
    // user Input
    cout << endl<< numMode << ".) User Input Mode" << endl;
    cout  << " Let's makes it more interesting, Why don't you enter a line:..." << endl;
    getline(cin,userLine);
    cout << " Nice, put a string/s you'd like to find/locate:..." << endl;
    getline( cin,userLineToFind);
    cout << " The string/s you are looking from: [ " << userLine << " ]" << endl;
    userPos = userLine.find_first_of(userLineToFind);

    while(userPos != string::npos)
    {
        cout << " Found: " << userLine.at(userPos) << " at position " << userPos  << endl; ;
        userPos = userLine.find_first_of(userLineToFind, userPos + 1);
    }

    cout << fixed << endl;
    cout << setfill('-') << setw(50) << "" << endl;

    cout << endl << "Finish Program.." ;
    return 0;
}
