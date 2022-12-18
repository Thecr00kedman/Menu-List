#include<iostream>
using namespace std;

class node{
	public:
	int data;
	node*next;
};
node*head= NULL;

void insertatbeg(int n){
	node*p = new node;
	p->data= n;
	p->next= head;
	head = p;
}
void insertatend(int n){
	node*p = new node;
	p->data=n;
	p->next=NULL;
	node*temp= head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
	temp->next = p;
}
void insertatanypos(int n,int pos){
	node*p= new node;
	p->data=n;
	p->next=NULL;
	node*temp=head;
	int i=1;
	while(i<pos-1)
	{
		temp=temp->next;
		i++;
	}
	p->next=temp->next;
	temp->next= p;
	}
void Deleteatbeg(){
	node*temp= head;
	head= head->next;
	delete(temp);
}
void Deleteatend(){
	node*temp=head;
	node*temp2=temp;
	while(temp->next!=NULL){
		temp2=temp;
		temp=temp->next;
	}
	temp2->next=NULL;
	delete(temp);
}

void Deleteatanypos(int pos){
	node*temp=head;
	node*temp2=temp;
	int i=1;
	while(i<pos){
		temp2=temp;
		temp=temp->next;
		i++;
	}
	temp2->next=temp->next;
	temp->next=NULL;
	delete(temp);
}
void traverse(){
	node*temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"\t";
		temp=temp->next;
	}
}
int main(){
	int val, ch,pos;
	cout <<"Menu";
	cout<<endl<<"1. Insert at beginning"<<endl<<"2.Insert at end"<<endl<<"3.Insert at any position"<<endl<<
	"4.delete at beginning"<<endl<<"5.Delete at end"<<endl<<"6.Delete at any position"<<endl<<"7.Traverse the list"<<endl;
	
	while(1)
	{
		cout<<"\n enter your choice"<<endl;
		cin>>ch;
		switch(ch){
			case 1: cout<<"enter the value to be inserted: ";
			        cin>>val;
	                insertatbeg(val);
	                break;
	       
		    case 2: cout<<"enter the value to be inserted: ";
	                cin>>val;
	                insertatend(val);
	                break;
	                
	        case 3: cout<<"enter the position: ";
	                cin>>pos;
	                cout<<"enter the value to be inserted: ";
	                cin>>val;
	                insertatanypos(val,pos);
			case 4: Deleteatbeg();
			        break;
			case 5: Deleteatend();
			        break;
			case 6: cout<<"enter the position: ";
			        cin>>pos;
			        Deleteatanypos(pos);
			        break;
			
			case 7: traverse();
	                break;
	        case 8: exit(0);
	        
	        default: cout<<"\n Error! Invalid Choice";
	                
	                
	        
	}
	
}
return 0;
}
