#include<iostream>
using namespace std;
class print{
	int n4;
	char *hg;
	public:
		print(int,char *);
		print(char *,int);
};
print::print(int a,char *b){
	n4=a;
	hg=b;
	cout<<"integer:"<<n4<<endl;
	cout<<"character:"<<hg<<endl;
}
print::print(char *c, int d){
	hg=c;
	n4=d;
	cout<<"character:"<<hg<<endl;
	cout<<"integer:"<<n4<<endl;
}
int main(){
	print d1(32,"vinnu"),d2("hi",45);
	return 0;
}
