//#include <iostream>
//
//class MyString
//{
//public:
//
//	//����������� ��� ����������
//	MyString()
//	{
//		str = nullptr;
//		length = 0;
//	}
//
//	//����������� � �����������
//	MyString(const char* str)
//	{
//		length = strlen(str);// ���������� �������� � ������ 
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
//	// ����������
//	~MyString()
//	{
//		delete[] this->str;
//	};
//
//	// ����������� �����������
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
//	//������������� �������� ������������
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
//	//������������� �������� ��������
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
//	//������������� �������� ���������
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
//	//������������� �������� ����������� 
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
//	//������ � ������ 0
//	MyString nullStr;
//	std::cout << "length nullStr: " << '\n';
//	std::cout << nullStr.Length() << '\n' << '\n';
//	////////////////////////////////////
//
//
//	//��������� ������
//	MyString str("Hello");
//	MyString str2("World");
//
//	//����� ��������� �����
//	//str
//	std::cout << "str: ";
//	str.Print();
//	std::cout << '\n';
//	//str2
//	std::cout << "str2: ";
//	str2.Print();
//	std::cout << '\n';
//	//����� �����
//	std::cout << "lenght str: ";
//	std::cout << str2.Length();
//	std::cout << '\n';
//	
//	std::cout << "lenght str2: ";
//	std::cout << str2.Length() << '\n' << '\n';
//	////////////////////////////////////
//	//������������ �����
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
//	//������������
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
//	//������������� �������� ���������
//	bool equality = (str == str2);
//	std::cout << equality;
//
//	equality = (str == copyStr) << '\n';
//	std::cout << equality << '\n';
//	//������������� �������� ����������� 
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
