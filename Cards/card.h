#include <string>

using namespace std;

class card {
	
public:
	//Varibles
	int value;
	char suit;

	//Constructors
	card() {
		value = 14;
		suit = 'S';
	}
	card(int v, char s) {
		value = v;
		suit = s;
	}
	string displayCard() {
		string displayValue = "[";
		if (value < 11) {
			displayValue += to_string(value);
		}
		return displayValue
	}
};