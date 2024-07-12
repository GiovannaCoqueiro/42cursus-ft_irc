#include "Client.hpp"

Client::Client() {}

Client::~Client() {}

void Client::setRealName(std::string real_name) {
	_real_name = real_name;
}

void Client::setNickname(std::string nickname) {
	_nickname = nickname;
}

void Client::setClientIP(std::string client_ip) {
	_client_ip = client_ip;
}

void Client::setClientFD(std::string client_fd) {
	_client_fd = client_fd;
}

void Client::setPassword(std::string password) {
	_password = password;
}

std::string Client::getRealName() {
	return _real_name;
}

std::string Client::getNickName() {
	return _nickname;
}

std::string Client::getClientIP() {
	return _client_ip;
}

std::string Client::getClientFD() {
	return _client_fd;
}

std::string Client::getPassword() {
	return _password;
}