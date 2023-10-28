#inlide<iostream>

/*Необходимо реализовать класс класса под названием SecurityManager, в котором
присутствует метод по созданию пользователя в системе (void CreateUser(string
username, string realName, string password). При создании пользователя выполняются
следующие действия: шифруется пароль пользователя, вставляются все необходимые записи
в базу данных, а также, по желанию, заполняется журнал аудита о создании пользователя.*/


class ASecurityManager
{
public:
	void CreateUser(string username, string realName, string password){
		encription();
		insertDataToDatabase(username, realName, password);
		if (needJornalAudith()){
			fillJornalAudith();
		}
protected:
	virtual void encription() = 0;
	virtual void insertToDatabase(username, realname, password) = 0;
	virtual fillJornalAudith() = 0;
	bool needJornalAudith(){
		return true;
	}
};

class SecurityManager : public ASecurityManager
{
protected:

	void encription() { /*Реализация*/ }
	void insertToDatabase(username, realname, password) { /*Реализация*/ }
	fillJornalAudith() { /*Реализация*/ }
};


int main(){
	ASecurityManager *securityManager = new SecurityManager();
	securityManager->CreateUser("John", "John Bouwi","qwerty1234");
	delete securityManager
	return 0;
}

