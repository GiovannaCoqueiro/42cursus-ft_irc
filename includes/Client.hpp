#ifndef CLIENT_HPP
#define CLIENT_HPP

class Client {
	private:
		std::string	_real_name;
		std::string	_nickname;
		std::string	_client_ip;
		std::string _client_fd;
		std::string _password;

	public:
		Client();
		~Client();

		void setRealName(std::string real_name);
		void setNickname(std::string nickname);
		void setClientIP(std::string client_ip);
		void setClientFD(std::string client_fd);
        void setPassword(std::string password);		
		std::string	getRealName();
		std::string	getNickname();
		std::string	getClientIP();
		std::string	getClientFD();
		std::string	getPassword();

};

#endif