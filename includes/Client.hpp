#ifndef CLIENT_HPP
#define CLIENT_HPP

class Client {
	private:
		std::string	_real_name;
		std::string	_nickname;
		std::string	_client_ip;
		std::string _password;

	public:
		void setRealName(std::string real_name);
		void setNickname(std::string nickname);
		void setClientIP(std::string client_ip);
        void setPassword(std::string password);		
		std::string	getRealName();
		std::string	getNickname();
		std::string	getClientIP();
		std::string	getPassword();

};

#endif