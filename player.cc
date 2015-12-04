#include "player.h"

Player::Player(std::string name, char symbol, int curpos, int networth, int cash) :
	name(name), curpos(curpos), networth(networth), cash(cash) { bankrupcy = false; };

Player::~Player() {
	///delete *this;
}

// getters and setters
void Player::addCash(int toadd) {
	cash += toadd;
}

int Player::getCash() {
	return cash;
}

int Player::getNetworth() {
	return networth;
}

void Player::setNetworth(int worth) {
	networth = worth;
}

void Player::addNetworth(int toadd) {
	networth += toadd;
}

std::string Player::getName() {
	return name;
}

void Player::setName(std::string toset)  {
	name = toset;
}

void Player::setSymbol(char sym) {
	symbol = sym;
}

void Player::setBankrupcy(bool whetherbankrupt) {
	bankrupcy = whetherbankrupt;
}

bool Player::isBankrupted() {
	return bankrupcy;
}

