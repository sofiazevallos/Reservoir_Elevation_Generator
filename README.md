# Reservoir_Elevation_Generator
Reservoir Elevation Generator

This C++ program reads data from a reservoir levels file and compares the elevations of East and West reservoirs for a user-specified date range.

User Input
  
  Starting Date:
    
    Prompts the user to enter the starting date.
  
  Ending Date:
    
    Prompts the user to enter the ending date.


Data Source
  
  The program reads data from the file "Current_Reservoir_Levels.tsv."


Program Execution
  
  File Reading:
    
    -Opens the data file for reading.
    -Handles a failure to open the file, displaying an error message and exiting if necessary.
    -Ignores the header line of the file.


Data Comparison
  
  -Reads the data line by line.
  -Compares the elevations of East and West reservoirs for dates within the specified range.
  -Prints the result for each date:
      
      "East" if East reservoir elevation is greater.
      "West" if West reservoir elevation is greater.
      "Equal" if elevations are equal.


File Closure
  
  Closes the data file.
