#include <iostream>
using namespace std;

class Sets_and_Relations
{
private:
	void Input();
	void Reflexive(string a, string   b);
public:
	void Display();
	
};
void Sets_and_Relations::Input()
{
	Sets_and_Relations SR;
	cout << "Enter size of your set \n";
	int s;
	cin >> s;
	string  a;
	cout << "Enter elements inside your set \n";
	for (int i = 0; i < s; i++)
	{
		cin >> a;
	}
    cout << "Enter size of your relation \n";
	int s2;
	cin >> s2;
	cout << "Enter tuples of your relation \n";
	string  b,c;
	for (int j = 0; j < s2; j++)
	{
		cin >> b;
		cin >> c;
		cout << endl;
		cout << endl;
	}
	
	
	SR.Reflexive(b, c);
}
void Sets_and_Relations::Reflexive(string a, string  b)
{  for(int i=0;i<a.length();i++)
	if (a[i] == b[i])
	{
		cout << "Reflexive property holds "<<"on tuples "<<a[i]<<"  and  "<<b[i]<<endl;
	}
}
void Sets_and_Relations::Display()
{
	Sets_and_Relations  sar;
	sar.Input();

}
int main()
{
	Sets_and_Relations sr;
	sr.Display();

	return 0;
}