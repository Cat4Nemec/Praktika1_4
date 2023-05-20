#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class TBook {
public:
	string name;
	string author;
	string count;

};

int main() {


	TBook book1;

	book1.name = "Kizumonogatari";
	book1.author = "Nishio Isin";
	book1.count = "2000";

	cout << "Book name - " << book1.name << endl;
	cout << "Author - " << book1.author << endl;
	cout << "Count - " << book1.count << endl;

	return 0;
}
