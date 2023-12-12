//  m-3 run


// C++ code to reverse a
// stack using recursion
#include <bits/stdc++.h>
using namespace std;

// Below is a recursive function
// that inserts an element
// at the bottom of a stack.
void insert_at_bottom(stack<int>& st, int x)
{

	if (st.size() == 0) {
		st.push(x);
	}
	else {

		// All items are held in Function Call
		// Stack until we reach end of the stack
		// When the stack becomes empty, the
		// st.size() becomes 0, the above if
		// part is executed and the item is
		// inserted at the bottom

		int a = st.top();
		st.pop();
		insert_at_bottom(st, x);

		// push allthe items held in
		// Function Call Stack
		// once the item is inserted
		// at the bottom
		st.push(a);
	}
}

// Below is the function that
// reverses the given stack using
// insert_at_bottom()
void reverse(stack<int>& st)
{
	if (st.size() > 0) {

		// Hold all items in Function
		// Call Stack until we
		// reach end of the stack
		int x = st.top();
		st.pop();
		reverse(st);

		// Insert all the items held
		// in Function Call Stack
		// one by one from the bottom
		// to top. Every item is
		// inserted at the bottom
		insert_at_bottom(st, x);
	}
	return;
}

// Driver Code
int main()
{
	stack<int> st, st2;
	// push elements into
	// the stack
	for (int i = 1; i <= 4; i++) {
		st.push(i);
	}

	st2 = st;

	cout << "Original Stack" << endl;
	// printing the stack after reversal
	while (!st2.empty()) {
		cout << st2.top() << " ";
		st2.pop();
	}
	cout<<endl;

	// function to reverse
	// the stack
	reverse(st);
	cout << "Reversed Stack" << endl;
	// printing the stack after reversal
	while (!st.empty()) {
		cout << st.top() << " ";
		st.pop();
	}
	return 0;
}






//  m-2 run
// C++ program to reverse a stack
// by using an extra stack
#include <bits/stdc++.h>
using namespace std;

// Function to transfer elements of
// the stack s1 to the stack s2
void transfer(stack<int>& s1,
			stack<int>& s2, int n)
{
	for (int i = 0; i < n; i++) {

		// Store the top element
		// in a temporary variable
		int temp = s1.top();

		// Pop out of the stack
		s1.pop();

		// Push it into s2
		s2.push(temp);
	}
}

// Function to reverse a stack using another stack
void reverse_stack_by_using_extra_stack(stack<int>& s,
										int n)
{
	stack<int> s2;

	for (int i = 0; i < n; i++) {

		// Store the top element
		// of the given stack
		int x = s.top();

		// Pop that element
		// out of the stack
		s.pop();

		transfer(s, s2, n - i - 1);
		s.push(x);
		transfer(s2, s, n - i - 1);
	}
}

// Driver Code
int main()
{
	int n = 5;

	stack<int> s;
	s.push(1);
	s.push(2);
	s.push(3);
	s.push(4);
	s.push(5);

	reverse_stack_by_using_extra_stack(s, n);

	for (int i = 0; i < n; i++) {
		cout << s.top() << " ";
		s.pop();
	}
	return 0;
}





//  m-1 wrong

#include<bits/stdc++.h>
using namespace std;

void insertAtBotton(stack<int> st,int ele){
    if(st.empty()){
        st.push(ele);
        return ;
    }
    int topEle=st.top();
    st.pop();
    insertAtBotton(st,ele);
    st.push(topEle);
 
}
void reverse(stack<int> s){
    if(s.empty()){
        return ;
    }
    int ele=s.top();
    s.pop();
    reverse(s);
    insertAtBotton(s,ele);
   
}

int main(){
   stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

   cout<<"reverse "<<endl;
   reverse(s);

   while(!s.empty()){
    cout<<s.top()<<" ";
    s.pop();
   }

}