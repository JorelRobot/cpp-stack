# ifndef stack_hpp
# define stack_hpp

class stack{
	
	int n; //capacidad
	int s; // tamaño
	
	int *list;
	
	public:
		stack(int);
		//destructor
		
		void push(int);
		int pop();
		int top();
		
		int capacity();
		int size();
		
		void clear();
		bool empty();
		bool full();
};

# endif /* stack_hpp */
