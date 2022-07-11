//the program used to save users favourite memories
#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>
using namespace std;
class movies
{
	public:
	string Movie_title;
	string gender;
	movies()
	{
		cout<<"Tell me your Favourite movie title\n";
		getline(cin,Movie_title);
		cout<<"what kind of gender is it ?\n";
		getline(cin,gender);
	}
};
class musics
{
	public:
		string title;
		string name;
		string language;
		musics()
		{
			cout<<"Now tell me your favourite Music\n";
			getline(cin,title);
			cout<<"who is the singer ?\n";
			getline(cin,name);
			cout<<"in What language is the song ?\n";
			getline(cin,language);
		}
};

class places
{
	public:
		string place_name;
		string location;
		places()
		{
			cout<<"what is the name of your favourite place?\n";
			getline(cin,place_name);
			cout<<"Where is the location?\n";
			getline(cin,location);
		}
		
};
class arrange : public movies , public musics, public places
{
	public:
		
		void output(string x)
		{
			if(Movie_title=="")
			{
			cout<<"This form is incomplete";
		}
		}
		void savememo()
		{
			fstream myfile;
			myfile.open("C:/Users/op/Desktop/urgent pros/ftmemo/memories.txt",ios::out);
			if(myfile.is_open())
			{
				myfile<<"-]-]-]----]-]-]----]-]-]----]-]-]---]-]-]----]-]-]----]-]-]----"<<endl;
				myfile<<"|"<<setw(15)<<"The Users Favourite things"<<endl;
				myfile<<"|"<<setw(15)<<"Movie Name"<<setw(15)<<"|"<<Movie_title<<endl;
				myfile<<"|"<<setw(15)<<"Movie Gender"<<setw(15)<<"|"<<gender<<endl;
				myfile<<"|"<<setw(15)<<"Music Title"<<setw(15)<<"|"<<title<<endl;
				myfile<<"|"<<setw(15)<<"Musician"<<setw(15)<<"|"<<name<<endl;
				myfile<<"|"<<setw(15)<<"Music Language"<<setw(15)<<"|"<<language<<endl;
				myfile<<"|"<<setw(15)<<"Place"<<setw(15)<<"|"<<place_name<<endl;
				myfile<<"|"<<setw(15)<<"Location"<<setw(15)<<"|"<<location<<endl;
				myfile.close();
			}
		}
void print()
{
    fstream myfile;
	myfile.open("C:/Users/op/Desktop/urgent pros/ftmemo/memories.txt",ios::in);
if(myfile.is_open())
{  
	string line;
    while(getline(myfile,line))
     {
            cout<<line<<endl;


     }
    myfile.close();
}

   }
};

int main()
	{
		arrange ar;
		ar.savememo();
		ar.print();
		return 0;
	}
