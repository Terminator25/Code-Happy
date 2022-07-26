#include <bits/stdc++.h>
using namespace std;
// given a string of words, find frequencies of individual words.

void printfrequencies(string &str)
{
    unordered_map <string, int> freq;
    stringstream ss(str);
    string word;
    while(ss >> word)
    {
        freq[word]++;
    }
    unordered_map<string, int> :: iterator i;
    for(i=freq.begin(); i!=freq.end(); i++)
    {
        cout << "(" <<i->first<<":"<<i->second<<")\n";
    }
}
// Driver code
int main()
{
	string s = "geeks for geeks geeks "
			"contribution placements";
    cout<<"The frequencies are:";
	printfrequencies(s);
	return 0;
}
// C++ program to find freq of every word using
// unordered_map
// #include <bits/stdc++.h>
// using namespace std;

// // Prints frequencies of individual words in str
// void printFrequencies(const string &str)
// {
// 	// declaring map of <string, int> type, each word
// 	// is mapped to its frequency
// 	unordered_map<string, int> wordFreq;

// 	// breaking input into word using string stream
// 	stringstream ss(str); // Used for breaking words
// 	string word; // To store individual words
// 	while (ss >> word)
// 		wordFreq[word]++;

// 	// now iterating over word, freq pair and printing
// 	// them in <, > format
// 	unordered_map<string, int>:: iterator p;
// 	for (p = wordFreq.begin(); p != wordFreq.end(); p++)
// 		cout << "(" << p->first << ", " << p->second << ")\n";
// }

// // Driver code
// int main()
// {
// 	string str = "geeks for geeks geeks quiz "
// 				"practice qa for";
// 	printFrequencies(str);
// 	return 0;
// }
