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
};