#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Person
{
public:
	Person() {
		setData("unknown-first", "unknown-last");
	}
	Person(string first, string last) {
		setData(first, last);
	}

	void setData(string first, string last) {
		firstName = first;
		lastName = last;
	}

	void printData() const {
		cout << "\nName: " << firstName << " " << lastName << endl;
	}

private:
	string firstName;
	string lastName;
};

class Musician : public Person
{
public:
	Musician() {
		instrument = "unknown-instrument";
	}

	Musician(string first, string last, string inst)
		:Person(first, last) {
		instrument = inst;
	}

	void setData(string first, string last, string inst) {
		Person::setData(first, last);
		instrument = inst;
	}

	void printData() const {
		Person::printData();
		cout << "Instrument: " << instrument << endl;
	}

private:
	string instrument;
};

class Writer : public Person
{
public:
	Writer() {
		genre = "unknown-genre";
	}

	Writer(string first, string last, string gen)
		:Person(first, last) {
		genre = gen;
	}

	void setData(string first, string last, string gen) {
		Person::setData(first, last);
		genre = gen;
	}
	void printData() const {
		Person::printData();
		cout << "Genre: " << genre << endl;
	}

private:
	string genre;
};


int main() {

	int numberOfMusicians = 0;
	int numberOfWriters = 0;
	string str1, str2, str3;
	ifstream fin;

	// TODO:  Open the file music.txt.  Print an error message and exit
	// the program if the file cannot be opened. 5 pts.


	// TODO:  Read the number at the beginning of the text file.  That number
	// indicates the number of musicians in the list (which is also the length
	// of the musicians' array). 5 pts.
	// 
	// Dynamically allocate an array of musician objects.  The array should be 
	// the exact length needed to read the file. 10 pts.
	//
	// Use a for-loop to load the array with the content from the text file. 15 pts.
	//
	// Close the text file when you are done with it. 5 pts.


	// TODO:  Open the file writer.txt.  Print an error message and exit
	// the program if the file cannot be opened. 5 pts.


	// TODO:  Read the number at the beginning of the text file.  That number
	// indicates the number of writers in the list (which is also the length
	// of the writers' array).  5 pts.
	//
	// Dynamically allocate an array of writer objects.  The array should be 
	// the exact length needed to read the file. 10 pts.
	//
	// Use a for-loop to load the array with the content from the text file. 15 pts.
	//
	// Close the text file when you are done with it. 5 pts.


	// TODO:  Loop through the musicians' array and print all of its data.  
	// Then loop through the writers' array and print all of its data. 15 pts.
	// Remember to release all dynamically allocated memory before exiting. 5 pts.

	return 0;
}