#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

int main() {
    cout << "Hello and welcome to my String Warm Up! " << endl;

    string text1 = "\n Reversed String \n";
    reverse(text1.begin(), text1.end());
    cout << text1 << endl;
    char text2[] = "\n All that glitters is not gold \n";
    reverse(text2, text2 + strlen(text2));
    cout << text2 << endl;


    string myStrObject = "abc def g h ijk";

    // Understand the index nature of a string object
    //output the char index (aka char position 5)
    cout <<"\n\n";
    cout << myStrObject[5];
    cout <<"\n\n";
    cout << myStrObject << endl;


        //get length of string
            int lengthOfMyStr = myStrObject.length();
    cout << "\nLength of String: " << lengthOfMyStr << endl;

    char myTempChar;
  for (int i = 0; i <= lengthOfMyStr/2; i++) {

     cout << "\n i = " << i << " and the char at " << i << " is " << myStrObject[i] <<endl;
    //swap characters
    myTempChar = myStrObject[i];
      myStrObject[i] = myStrObject[lengthOfMyStr - i - 1];
      myStrObject[lengthOfMyStr - i - 1] = myTempChar;

  }


    return 0;
}