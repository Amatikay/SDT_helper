// Нарушение принципа едиснтвенной отвественности

class DataMigrater
{
public:
IList <serverdata> GetData(string initialDate, string endDate)
{
// получить данные сервера в пределах диапазона дат
return NewList<serverdata>();
}
IList<serverdata>ProcessData(IList <serverdata >&rawData)
{
//применяем правила по обработке данных.
return rawData.ToList();
}
void Migrate(IList <serverdata >&rawData)
{
// перенос обрабатываемых данных с сервера на сервер
}
}


// Решение задачи в соотвествии принипу единственной ответственности.


class DataParser{
	IList <serverdata> GetData(string initialDate, string endDate)
	{
	// получить данные сервера в пределах диапазона дат
		return NewList<serverdata>();
	}
private:
	IDataBase* db;
};

class DataProcessor{
	IList<serverdata>ProcessData(IList <serverdata >&rawData)
	{
	//применяем правила по обработке данных.
	return rawData.ToList();
	}
private:
	IDataBase* db;
};

class DataMigrater{

void Migrate(DataParser &data, DataProcessor &rules)
{
// перенос обрабатываемых данных с сервера на сервер
}
private:
	IDataBase* db;
}
