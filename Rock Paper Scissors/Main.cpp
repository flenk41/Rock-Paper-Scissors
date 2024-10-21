#include"Main.h"
// Rock Paper Scissors
int main() {
	std::cout << "1 - rock" << std::endl;
	std::cout << "2 - paper" << std::endl;
	std::cout << "3 - scissors" << std::endl;
	std::cout << "4 - stop" << std::endl;
	std::string playerOne, playerTwo;

	//playerOne = Chose( PlayerChose() );
	//clearLastLine();
	//playerTwo = Chose(PlayerChose());
	//clearLastLine();

	//TotalSchet(playerOne, playerTwo);

	while (true) {
		playerOne = Chose(PlayerChose());
		clearLastLine();
		playerTwo = Chose(PlayerChose());
		clearLastLine();
		TotalSchet(playerOne, playerTwo);
	}
}