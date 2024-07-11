
//rastgele bir renk seçen ve kullanıcının bu rengi tahmin etmesini isteyen bir C++ oyununu tanımlar.
#include <iostream>
#include<cstdlib>
#include<ctime>
#include<Windows.h>
using namespace std;




enum Color {red, green, blue, yellow, purple};


// rastgele bir renk seçen bir fonksiyon
Color generateRandomColor() {
    int randomNum = rand() % 5;
    return static_cast<Color>(randomNum);

}


string colorToString(Color color) {
	switch (color)
	{
	case red:
		return "red";
	case green:
		return "green";
	case blue:
		return "blue";;
	case yellow:
		return "yellow";
	case purple:
		return "purple";
	default:
		return "unknown";
	}

}


int main()
{
	srand(time(0));
	
	Color targetColor = generateRandomColor();

	string guess;

	while (true) {
		system("clc");
		cout << "welcome to the colored square game!!" << endl;
		cout << "******************************************" << endl;
		cout << "Guess the color of the square (red, green, blue, yellow, or purple)." << endl;
		cout << "enter your guess:";
		cin >> guess;

		for (int i = 0; i < guess.length(); ++i) {
			guess[i] = tolower(guess[i]);
		}

		if (guess == "red" || guess == "green" || guess == "blue" ||
			guess == "yellow" || guess == "purple") {
			
			Color userColor;
			if (guess == "red")
				userColor = red;
			else if (guess == "green")
				userColor = green;
			else if (guess == "blue")
				userColor = blue;
			else if (guess == "yellow")
				userColor = yellow;
			else if (guess == "purple")
				userColor = purple;
		
			// Doğru tahmin kontrolü
			if (userColor == targetColor) {
				cout << endl;
				cout << "Congratulations! You guessed the correct color." << endl;
				break;
			}

			else {
				cout << "Wrong guess. Try again!" << endl;
			}
		}

			else {
				cout << "Invalid color. Please enter a valid color." << endl;
			}
			Sleep(1000);
}//while
}//main

	

