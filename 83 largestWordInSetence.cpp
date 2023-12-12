//   m-3 run
// C++ program to find the number of charters
// in the longest word in the sentence.
#include<bits/stdc++.h>
using namespace std;
	
int LongestWordLength(string str)
{
	int counter = 0;
	string words[100];
	for (short i = 0; i < str.length(); i++)
	{
		if (str[i] == ' ')
			counter++;
		else
			words[counter] += str[i];
	}
	
	int length = 0;
	
	for(string word:words)
	{
		if(length < word.length())
		{
			length = word.length();
		} 
	}
	return length;
}

// Driver code
int main()
{
	string str = "I am an intern at geeksforgeeks";
	
	cout << (LongestWordLength(str));
}

// This code contributed by Rajput-Ji




//    m-2  run
// C++ program to find the number of 
// charters in the longest word in 
// the sentence.
#include <iostream>
using namespace std;

int LongestWordLength(string str)
{
	
	int n = str.length();
	int res = 0, curr_len = 0, i;
	
	for (int i = 0; i < n; i++) {
		
		// If current character is 
		// not end of current word.
		if (str[i] != ' ')
			curr_len++;

		// If end of word is found
		else {
			res = max(res, curr_len);
			curr_len = 0;
		}
	}

	// We do max one more time to 
	// consider last word as there 
	// won't be any space after 
	// last word.
	return max(res, curr_len);
}

// Driver function
int main()
{
	string s =
	"I am an intern at geeksforgeeks";
					
	cout << LongestWordLength(s);
	return 0;
}

// This code is contributed by 
// Smitha Dinesh Semwal. 





//   m-1  wrong
#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();

    char ch[n+1];
    cin.getline(ch,n);
    cin.ignore();

    int i=0;
    int currLen=0;
    int maxLen=0;

    while(1){
        if(ch[i]==' '||ch[i]=='\0'){
            if(currLen>maxLen){
                maxLen=currLen;
            }
            currLen=0;
        }
        currLen++;
        if(ch[i]=='\0'){
            break;
        }
        i++;
    } 

    cout<<maxLen;  
}