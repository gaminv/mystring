//#include <iostream>
//
//class MyString
//{
//public:
//
//	//конструктор без параметров
//	MyString()
//	{
//		str = nullptr;
//		length = 0;
//	}
//
//	//конструктор с параметрами
//	MyString(const char* str)
//	{
//		length = strlen(str);// количество символов в строке 
//
//		this->str = new char[length + 1];
//
//		for (int i = 0; i < length; i++)
//		{
//			this->str[i] = str[i];
//		}
//	
//		this->str[length] = '\0';
//	};
//
//	// деструктор
//	~MyString()
//	{
//		delete[] this->str;
//	};
//
//	// конструктор копирования
//	MyString(const MyString& other)
//	{
//		length = strlen(other.str);
//		this->str = new char[length + 1];
//
//		for (int i = 0; i < length; i++)
//		{
//			this->str[i] = other.str[i];
//		}
//
//		this->str[length] = '\0';
//	}
//	//перегруженный оператор присваивания
//	MyString& operator =(const MyString& other)
//	{
//		if (this->str != nullptr)
//		{
//			delete[] str;
//		}
//		length = strlen(other.str);
//		this->str = new char[length + 1];
//
//		for (int i = 0; i < length; i++)
//		{
//			this->str[i] = other.str[i];
//		}
//
//		this->str[length] = '\0';
//
//		return *this;
//	}
//
//	//перегруженный оператор сложения
//	MyString  operator+(const MyString& other)
//	{
//		
//		MyString newStr;
//		
//		int thisLength = strlen(this->str);
//		int otherLength = strlen(other.str);
//
//		newStr.length = thisLength + otherLength;
//		
//		newStr.str = new char[thisLength + otherLength + 1];
//		
//		int i = 0;
//		for (; i < thisLength; i++)
//		{
//			newStr.str[i] = this->str[i];
//		}
//		for (int j = 0; j < otherLength; j++, i++)
//		{
//			newStr.str[i] = other.str[j];
//		}
//		newStr.str[thisLength + otherLength] = '\0';
//
//		return newStr;
//	}
//
//	//перегруженный оператор равенства
//	bool operator ==(const MyString& other)
//	{
//		if (this->length != other.length)
//		{
//			return false;
//		}
//
//		for (int i = 0; i < this->length; i++)
//		{
//			if (this->str[i] != other.str[i])
//			{
//				return false;
//			}
//		}
//		return true;
//	}
//
//	//перегруженный оператор неравенства 
//	bool operator !=(const MyString& other)
//	{
//		return !(this->operator==(other));
//	}
//
//	char& operator [](int index)
//	{
//		return this->str[index];
//	}
//
//	void Print()
//	{
//		std::cout << str;
//	}
//
//	int Length()
//	{
//		return length;
//	}
//	
//
//private:
//	char* str;
//
//	int length;
//};
//
//
//int main()
//{
//	//Строка с длиной 0
//	MyString nullStr;
//	std::cout << "length nullStr: " << '\n';
//	std::cout << nullStr.Length() << '\n' << '\n';
//	////////////////////////////////////
//
//
//	//Ненулевые строки
//	MyString str("Hello");
//	MyString str2("World");
//
//	//Вывод ненулевых строк
//	//str
//	std::cout << "str: ";
//	str.Print();
//	std::cout << '\n';
//	//str2
//	std::cout << "str2: ";
//	str2.Print();
//	std::cout << '\n';
//	//Длина строк
//	std::cout << "lenght str: ";
//	std::cout << str2.Length();
//	std::cout << '\n';
//	
//	std::cout << "lenght str2: ";
//	std::cout << str2.Length() << '\n' << '\n';
//	////////////////////////////////////
//	//Конкатенация строк
//	MyString result;
//	result = str + str2;
//
//	std::cout << "result: ";
//	result.Print();
//	std::cout << '\n' << "lenght result: ";
//	std::cout << result.Length();
//	std::cout << '\n' << '\n';
//	////////////////////////////////////
//	
//	//Присваивание
//	MyString copyStr;
//	copyStr = str;
//	
//	std::cout << "str: ";
//	str.Print();
//	std::cout << '\n';
//
//	std::cout << "copyStr: ";
//	copyStr.Print();
//	std::cout << '\n';
//
//	std::cout << "Different linkers str and copyStr: " << '\n';
//	std::cout << &copyStr << '\n';
//	std::cout << &str << '\n' << '\n';
//	////////////////////////////////////
//	//перегруженный оператор равенства
//	bool equality = (str == str2);
//	std::cout << equality;
//
//	equality = (str == copyStr) << '\n';
//	std::cout << equality << '\n';
//	//перегруженный оператор неравенства 
//	equality = (str != str2);
//	std::cout << equality;
//
//	equality = (str != copyStr) << '\n';
//	std::cout << equality << '\n' << '\n';
//	////////////////////////////////////
//
//	////////////////////////////////////
//	// []
//	str.Print();
//	str[0] = 'Q';
//	
//	std::cout << '\n';
//
//	str.Print();
//	std::cout << '\n' << str[0] << '\n';
//
//	return 0;
//}
#include <iostream>
int n(int number)
{

}
