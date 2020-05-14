#include<bits/stdc++.h>
using namespace std;

int j=0, i=0;
int m=5;

class Exception
{
public:
	string errmssg;

	Exception(string str)
	{
		errmssg=str;
	}

	void showError()
	{
		cout<<"Error : "<<errmssg<<endl;
	}
};

enum personType {
	P_Student, P_Employee
};

class person
{
public:
	string name;
	int id;
	string address;
	string gender;
	long int mobileNo;

	virtual void getdata1(string nname,int iid,string add,string gen,long int mob,int sem,float cg,string pwd) {
		;
	}
	virtual void getdata2(string nname,int iid,string add,string gen,long int mob,int acc,bool typ,int exp,string pwd) {
		;
	}
	virtual void display() {
		;
	}
	virtual void displayResult() {
		;
	}
	virtual void addstu() {
		;
	}

	virtual int getsal(bool typ,int exp) {
		;
	}
	virtual string getpswd()=0;

	virtual void addemp(){
		;
	}
	virtual int searchstu(string ab) {
		;
	}
	virtual int searchemp(string ab) {
		;
	}
	static person* Create(personType type);
	
};


class student:public person
{
private:
	string pswd;
public:
	int semester;
	float cgpa;
	bool flag;

	void getdata1(string nname,int iid,string add,string gen,long int mob,int sem,float cg,string pwd)
	{

		name=nname;
		id=iid;
		address=add;
		gender=gen;
		mobileNo=mob;
		semester=sem;
		cgpa=cg;
		pswd=pwd;

	}

	void display()
	{
		cout<<"\nStudent name ="<<name<<"\nStudent ID = "<<id<<endl;
		cout<<"Gender = "<<gender<<"\nContact no = "<<mobileNo<<endl;
		cout<<"Address = "<<address;
		cout<<"\n";
	}

	void addstu()
	{
		cout<<"Enter student name:- ";
		cin>>name;
		cout<<"\nEnter student id:- ";
		cin>>id;
		cout<<"\nEnter student address:- ";
		cin>>address;
		cout<<"\nEnter student gender:- ";
		cin>>gender;
		cout<<"\nEnter student contact deatil:- ";
		cin>>mobileNo;
		cout<<"\nEnter student semester deatil:- ";
		cin>>semester;
		cout<<"\nEnter student CGPA:- ";
		cin>>cgpa;
		cout<<"\n Enter prassword:- ";
		cin>>pswd;
	}

	int searchstu(string ab)
	{
		if(name==ab)
			return 1;
		else return 0;
	}

	void displayResult()
	{
		//Saving output in file Result.txt//
		ofstream outfile;
		outfile.open("Result.txt");

		outfile<<"Student name\t\t"<<"CGPA\n";
		cout<<"Student name\t\t"<<"CGPA\n";
		cout<<name<<"\t\t\t"<<cgpa;
		outfile<<name<<"\t\t\t"<<cgpa;
		outfile<<"\n";

		outfile.close();
	}

	string getpswd()
	{
		return pswd;
	}


};

class employee:public person
{
private:
	int account;
	string pswd;

public:
	bool type; 
	int workexp;
	int ecount;
	string nname;
	string add;
	string gen;
	long int mob;
	int iid;
	int acc;
	int work;
	int ttype;
	employee *empl;
	bool flag;

	void getdata2(string nname,int iid,string add,string gen,long int mob,int acc,bool typ,int exp,string pwd)
	{
		name=nname;
		id=iid;
		address=add;
		gender=gen;
		mobileNo=mob;
		account=acc;
		type=typ;
		workexp=exp;
		pswd=pwd;
	}

	void display()
	{		
		cout<<"\nEmp name ="<<name<<"\nEmp ID = "<<id<<endl;
		cout<<"Gender = "<<gender<<"\nContact no = "<<mobileNo<<endl;
		cout<<"Address = "<<address;
		cout<<"\n"<<endl;
	}

	int getsal(bool typ,int exp)
	{
		int sal;
		if(typ==0)
		{
			sal=5000*exp;
			//cout<<name<<"\t\t\t"<<"Non academic\t\t\t"<<sal<<endl;
		}

		if(typ==1)
		{
			sal=10000*exp;
			//cout<<name<<"\t\t"<<"Academic\t\t\t"<<sal<<endl;
		}
		return sal;

	}

	void addemp()
	{
		cout<<"Enter employee name:- ";
		cin>>name;
		cout<<"\nEnter employee id:- ";
		cin>>id;
		cout<<"\nEnter employee address:- ";
		cin>>address;
		cout<<"\nEnter employee gender:- ";
		cin>>gender;
		cout<<"\nEnter employee contact deatil:- ";
		cin>>mobileNo;
		cout<<"\nEnter employee account deatil:- ";
		cin>>account;
		cout<<"\nEnter employee work experience:- ";
		cin>>workexp;
		cout<<"\nEnter employee category(i.e 0 for non academic and 1 for academic):- ";
		cin>>type;
		cout<<"Enter employee login password:- ";
		cin>>pswd;

	}


	int searchemp(string ab)
	{
		if(name==ab)
			return 1;
		else return 0;
	}

	string getpswd()
	{
		return pswd;
	}

	void displayResult()
	{
		int sal;
		sal = getsal(type,workexp);
		//Saving output in file Result.txt//
		ofstream outfile;
		outfile.open("Salary.txt");

		outfile<<"Employee name\t\t"<<"SALARY\n";
		cout<<"Employee name\t\t"<<"SALARY\n";
		cout<<name<<"\t\t\t"<<sal;
		outfile<<name<<"\t\t\t"<<sal;
		outfile<<"\n";

		outfile.close();
	}

};

person *person::Create(personType type)
{
	if(type == P_Student)
		return new student();
	else if(type ==  P_Employee)
		return new employee();
	else
		return NULL;
}

class personFactory {
public:
	personFactory(personType type)
	{
		object = person::Create(type);
	}

	person* getperson() {
		return object;
	}

private:
	person *object;
};



class department;
class student;
class employee;

class department {
public:
	string dname;
	string dloc;

	void getdata(string dn,string loc)
	{
		dname=dn;
		dloc=loc;
	}

	void display()
	{
		cout<<"Departmet name is "<<dname<<" located at "<<dloc<<endl;
	}

	void adddep()
	{
		string a;
		string b;
		
		cout<<"Enter name of department to add:-";
		cin>>a;
		cout<<"\nEnter location of department:-";
		cin>>b;
		
		dname=a;
		dloc=b;
		cout<<"Departmet added sucessfully\n";
	}

	int searchdep(string ab)
	{
		if(dname==ab)
			return 1;
		else return 0;
	}

};
class university
{
public:
	string uName;
	string vc;
	department darr[10];

	//paramaterized constructor as university name and vc name are fixed//
	university(string uname,string vc1)
	{
		this->uName=uname;
		this->vc=vc1;
	} 

	void welcomeNote()
	{
		cout<<"\t\tWelcome to "<<this->uName<<endl;
	}

	void printDetail()
	{
		cout<<"\t\tUniversity Name:- "<<this->uName<<"\n\t\tVice Chancellor Name:- "<<this->vc<<endl;
	}

};



int main()
{	
	person *s[100];
	person *e[100];
	int loginChoice,cloginChoice,aloginChoice,f=10,k=10;         ////f=student & k=employee
	//To clear the output console//
	system("clear");
	university u1("KLE Technological University","Dr. Ashok Shettar");
	u1.welcomeNote();
	u1.printDetail();

	// getdata1(string nname,int iid,string add,string gen,long int mob,int sem,float cg//

	personFactory *pClient1 = new personFactory(P_Student);
	s[0] = pClient1->getperson();
	s[0]->getdata1("Rahul",120,"patna","male",99876590,4,9.2,"000");

	personFactory *pClient2 = new personFactory(P_Student);
	s[1] = pClient2->getperson();
	s[1]->getdata1("Rohit",121,"Delhi","male",99876593,4,8.2,"111");

	personFactory *pClient3 = new personFactory(P_Student);
	s[2] = pClient3->getperson();
	s[2]->getdata1("Sita",122,"Barauni","female",99876765,5,7.9,"222");

	personFactory *pClient4 = new personFactory(P_Student);
	s[3] = pClient4->getperson();
	s[3]->getdata1("Ritbik",123,"Naland","male",99876591,4,8.9,"333");

	personFactory *pClient5 = new personFactory(P_Student);
	s[4] = pClient5->getperson();
	s[4]->getdata1("Rohan",124,"Hubli","male",99876490,6,8.4,"444");

	personFactory *pClient6 = new personFactory(P_Student);
	s[5] = pClient6->getperson();
	s[5]->getdata1("Rina",125,"Dharwar","female",99846590,3,6.2,"555");

	personFactory *pClient7 = new personFactory(P_Student);
	s[6] = pClient7->getperson();
	s[6]->getdata1("Rahul",126,"patna","male",99876590,4,9.2,"666");

	personFactory *pClient8 = new personFactory(P_Student);
	s[7] = pClient8->getperson();
	s[7]->getdata1("Rahetul",127,"Siwan","male",99776590,4,9.0,"777");

	personFactory *pClient9 = new personFactory(P_Student);
	s[8] = pClient9->getperson();
	s[8]->getdata1("Raushan",128,"Benguluru","male",98876590,7,5.2,"888");

	personFactory *pClient10 = new personFactory(P_Student);
	s[9] = pClient10->getperson();
	s[9]->getdata1("Rashmi",129,"Mysore","female",99878760,4,9.2,"999");


	//getdata2(string nname,int iid,string add,string gen,long int mob,int acc,bool typ,int exp)//
	personFactory *pClient11 = new personFactory(P_Employee);
	e[0] = pClient11->getperson();
	e[0]->getdata2("Prof. B S D",990,"Noaida","male",99876545,4665,1,4,"aaa");

	personFactory *pClient12 = new personFactory(P_Employee);
	e[1] = pClient12->getperson();
	e[1]->getdata2("Prof. B S singh",991,"Delhi","male",99876678,4666,1,8,"bbb");

	personFactory *pClient13 = new personFactory(P_Employee);
	e[2] = pClient13->getperson();
	e[2]->getdata2("Ajay",992,"Dharwar","male",99898545,4666,0,4,"ccc");

	personFactory *pClient14 = new personFactory(P_Employee);
	e[3] = pClient14->getperson();
	e[3]->getdata2("Prof. D S",993,"Kota","male",99834545,4667,1,17,"ddd");

	personFactory *pClient15 = new personFactory(P_Employee);
	e[4] = pClient15->getperson();
	e[4]->getdata2("Prof. VK Bansal",994,"Jaipur","male",99878745,4668,1,21,"eee");

	personFactory *pClient16 = new personFactory(P_Employee);
	e[5] = pClient16->getperson();
	e[5]->getdata2("Vijay",995,"Noaida","male",99876540,4669,0,2,"fff");

	personFactory *pClient17 = new personFactory(P_Employee);
	e[6] = pClient17->getperson();
	e[6]->getdata2("saloni",996,"Hubli","female",99076540,4670,0,1,"ggg");

	personFactory *pClient18 = new personFactory(P_Employee);
	e[7] = pClient18->getperson();
	e[7]->getdata2("prof. Vijay",997,"patna","male",98876540,4671,1,12,"hhh");

	personFactory *pClient19 = new personFactory(P_Employee);
	e[8] = pClient19->getperson();
	e[8]->getdata2("sujit",998,"Noaida","male",89876540,4672,0,2,"iii");

	personFactory *pClient20 = new personFactory(P_Employee);
	e[9] = pClient20->getperson();
	e[9]->getdata2("prof G S H",999,"hubli","male",88876540,4673,1,22,"jjj");

	u1.darr[0].getdata("SoCSE","CLITE");
	u1.darr[1].getdata("ECE","ECE building");
	u1.darr[2].getdata("Mechnical","Mech building");
	u1.darr[3].getdata("civill","Civill building");
	u1.darr[4].getdata("Bio-technlogy","B T Building");

loginpage:
	cout<<"\n\t\t\tWELCOME TO KLETECH"<<endl;
	cout<<"\t\t1.Student Login\t\t2.Employee Login\t3.Exit\n";
	cout<<"\n\t\t\t\t\t";
	cin>>loginChoice;
	system("clear");

studentpage:
	if(loginChoice==1)
	{
		int admin,chances = 3;
		string pwd;
		cout<<"\n\t\t\t\tWelcome to Student Login System"<<endl;
		cout<<"\n\t\t1.Existing Student\t2.New Student\t3.Main Menu"<<endl;
		cin>>aloginChoice;
		if(aloginChoice==1)
		{
			pass_id:
			cout<<"Enter your Student Id : ";
			cin>>admin;
			if(admin==9999)
			{
					pass_re2:
					cout<<"Enter your password : ";
					cin>>pwd;
					if(pwd=="qw12#")
					{
						cout<<"Login Successfull\n";
						goto studentboard;
					}
					else
					{
						cout << "Wrong Password! Please Try Again\n";
        				goto pass_re2;
					}

			}
			else {
			for(int j=0;j<=f;j++)
			{
				if(s[j]->id==admin)
				{
					pass_re:
					cout<<"Enter your password : ";
					cin>>pwd;
					if( s[j]->getpswd() == pwd )
					{
						cout<<"Login Successfull\n";
						goto studentboard;
					}
					else
					{
						--chances;
        				if (chances == 0)
        				{
            				cout <<"You entered Wrong Password 3 times.\n";
            				cout <<"Terminating the program\n";
            				exit(EXIT_FAILURE);
        				}
        				cout << "Wrong Password! Please Try Again\n";
        				goto pass_re;
					}
				}
				/*else
				{
        			cout << "Wrong Student Id! Please Try Again\n";
        			goto pass_id;
				}*/
			}
		}
		}
		else if(aloginChoice==2)
		{
			personFactory *pClient = new personFactory(P_Student);
			s[f] = pClient->getperson();
			s[f]->addstu();
			f++;

			cout<<"New Student added successfully. You can Login now\n";
			goto studentpage;
		}
		else if(aloginChoice==3)
		{
			system("clear");
			goto loginpage;
		}
	}

employeepage:
	if(loginChoice==2)
	{
		int cust,cchances = 3;
		string cpwd;
		cout<<"\n\t\t\tWelcome to Customer Login System"<<endl;
		cout<<"\t\t1.Existing Employee\t2.New Employee\t3.Main Menu"<<endl;
		cin>>cloginChoice;
		if(cloginChoice==1)
		{
			cpass_id:
			cout<<"Enter your Employee Id : ";
			cin>>cust;
			if(cust==5555)
			{
					cpass_re2:
					cout<<"Enter your password : ";
					cin>>cpwd;
					if(cpwd=="qw12#")
					{
						cout<<"Login Successfull\n";
						goto employeeboard;
					}
					else
					{
						cout << "Wrong Password! Please Try Again\n";
        				goto cpass_re2;
					}

			}
			else {
			for(int p=0;p<=k;p++)
			{
				if(e[p]->id==cust)
				{
					cpass_re:
					cout<<"Enter your password : ";
					cin>>cpwd;
					if( e[p]->getpswd() == cpwd )
					{
						cout<<"Login Successfull\n";
						goto employeeboard;
					}
					else
					{
						--cchances;
        				if (cchances == 0)
        				{
            				cout <<"You entered Wrong Password 3 times.\n";
            				cout <<"Terminating the program\n";
            				exit(EXIT_FAILURE);
        				}
        				cout << "Wrong Password! Please Try Again\n";
        				goto cpass_re;
					}
				}
				/*else
				{
        			cout << "Wrong Customer Id! Please Try Again\n";
        			goto cpass_id;
				}*/
			}
			}
		}
		else if(cloginChoice==2)
		{
			personFactory *pClient = new personFactory(P_Employee);
			e[k] = pClient->getperson();
			e[k]->addemp();
			k++;

			cout<<"New employee added successfully. You can Login now\n";
			goto employeepage;
		}
		else if(cloginChoice==3)
		{
			system("clear");
			goto loginpage;
		}
	}

	if(loginChoice==3)
		exit(0);

studentboard:
	int chh;
	cout<<"\nSTUDENT DASHBOARD\n";
	cout<<"\n1 - View Students details\n";
	cout<<"2 - Search Students Name\n";
	cout<<"3 - View Student's Result\n";
	cout<<"4 - Main Menu\n";
	cin>>chh;
	if(chh==1)
	{
		for(int i=0;i<f;i++)
		{
			s[i]->display();
		}
		goto studentboard;
	}
	else if(chh==2)
	{
		string xyz;
		int flag=1;
		cout<<"	Enter Student name to search : ";
		cin>>xyz;
		try {
		for(int i=0;i<f;i++)
		{
			if(s[i]->searchstu(xyz)==1)
			{
				flag=1;
				break;
			}
			else
				flag=0;
		}
		if(flag==1)
			cout<<"Yes, Student exists\n";
		else
			throw Exception ("Student do not exist\n");
		}
		catch (Exception e)
		{
			e.showError();
		}
		goto studentboard;
	}
	else if(chh==3)
	{
		int flag1,h;
		string xy;
		cout<<"	Enter Student name : ";
		cin>>xy;
		for(int i=0;i<f;i++)
		{
			if(s[i]->searchstu(xy)==1)
			{
				flag1=1;
				h=i;
				break;
			}
			else
				flag1=0;
		}
		if(flag1==1)
		{
			s[h]->displayResult();
		}
		else
			cout<<"Student do not exist\n";
		goto studentboard;
	}
	else if(chh==4)
	{
		system("clear");
		goto loginpage;
	}

employeeboard:
	int ch;
	cout<<"\n1 - View Departments in University\n";
	cout<<"2 - To add a New Department\n";
	cout<<"3 - To search for department\n";
	cout<<"4 - To display employee details\n";
	cout<<"5 - To know salary based on experience\n";
	cout<<"6 - Main Menu\n";

	cin>>ch;

	if(ch==1)
	{
		for(int i=0;i<m;i++)
		{
			u1.darr[i].display();
		}
		goto employeeboard;
	}
	if(ch==2)
	{
		u1.darr[m].adddep();
		m++;

		goto employeeboard;
	}
	if(ch==4)
	{
		for(int i=0;i<k;i++)
		{
			e[i]->display();
		}
		goto employeeboard;
	}
	if(ch==3)
	{
		string cvb;
		cout<<"	Enter dep name to search\n";
		cin>>cvb;
		int hh=0;
		try {
		for(int i=0;i<m;i++)
		{
			if(u1.darr[i].searchdep(cvb)==1)
			{
				hh=1;
				break;
			}
			else
				hh=0;
		}
		if(hh==1)
			cout<<"Yes, department exists\n";
		else
			throw Exception ("Department do not exist\n");
		}
		catch (Exception e)
		{
			e.showError();
		}	
		goto employeeboard;
	}
	if(ch==5)
	{
		int flag2,t;
		string x;
		cout<<"	Enter Employee name : ";
		cin>>x;
		for(int i=0;i<k;i++)
		{
			if(e[i]->searchemp(x)==1)
			{
				flag2=1;
				t=i;
				break;
			}
			else
				flag2=0;
		}
		if(flag2==1)
		{
			e[t]->displayResult();
		}
		else
			cout<<"Employee do not exist\n";
		goto employeeboard;
	}
	if(ch==6)
	{
		system("clear");
		goto loginpage;
	}



	return 0;
}