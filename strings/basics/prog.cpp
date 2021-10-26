/*
The STRING datatype falls under the STL - Standard Template Library of C++

1. append(): Inserts additional characters at the end of the string (can also be
done using ‘+’ or ‘+=’ operator). Its time complexity is O(N) where N is the
size of the new string.

2. assign(): Assigns new string by replacing the previous value (can also be
done using ‘=’ operator).

3. at(): Returns the character at a particular position (can also be done using ‘[
]’ operator). Its time complexity is O(1).

4. begin(): Returns an iterator pointing to the first character. Its time
complexity is O(1).

5. clear(): Erases all the contents of the string and assign an empty string (“”)
of length zero. Its time complexity is O(1).

6. compare(): Compares the value of the string with the string passed in the
parameter and returns an integer accordingly. Its time complexity is O(N +
M) where N is the size of the first string and M is the size of the second
string.

7. c_str(): Convert the string into C-style string (null terminated string) and
returns the pointer to the C-style string. Its time complexity is O(1).

8. empty(): Returns a boolean value, true if the string is empty and false if the
string is not empty. Its time complexity is O(1).

9. end(): Returns an iterator pointing to a position which is next to the last
character. Its time complexity is O(1).

10.erase(): Deletes a substring of the string. Its time complexity is O(N) where
N is the size of the new string.

11.find(): Searches the string and returns the first occurrence of the parameter
in the string. Its time complexity is O(N) where N is the size of the string.

12.insert(): Inserts additional characters into the string at a particular position.
Its time complexity is O(N) where N is the size of the new string.

13.length(): Returns the length of the string. Its time complexity is O(1).

14.resize(): Resize the string to the new length which can be less than or
greater than the current length. Its time complexity is O(N) where N is the
size of the new string.

15.size(): Returns the length of the string. Its time complexity is O(1).

16.substr(): Returns a string which is the copy of the substring. Its time
complexity is O(N) where N is the size of the substring. For example:

17.stoi(): Returns the strings converted to int datatype.

Note:
1. To convert an integer to a string, we use to_string() function. Example

2. Sorting a string: To sort a string, we need to include a header file known as
algorithm in our code like this
Then we can use sort() function that is present in above header file on our string.
Sort() function takes 2 arguments viz. iterator to start of the string and iterator to
end of the string.

*/
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

int main(){

    // Declaration
    string str;
    string str1 = "Advaita Saha";

    // Generating strings
    string str2(5, 'n');

    // taking input of a sentence including spaces
    getline(cin, str);

    // Apending of strings
    cout<< str1 + str2 <<endl;  // none of the strings are changing, just only a concatenated string is outputed
    str1.append(str2);          // the str1 string is changing and str2 is not changing

    // Accessing indices of strings
    cout<< str1[5] << endl;

    // Output
    cout<<str<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;

    // Clearing a string
    str.clear();
    str1.clear();
    str2.clear();

    // Output v2 ( After clearing strings using .clear() )
    cout<<str<<endl;
    cout<<str1<<endl;
    cout<<str2<<endl;

/* ---------------------------------------------------------------------------------------------------------------------- */

    // String comparison
    string a = "abc";
    string b = "xyz";
    string c = "AdvaitaSaha";

    cout<<b.compare(a)<<endl;

    // Earsing specific parts in string
    c.erase(3, 3);                  // .erase(start_index_for_deletion, no_of_chars_deletd_from_startIndex)
    cout<<c<<endl;

    // Finding in a string
    cout<<c.find("Saha")<<endl;
    cout<<a.find('b')<<endl;

    // Inserting in a string
    c.insert(4, "ita");
    cout<<c<<endl;

    // Iterating over a string
    for(int i=0; i<c.length(); i++){
        cout<<c[i]<<endl;
    }

    // Substring in strings
    cout<< c.substr(4, 3)<<endl;        // Doesn't alter the string on which the method works(rather returns the altered string), unlike .erase()

    // Conversion of string
    string int_str = "666";
    int x = stoi(int_str);              //from string -> int
    cout<< x + 1000 <<endl;

    int_str = to_string(x+1000);        // from int -> str
    cout<<int_str + "2"<<endl;

    // Sorting in a string [The sort function comes from the header file algorithmn]
    string stringToSort = "akjsbfiuhbwriufh";
    cout<<stringToSort<<endl;
    sort(stringToSort.begin(), stringToSort.end());
    cout<<stringToSort<<endl;


    return 0;
}