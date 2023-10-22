//Науршение принципов открытости\закрытости

enum AccountType { Regular=1, Salary};

class MySavingAccount
{
int myInterest;// Процентная ставка по счету
int myBalance; // Текущий баланс счета
int myAmount; // Сумма
//Описание нужных конструкторов, методы и свойства класса
public:
int MyCalculateInterest(AccountType accountType)
{
if(accountType == Regular)
{
// Рассчитываем проценты для регулярного сберегательного счета на основе правил и
// регулирование банка
myInterest = myBalance * 0.4;
if(myBalance < 1000) myInterest -= myBalance * 0.2;
if(myBalance < 50000) myInterest += myAmount * 0.4;
}
else if (accountType == Salary)
{
// Расчет процентов на сберегательный счет в соответствии с правилами и
//положениями банка
myInterest = myBalance * 0.5;
}
}


//Испраление нарушения принципов открытости\закрытости


enum AccountType { Regular=1, Salary};

class ISavingAccount
{
	int myInterest;
	int myBalanse;
	int myAmout;
public:
	virtual int MyCalculateInterest(){} = 0;
}

class SavingRegularAccount: protected ISavingAccount
{
		override MyCalculateInterest() {
		myInterest = myBalance * 0.4;
		if(myBalance < 1000) myInterest -= myBalance * 0.2;
		if(myBalance < 50000) myInterest += myAmount * 0.4;
		}
};

class SavingSalaryAccount: protected ISavingAccount
{
	override MyCalculateInterest() {
		myInterest = myBalance * 0.5;
	}
}

