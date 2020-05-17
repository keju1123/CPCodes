#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
	int a;
	double x;
    cin >> a;
    double sum;
    int counter;
    for (int i = 1;i <= a;i++)
    {
    	cin >> x;
    	if(x>0)
    	{
    		sum+=x;
    		counter++;
		}
	}
	if (counter==0)
	{
		cout << "Not Found"<< endl;
		
	}else
	{
		cout <<fixed << setprecision(2)<<sum/counter<<endl;
	}
}

