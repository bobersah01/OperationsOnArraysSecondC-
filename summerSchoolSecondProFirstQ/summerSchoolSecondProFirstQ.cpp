//NUMEROLOGY QUESTION - 2
//AT THE SAME TIME, WE CAN DO THIS WITH STRUCT.
#include <iostream>
#include <string>
using namespace std;

/*This question requires that an array must include characters and their integer values.
Until this time, we use static arrays which means in an array, all values have same data types.
But this time we have to use structs for using with 2 different data types together.
For this purpose, I am trying to do this question without using structs. 
I am trying to define a template.
I realised that I can not use template class function for this question, because when I create a template,
I can not reach all elements of the array. Therefore, I can not use template function. 
template<class T>
We can use pair function in which  to take two different data types together.*/

int main()
{
	string userName;
	const int height = 26;
	const int weight = 2;
	int summation = 0;
	int counter = 0;

	//first parameter is taken.
	cout << "Enter your name: " << endl;
	getline(cin,userName);

	/*T array[height][weight] = {{"A",1},{"B",2},{"C",3},{"D",4}, {"E",5}, {"F",8}, {"G",3},{"H",5},
		//{"I",1}, {"J",1}, {"K",2}, {"L",3}, {"M",4}, {"N",5}, {"O",7}, {"P",8},
		//{"Q",1} {"R",2}, {"S",3}, {"T",4}, {"U",6}, {"V",6}, {"W",6}, {"X",5},{"Y",1} {"Z",1} };*/

	/*I am using pair function in spite of template class.*/
	/*Pair function is used to colobarate two different data types.*/
	pair<char, int> arr[height] = { {'A',1},{'B',2},{'C',3},{'D',4}, {'E',5}, {'F',8}, {'G',3},{'H',5},
		{'I',1}, {'J',1}, {'K',2}, {'L',3}, {'M',4}, {'N',5}, {'O',7}, {'P',8},
		{'Q',1}, {'R',2}, {'S',3}, {'T',4}, {'U',6}, {'V',6}, {'W',6}, {'X',5},{'Y',1}, {'Z',1} };


	/*for (int i = 0; i < height; i++)
	{
		for (int j = 0; j < weight; j++)
		{
			cout << array[i][j] << endl;
		}
	}*/

	//Printing array indexes (for pair function)
	/*for (int i = 0; i < height; i++)
	{
		cout << arr[i].first << " " << arr[i].second << endl;
	}*/

	for (int i = 0; i < userName.length(); i++)
	{
		if ((userName[i] >= 'A' && userName[i] <= 'Z') && (userName[i] != ' '))
		{
			counter += 1;
			for (int j = 0; j < height; j++)
			{
				if (userName[i] == arr[j].first)
				{
					summation += arr[j].second;
				}
			}
		}
	}
	//When counter equals the length of the userName, which means there is no space and lowercase letter,
	//I have to print numerology number of the user.
	//There is no need to define this part, because in other conditions we have to print invalid name.
	if (counter == userName.length())
		cout << "Your numerology no is: " << summation << endl;
	else
	{
		/*for (int i = 0; i < userName.length(); i++)
		{
			//if index is lowercase and without space.
			if ((userName[i] >= 'a' && userName[i] <= 'z') && userName[i] != ' ')
			{
				cout << "Lowercase letters are not allowed." << endl;
				break;
			}
			//if index has space, not imprtant for lower or upper case condition.
			else if (userName[i] == ' ')
			{
				cout << "Space is not allowed." << endl;
				break;
			}
		}*/

		cout << "Invalid name." << endl;
	}

	/*I am controlling the counter and the length of the username.These parameters are equal.
	cout << "The length of the userName: " << userName.length() << endl;
	cout << "The counter: " << counter;*/

	return 0;
}