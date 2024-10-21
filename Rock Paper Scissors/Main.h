#pragma once
#include<iostream>
#include <cstdlib>
// Rock Paper Scissors
std::string Chose(int i) {
	switch (i) {
		case 1: return "Rock"; break;
		case 2: return "Paper"; break;
		case 3: return "Scissors"; break;
		case 4: exit(0); break;
		default: return "error"; break;
	}
}

int PlayerChose() {
	int i;
	std::cin >> i;
	return i;
}

void clearLastLine() {
	// Переместить курсор на строку вверх и очистить её
	std::cout << "\033[A\033[2K";
}

void TotalSchet(std::string playerOne, std::string playerTwo) {
	int totalOne{ 0 }, totalTwo{ 0 };
	if (playerOne == "Rock" && playerTwo == "Rock" || playerOne == "Paper" && playerTwo == "Paper" || playerOne == "Scissors" && playerTwo == "Scissors") {
		std::cout << "a draw" << std::endl;
		//totalOne++;
		//totalTwo++;
		//std::cout << "\033[A\033[2K";
		//std::cout << totalOne << ':' << totalTwo << std::endl;
	}

	else if (playerOne == "Rock" && playerTwo == "Paper") {
		std::cout << "Player One Win" << std::endl;
		//totalOne++;
		//std::cout << "\033[A\033[2K";
		//std::cout << totalOne << ':' << totalTwo << std::endl;
	}

	else if (playerOne == "Paper" && playerTwo == "Rock") {
		std::cout << "Player Two Win" << std::endl;
		//totalTwo++;
		//std::cout << "\033[A\033[2K";
		//std::cout << totalOne << ':' << totalTwo << std::endl;
	}

	else if (playerOne == "Paper" && playerTwo == "Scissors") {
		std::cout << "Player One Win" << std::endl;
		//totalOne++;
		//std::cout << "\033[A\033[2K";
		//std::cout << totalOne << ':' << totalTwo << std::endl;
	}

	else if (playerOne == "Scissors" && playerTwo == "Paper") {
		std::cout << "Player Two Win" << std::endl;
		//totalTwo++;
		//std::cout << "\033[A\033[2K";
		//std::cout << totalOne << ':' << totalTwo << std::endl;
	}

	else if (playerOne == "Scissors" && playerTwo == "Rock") {
		std::cout << "Player One Win" << std::endl;
		//totalOne++;
		//std::cout << "\033[A\033[2K";
		//std::cout << totalOne << ':' << totalTwo << std::endl;
	}

	else if (playerOne == "Rock" && playerTwo == "Scissors") {
		std::cout << "Player Two Win" << std::endl;
		//totalTwo++;
		//std::cout << "\033[A\033[2K";
		//std::cout << totalOne << ':' << totalTwo << std::endl;
	}

}