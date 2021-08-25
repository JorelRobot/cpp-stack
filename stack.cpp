#include "stack.hpp"
#include <cstdio>

		stack::stack(int c){
			n = c;
			s = 0;

			list = new int[n];
		}
		//destructor

		void stack::push(int x){
			if (!full()) list[s++] = x;
		}

		int stack::pop(){

			if (!empty()) return list[--s];
			printf("Empty stack\n");

			return 0;
		}

		int stack::top(){
			if (!empty()) return list[s - 1];
			printf("Empty stack\n");

			return 0;
		}

		int stack::capacity(){ return n; }
		int stack::size(){ return s; }

		void stack::clear(){ }
		bool stack::empty(){return s == 0;}
		bool stack::full(){ return s == n;}
