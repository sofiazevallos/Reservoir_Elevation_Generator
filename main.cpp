//Sofia Zevallos
//Email: sofia.zevallos75@myhunter.cuny.edu
#include <iostream>
#include <climits>  // Required for INT_MAX
#include <cstdlib>  // Required for exit()
#include <fstream>  // Required for file operations
#include <string>   // Required for string handling
using namespace std; 

int main()
{
  // Declare variables to store start and end dates
  string start;
  string end;
  
  // Prompt the user to enter the starting date and read the input
  cout << "Enter starting date: ";
  cin >> start;

  // Prompt the user to enter the ending date and read the input
  cout << "Enter ending date: "; 
  cin >> end; 
  
  // Open the file "Current_Reservoir_Levels.tsv" for reading
  ifstream fin("Current_Reservoir_Levels.tsv");
  
  // Check if the file opening is successful
  if (fin.fail())
  {
    cerr << "File cannot be opened for reading." << endl; 
    exit(1);  // Exit the program with an error code if the file cannot be opened
  }

  string junk; 
  getline(fin, junk);  // Read and discard the first line (header) of the file 
  string date;
  double eastSt;
  double eastEl;
  double westSt;
  double westEl;
  
  // Read data from the file line by line
  while(fin >> date >> eastSt >> eastEl >> westSt >> westEl)
  {
    fin.ignore(INT_MAX, '\n');  // Ignore the rest of the line

    // Check if the date is within the specified range
    if(date >= start && date <= end)
    {
      // Compare the elevations of East and West reservoirs and print the result
      if(eastEl > westEl)
      {
        cout << date << " East" <<endl;
      }
      else if(westEl > eastEl)
      {
        cout << date << " West" <<endl;
      }
      else if(westEl == eastEl)
      {
        cout << date << " Equal" <<endl;
      }
    }
  }

  fin.close();  // Close the file
  
  return 0;  // Return 0 to indicate successful program execution
} 
