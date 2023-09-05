#include<iostream>
#include<math.h>
#include<cstdlib>
#include<time.h>
using namespace std;

int main(){
	
	int number, guess;
	int n;
	
	
		srand(time(NULL));	
		number = rand() % 100+1;
	cout<<number;	
	cout<<"Guess the number between 1 to 100!"<<endl;
	cout<<"You only got 10 tries, so goodluck!" <<endl;
	cout<<endl;
	
		
			for (int i=1; i<=11; i++)
			{
			
				cout<<i <<". " <<"Numbers: " ;
				cin>>guess;
				cout<<endl;
		
					if (number<guess){
							cout<<"Too High!" <<endl;
							cout<<"Again!" <<endl;
					}
					else if (number>guess)
					{
							cout<<"Too Low!" <<endl;
							cout<<"Again!" <<endl;
					}
					else if (number==guess)
					{
						cout<<"Akhirnya Betul!"<<endl;
						cout<<"Selamat!!! *clap* *clap* *clap* " <<endl;
						cout<<endl;
					cout<<"It took you a total of: " <<i<<" tries" <<endl;
					i = 11;
					}
					
					if (i==10)
					{
					cout<<endl;
					cout<<endl;
					cout<<"Nuh uh~ Ran out of tries XD!" <<endl;
					cout<<"You Got a Skill Issue fr! ";
					cout<<"BTW The number is " <<number <<endl;
					cout<<"Well next time bye bye!" <<endl;
						break;
					}
			}
		

	
system("pause");
return 0;

	
}
