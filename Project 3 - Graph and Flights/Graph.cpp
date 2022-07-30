#include <sstream>
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void loadGraph(string filen){
    // Object to read CSV file with flight info
    fstream inFile;

    // Open csv file
    inFile.open(filen, ios::in);

    // Remove the header from the csv file.
    string header;
    getline(inFile, header);

    // Variables to hold the csv data
    string from;
    string to;
    int passengers;
    int milesFlown;

    // Only load the graph if the file is open
    if(inFile.is_open()){
        string line;
        cout << "Hello World";
    }

}

int main(){
    loadGraph("Flights Final CSV.csv");
    return 0;
}
