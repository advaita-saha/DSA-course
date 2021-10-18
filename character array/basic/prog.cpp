/*
Arrays of characters is known as Character Arrays.

Declaration
To declare a character array of n size, we do
char arr[n+1];

Note: We declare an array of n+1 as 0 to n-1 indices store the actual string and
nth character stores ‘\0’ (null character).

We can also directly take input if there are no spaces between the characters in
the word

cin >> arr;
In the similar way, we can output the character array
cout << arr;
*/
#include<iostream>
using namespace std;

int main(){
    char arr[100];
/*
    arr = "apple";
    int i=0;
    while(arr[i] != '\0'){
        cout<<arr[i]<<endl;
        i++;
    }
*/
    //inputing an array
    cin>>arr;
    cout<<arr;
    cout<<arr[2];

    return 0;
}