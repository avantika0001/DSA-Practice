//top variable store the index location of the top value in the stack

#include <iostream>
#include <string>


using namespace std;

class Stack{
	private:
		int top; 
		int arr[5]; //this is hard coding.can also take size array from user dynamically
		
		
	public:
		Stack()
		{
			top =-1;
			for(int i=0; i<5;i++){
				arr[i]=0; //all entries in array 0
			}
		}
		
		bool isEmpty(){
			if(top==-1)
				return true;
			else
				return false;	
		}
		
			bool isFull(){
			if(top==4)
				return true;
			else
				return false;			
		}
		
		void push(int val){
			if(isFull()){
				cout<<"--STACK OVERFLOW--"<<endl;
			}
			else{
				top++; 
				arr[top]=val;
			}
		}
		
		int pop(){  //return type int bcoz pop returns the value at top of stack and removes it
			if(isEmpty()){
				cout<<"CAN'T REMOVE ANYTHING, STACK ALREADY EMPTY"<<endl;
				return 0; //have to return something
			}
			else{
				int popValue= arr[top]; //created opoValue to store the value at top that we have to return
				arr[top]=0; //removing value at top so we make it 0, as it was initilally
				top--;
				return popValue;	
			}	
		}
		
		int count(){
			return (top+1); //bcoz top stores index value which is 1 less than the actual no.  of items in the array
		}
		
		int peek(int pos){
			if(isEmpty()){
				cout<<"CAN'T PEEK ANYTHING, STACK ALREADY EMPTY"<<endl;
				return 0; //have to return something
			}
			else{
				return arr[pos];
			}
		}
		
		void change(int pos, int upd_val){ //pos= position at which change to be made, upd_val= updated value
			arr[pos]=upd_val;
			cout<<"ITEM CHANGED AT LOCATION "<<pos<<endl;
		}
		
		void display(){
			//we have make it look like a stack while printing so the first value entered in the array goes at the last of stack pile
			cout<<"ALL VALUES IN THE STACK ARE "<<endl;
			for(int i=4; i>=0;i--){
				cout<<arr[i]<<endl;
			}
		}
		 
};

int main()
{
	Stack s1;
	int option, position, value;
    //creating a menu to display all the stack functions
	//execute at least once
	do{
		cout<<"What operations do you want to perform? Select option number. Enter 0 to exit"<<endl;
		cout<<"1. push()"<<endl;
		cout<<"2. pop()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. peek()"<<endl;
		cout<<"6. count()"<<endl;
		cout<<"7. change()"<<endl;
		cout<<"8. display()"<<endl;
		cout<<"9. Clear Screen"<<endl;
		cout<<"0. Exit"<<endl<<endl;
		
		cin>>option;
		
		switch(option){
			case 0 :
				break;
			case 1 : 
				cout<<"Enter an item to push in the stack: "<<endl;
				cin>>value;
				s1.push(value);
				break;
			case 2 :
				cout<<"Pop function called-- Popped value: "<<s1.pop()<<endl;
				break;
			case 3 :
				if(s1.isEmpty()){
					cout<<"STACK EMPTY"<<endl;
				}else{
					cout<<"STACK IS NOT EMPTY"<<endl;
				}
				break;
			case 4 :
				if(s1.isFull()){
					cout<<"STACK FULL"<<endl;
				}else{
					cout<<"STACK IS NOT FULL"<<endl;
				}
				break;
			case 5 :
				cout<<"Enter position of item you want to peek: "<<endl;
				cin>>position;
				cout<<"Peek function is called-- Value at position "<<position<<" is : "<<s1.peek(position)<<endl;
				break;
			case 6 :
					cout<<"Count function is called-- Number of items in stack are: "<<s1.count()<<endl;
					break;
			case 7 :
				cout<<"Change function called-- "<<endl; 
				cout<<"Enter the position of the item to be changed: "<<endl;
				cin>>position;
				cout<<"Enter the value of the item to be changed(new value): "<<endl;
				cin>>value;
				s1.change(position,value);
				break;
			case 8 :
				cout<<"Display function called-- "<<endl;
				s1.display();
				break;
			case 9 :
				system("cls");
				break;
			default:
			cout<<"Enter proper option number!"<<endl;								
		}
		
		
	}while(option!=0);
    return 0;
}

