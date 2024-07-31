#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    // open a file for reading
    ifstream my_file("example.txt");
    //check the file for errors
    if(!my_file)
    {
        cout<<"Error: Unable to open the file..."<<endl;
        return 1;
    }
    // store the contents of the file in line" string
    string line;
    //loop until the end of the text file
    while(!my_file.eof())
    {
        //store the current line of the file
        //in the "line" variable
        getline(my_file, line);
    }
    my_file.close();
    return 0;
}
