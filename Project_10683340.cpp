#include<iostream>
using namespace std;
struct Student{
	string name;
	string name1;
	int age;
	char gender;
	int id;
	string hall;
	string program;
	string course1;
	string course2;
	string course3;
	string course4;
};

struct Staff{
	string name;
	string name1;
	int age;
	char gender;
	string staff;
	int id;
};




int main(){
	Staff ah[sta];
	Student ph[stu];
	int a,stu,sta;
	stu = 1500;
	sta = 5000;
	cout<<"University of Ghana Management System"<<endl<<endl;
	cout<<"Enter 1 for Student related Problems"<<endl;
	cout<<"Enter 2 for Staff related Problems"<<endl;
	cout<<"Enter 3 for Course realated issues"<<endl;
	cout<<"Enter 4 to Record Student grades"<<endl;
	cout<<"Enter 5 to Display your Academic result"<<endl;
	cin >> a;
	
	
	
	switch(a){
		case 1:
		cout<<"Enter (1) to Add Student to Database"<<endl;
		cout<<"Enter (2) to Edit Student Profile from Database"<<endl;   //Page for Student issues//
		cout<<"Enter (3) to Delete Student from Database"<<endl;
		int c;
		cin>> c;

		if(c == 1){
		int num;
		cout<<"How Many Students are you adding"<<endl;
		cin>> num;
		for(int a =0 ; a < num; a++){                                  //Adding Students //
		cout<<"Your First Name"<<endl;
		cin>> ph[a].name;
		cout<<"Your Last Name"<<endl;
		cin >> ph[a].name1;
		cout<<"Your age"<<endl;
		cin>> ph[a].age;
		cout<<"Your Gender "<< "M for male and F for Female"<<endl;
		cin >> ph[a].gender;
		cout<<"Your ID Number"<<endl;
		cin>> ph[a].id;
		cout<<"Your Hall of Residence"<<endl;
		cin>> ph[a].hall;
		cout<<"Your Program of Study"<<endl;
		cin>> ph[a].program;
        }
    }
    else{
    	break;
	}
	
	if(c == 2){
		int num;
		cout<<"Enter your ID Number here!"<<endl;
		cin>> num;
		for( int a =0 ; a < stu ; a++){
			if(ph[a].id == num ){
			cout<<"If you are editing your profile you must redo it again except for your Id"<<endl;
			cout<<"Your First Name"<<endl;                                                             //Editing Student's Profile//
			cin>>ph[a].name;
			cout<<"Your Last Name"<<endl;
			cin>>ph[a].name1;
			cout<<"Your age"<<endl;
	    	cin>> ph[a].age;
		    cout<<"Your Gender "<< "M for male and F for Female"<<endl;
		    cin >> ph[a].gender;
		    cout<<"Your Hall of Residence"<<endl;
		    cin>> ph[a].hall;
		    cout<<"Your Program of Study"<<endl;
		    cin>> ph[a].program;
		}
		else{
			  cout<<"You Profile cannot be found in the School Database"<<endl;
		}
			}
		}
	if(c == 3){
		int k;
		cout<<"Enter the id number"<<endl;
		cin>> k;
		for(int b = 0 ; b < stu ;b++){
			if(ph[b].id == k){
				b--;                                                     //Deleting Student from Database//
				cout<<"The Student has been deleted"<<endl;
			}
		else{
			break;
		}	
		}
	}
	    break;
	    case 2 :
        cout<<"Enter (1) to Add Staff to Database"<<endl;
		cout<<"Enter (2) to Edit Staff Profile from Database"<<endl;                   //Page for Staff issues//
		cout<<"Enter (3) to Delete Staff from Database"<<endl;
		int d;
		cin>> d;
		
		if(d == 1){
		int num1;
		cout<<"How Many Staff are you adding"<<endl;
		cin>> num1;
		for(int v =0 ; v < num1; v++){
		cout<<"Your First Name"<<endl;
		cin>> ah[v].name;                                                             //Adding Staff to Database//
		cout<<"Your Last Name"<<endl;
		cin >> ah[v].name1;
		cout<<"Your age"<<endl;
		cin>> ah[v].age;
		cout<<"Your Gender "<< "M for male and F for Female"<<endl;
		cin >> ah[v].gender;
		cout<<"Your Job description"<<endl;
		cin>> ah[v].staff;
		cout<<"Your ID"<<endl;
		cin>> ah[v].id;
	}
		}
		else{
			break;
		}
	 if(d == 2){
	 	int l;
		cout<<"Enter your ID here!"<<endl;
		cin>> l;
		for( int e = 0 ; e < sta ; e++){
		if(ph[e].id == l ){
		cout<<"To active a correction you have to refill your Profile again except your ID"<<endl<<endl;
		cout<<"Your First Name"<<endl;
		cin>> ah[l].name;
		cout<<"Your Last Name"<<endl;                          //Editing for Staff//
		cin >> ah[l].name1;
		cout<<"Your age"<<endl;
		cin>> ah[l].age;
		cout<<"Your Gender "<< "M for male and F for Female"<<endl;
		cin >> ah[l].gender;
		cout<<"Your Job description"<<endl;
		cin>> ah[l].staff;
	 }
	 else{
	 	   cout<<"You Profile cannot be found in the School Database"<<endl;
	 }
}
}
	if(d == 3){
		int f;
		cout<<"Enter the id number"<<endl;
		cin>> f;
		for(int g = 0 ; g < sta ; g++){
			if(ph[g].id == f){
				g--;                                                     //Deleting Staff from Database//
				cout<<"The Staff has been deleted"<<endl;
			}
		else{
			 cout<<"You Profile cannot be found in the School Database"<<endl;
		}	
		
	}
}
    break;    
    case 3:
    	int v;
			cout<<"Enter(1) to add Courses"<<endl;
			cout<<"Enter(2) to edit Courses"<<endl;                  //Course related problems Homepage//
			cout<<"Enter(3) to delete Courses"<<endl;
			cin>>v;
	if( v== 1){
		int m;
		cout<<"Enter your Id Number"<<endl;
		cin>> m;
		for(int o = 0 ; o < stu ; o++){
			if(ph[o].id == m){
				cout<<"Enter your Courses below"<<endl;
				cin>>ph[o].course1;
				cin>>ph[o].course2;
				cin>>ph[o].course3;                                //Adding of Student Courses//
				cin>>ph[o].course4;
			}
			else{
				  cout<<"You Profile cannot be found in the School Database"<<endl;
			}
		}
}
    if( v == 2){
    	int n;
    	cout<<"You have to register for your courses again to effect your changes"<<endl;
    	cout<<"Enter your Id Number"<<endl;
    	cin>> n;
    	for(int p = 0 ; p < stu ; p++){
    		if(ph[p].id == n){
    			cout<<"Your Registered Courses"<<endl;
    			cout<<ph[p].course1;
    			cout<<ph[p].course2;
    			cout<<ph[p].course3;                             //Editing of Student Courses//
    			cout<<ph[p].course4;
			}
		else{
			  cout<<"You Profile cannot be found in the School Database"<<endl;
		}
	
		}
	}
	
	if( v==3 ){
		int h;
		cout<<"Deleting your Courses cannot be reversed"<<endl;
		cout<<"This means your profile records will also be deleted"<<endl;
		cout<<"Enter your Id number"<<endl;
		cin>> h;
		for(int u = 0 ; u < stu; u++){
			if(ph[u].id == h){                                                 //Deleting of Courses//
				h--;
				cout<<"Your Record as well as your courses have been deleted"<<endl;
			}
		else{
			continue;
		}	
		}
		
	}
	break;
	
	case 4:
		int u;
		char w;
		float q,t,s,x,y,r;
			cout<<"Enter your ID number"<<endl;
			cin>>u;
			for(int j = 0 ; j < stu ; j++){
				if(ph[j].id == u){
					cout<<"Enter the scores for your courses"<<endl;
					cout<<ph[j].course1;
					cin>>q;
    			    cout<<ph[j].course2;
    			    cin>>t;
    			    cout<<ph[j].course3;                          //Academic Recording of Marks//
    			    cin>> s;
    			    cout<<ph[j].course4;
    			    cin>>x;
    			    cout<<"Critical thinking and Practical reasoning"<<endl;                 //1st Assigned Course to Student//
    			    cin>>y;
    			    cout<<" General Academic writing"<<endl;                                 //2nd Assinged Course to Student//
    			    cin>>r;
				}
				else{
					 cout<<"You Profile cannot be found in the School Database"<<endl;
				}
			}
			break;
		

        case 5:
        	int id;
        	cout<<"Enter your Id number"<<endl;
        	cin>> id;
        	for(int u = 0 ;  u < stu ; u ++){
        		if(ph[u].id == id){
        			cout<<"Name: " << ph[u].name <<ph[u].name1<<endl;
        			cout<<"Program: "<< ph[u].program<<endl;
        			cout<<"ID Number: "<<ph[u].id<<endl;
        			cout<<"*****************************************************************************************"<<endl;
        			cout<< ph[u].course1 << q<<endl;
        			cout<< ph[u].course2 << t<<endl;                                   //Display of Student  Academic Records//
        			cout<< ph[u].course3 << s<<endl;
        			cout<< ph[u].course4 << x<<endl;
        			cout<<"Critical thinking and Practical Reasoning" << y<<endl;
        			cout<<"General Academic writing"<< r<<endl;
        			cout<<"******************************************************************************************"<<endl;
				}
				else{
					cout<<"You Profile cannot be found in the School Database"<<endl;
				}
			}
		      break;
		}
		
		
		system("pause");
		return 0;
	}
