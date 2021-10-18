/*
To input a complete sentence, we use the getline() function.

cin.getline(arr, n)

where arr is the character array and n is the total length of sentence.
Approach
1. Iterate over the sentence and keep variables currLen and maxLen which
store the current length of the present word being iterated and the overall
maximum length word’s length.
2. Whenever we encounter a space during iteration, we will maximize our
maxLen variable.

maxLen = max(maxLen, currLen)
*/
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];

    cin.getline(arr, n);
    cin.ignore();

    int i=0;
    int curr_len=0, max_len=0;
    int st=0, maxst=0;

    while(1){
        if(arr[i] == ' ' || arr[i] == '\0'){
            if(curr_len > max_len){
                max_len = curr_len;
                maxst = st;
            }
            curr_len = 0;
            st = i+1;
        }
        else{
            curr_len++;
        }
        if(arr[i] == '\0'){
            break;
        }
        i++;
    } 

    cout<<max_len<<endl;
    for(int i=0; i<max_len; i++){
        cout<<arr[i+maxst];
    }
    cout<<endl;

    return 0;
}