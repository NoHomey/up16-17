#include <iostream>
using namespace std;

unsigned int length(char str[])
{
	unsigned int count = 0;
	for (int i = 0; str[i] != '\0'; ++i)
	{
		count += 1;
	}
	return count;
}

unsigned int length2(char str[])
{
	unsigned int count = 0;
	while(*str != '\0')
	{
		str += 1;
		count += 1;
	}
	return count;
}

int main()
{
	char word[1000];
	cin >> word;
	cout << length(word) << endl;
	cout << length2(word) << endl;
	return 0;
}
