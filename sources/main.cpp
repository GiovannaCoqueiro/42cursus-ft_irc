#include <iostream>

int main(int argc, char **argv)
{
    (void)argv;
	if (argc != 3) {
		std::cerr << "./ircserv <port> <password>" << std::endl;
		return 1;
	}
    return 0;
}