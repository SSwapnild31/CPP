#include <iostream>

class base
{
	public:
		base() : data(new int) {}
		~base() { delete data; }

		base(int x) { data = new int(x); }

		base(const base& obj){
			std::cout<<"copy constructor\n";
			data = new int(*obj.data);
		}
		
		base& operator = (const base& obj){
			std::cout<<"copy assignment\n";
			if(this == &obj)
				return *this;

			delete data;
			data = new int(*obj.data);  
			return *this;
		}
		
		void set_data(){
			std::cout <<"Enter data : ";
			std::cin >> *data; 
		}
		void get_data(){
			std::cout <<"data : "<< *data <<"\n";
		}
	private:
		int* data;
};

int main()
{
	base b1;
	b1.set_data();
	b1.get_data();

	base b2 = b1;
	b1.get_data();

	base b3(b2);
	b3.get_data();

	base b4;
	b4 = b3;
	b4.get_data();
	
	return 0;
}
