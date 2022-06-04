#include <iostream>
using namespace std;
class Arithmatic
{
	private:
		double a_1, common;
		double a_n,n;
	public:
		friend void Ap(Arithmatic obj);
};
void Ap(Arithmatic obj)
	{
		obj.a_1=2;
		obj.common=2;
		cout<<"Enter the value of n ";
		cin>>obj.n;
		obj.a_n=obj.a_1+((obj.n-1)*obj.common);
		cout<<"a_"<<obj.n<<" = "<<obj.a_n<<endl;
	}
int main()
	 {
		Arithmatic obj;
	Ap(obj);
	return 0;
	}
