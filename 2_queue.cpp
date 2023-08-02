#include <iostream>
#include <string>
using namespace std;

class Queue{
	private:
		int front;
		int rear;
		int arr[5];
		
	public:
		Queue(){
			front =-1;
			rear=-1;
			for(int i=0;i<5;i++){
				arr[i]=0;
			}
		}
		
		bool isEmpty(){
			if(front==-1 && rear==-1){
				return true;
			}
			else{
				return false;
			}
					
		}
		
		bool isFull(){
			if(rear==4){  //rear==size(arr)-1
				return true;
			}
			else{
				return false;
			}
					
		}
		
		void enqueue(int val){
			if(isFull()){
				cout<<"--CAN'T ENQUEUE, QUEUE IS FULL--"<<endl;
				//return;
			}
			else if(isEmpty()){
				//when the queue is empty, and we add the first element, the front end and the rear end both become the same
				front =0;
				rear =0;
				arr[rear]=val;
			}
			else{
				rear++;
				arr[rear]=val;
			}		
		}
		
		int dequeue(){  //int bcoz we will be removing a value which has to be returned
			int x=0;
			if(isEmpty()){
				cout<<"CAN'T DEQUEUE, QUEUE IS EMPTY"<<endl;
				return 0;
			}
			else if(front == rear){
				//when only one item present in queue
				x= arr[front];
				arr[front]=0; //to go back
				rear=-1;
				front=-1;
				return x;
			}
			else{
				x=arr[front];
				arr[front]=0;
				front++;
				return x;
			}
		}
		
		int count(){
		if(rear==-1 && front==-1){
		}
			return 0;
			//bcoz count func gives count=1 even if queue is empty so this case is added
			}
		else{
		return rear-front+1;
			}
	}
		
		void display(){
			cout<<"All values in the queue are: "<<endl;
			for(int i=0; i<5;i++){
				cout<<arr[i]<<" ";
			}
			cout<<" "<<endl;
		}
		
		
};

int main(){
	Queue q1;
	int option,value,position;
	
	do{
		cout<<"Which operation would you like to perform? Select option number. Enter 0 to Exit. "<<endl;
		cout<<"1. enqueue()"<<endl;
		cout<<"2. dequeue()"<<endl;
		cout<<"3. isEmpty()"<<endl;
		cout<<"4. isFull()"<<endl;
		cout<<"5. count()"<<endl;
		cout<<"6. display()"<<endl;
		cout<<"7. Clear screen"<<endl;
		cout<<"0. Exit"<<endl<<endl;
		
		cin>>option;
		
		switch(option){
			case 0:
				break;
			case 1:
				cout<<"Enqueue operation \nEnter item to enqueue in the queue :"<<endl;
				cin>>value;
				q1.enqueue(value);
				break;
			case 2:
				cout<<"Dequeue operation \nDequeued value: "<<q1.dequeue()<<endl;
				break;
			case 3:
				if(q1.isEmpty()){
					cout<<"--QUEUE IS EMPTY--"<<endl;
				}
				else{
					cout<<"--QUEUE IS NOT EMPTY--"<<endl;
				}
				break;
			case 4:
				if(q1.isFull()){
					cout<<"--QUEUE IS FULL--"<<endl;
				}
				else{
					cout<<"--QUEUE IS NOT FULL--"<<endl;
				}
				break;
			case 5:
				cout<<"Count operation \nCount of items in the queue: "<<q1.count()<<endl;
				break;
			case 6:
				cout<<"--Display function called--"<<endl;
				q1.display();
				break;
			case 7:
				system("cls");
				break;
			default:
				cout<<"Enter proper option number!"<<endl;							
		}
		
	}while(option!=0);
	return 0;
}


//drawback: after every dequeue operation the values at left become zero but are still useless i.e if you check isFull it says true //solved using circular queue
