#include <iostream>
#include <string>
#include<fstream>
#include<cmath>

struct studentData

{

    intID Number[5];
	string name[5];
	int age[5];
	stringGender[5];
	double score[5];
	string grade[5];
	
}
in main()
{
	double_total scores=0;
	int total_age=0;
	int count_male=0;
	int count_female=0;
	double average_score=0;
	double average_age=0;
	int num_student=0;
	num_student=5;
	double my_score;
	student Ericahene;
	for(int i=0; i<num_students;i++)
{
	cout<"Enter your ID:";
	cin>>Ericahene.ID_number[i]";
	cout<<"Enter yourage:";
	cin>>Ericahene.Age[i];
	cout<<"Enter your Gender:";
	cin>>Ericahene.Genger[;];
	cout<<"Enter your Score:";
	cin>>Ericahene.score[;];
	
	if(Ericahene.score[i]>80&&Ericahene.score[i]<=100)
	{
		Ericahene.score[i]="A";
		
	}
	else if(Ericahene.score[i]>70&&Ericahene.score<=80)
	{
		Ericahene.score[i]="B";
		
	}
else if(Ericahene.score[i]>60&&Ericahene.score[i]<=70)
{
	Ericahene.score[i]="C";
}

	else if(Ericahene.score[i]>50&&Ericahene.score[i]<=60)
{
	Ericahene.score[i]="D";
}
else if (Ericahene.score[i]>40&&Eicahene.core[i]<=50)
{
	Ericahene.score[i]="E";
	
}
	else
	{
		Ericahene.score[i]="F";
		
	}
	cout<<endl;
	if(Ericahene.Gender[i]=="male")
	{
		cout_male++;
	}
	else if(Ericahene.Gender=="female")
	{
		cout_female++;
	
	}
	
	_score
	cout<<"*****************************************"<<endl;
	
	cout<<"ID"   "<<Name"   "<<"age"<<"      "<<"   "<<"Gender"<<"   "<<"Score"<<"Grade"<<endl;
	cout<<"	***************************************************************************************"<<endl;
	for(int i=0;i<num_students;i++
	{
	total_score=total_scores+Ericahene.score[i];    
		total_age=total_age+ericahene.age[i];
		average_score=total_score/num_students;
		average age=total_age/num_students;
		
		cout<<Ericahene.ID_number[i]<<"t"<<Ericahene.name[i]<<"t"<<Ericahene.age[i]<<"t"<<Ericahene.Gender[i]
		cout<<"t"<<Ericahene.score[i]<<"t"<<Ericahene.score[i]<<"t"<<Ericahene.grade[i];
		cout endl;
	}
	cout<<"the average	age is"<<average_age<<endl;
	cout<<"the average score is"<<average_score<<endl;
	cout<<"the number of females are"<<count_female<<endl;
	cout<<"the number of males are"<<count_males<<endl;   
	
	ofstram students;
	student.open("My student.txt",ios::app)
	student<<"*************************************************<<endl;
	student.close()
	return 0;
	}
	"
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}

