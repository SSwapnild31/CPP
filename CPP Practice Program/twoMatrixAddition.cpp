#include<iostream>
using namespace std;

template<class T>
class matrix
{
	T **mat;
	int rows,cols;
public :
	matrix() : mat(nullptr), rows(0), cols(0) { }

	matrix(int r, int c) : rows(r), cols(c) {
		mat = new T*[rows];

		for(int i=0; i<rows; i++){
			mat[i] = new T[cols];
		}
	}
	
	matrix(const matrix& m) : rows(m.rows), cols(m.cols){
		mat = new T*[rows];

		for(int i=0; i<rows; i++){
			mat[i] = new T[cols];
			for(int j=0; j<cols; j++){
				mat[i][j] = m.mat[i][j];
			}
		}
	}
	
	matrix& operator = (const matrix &m){
		
		for(int i=0; i<rows; i++){
			delete[] mat[i];
		}
		delete[] mat;

		mat = new T*[rows];
		for(int i=0; i<rows; i++){
			mat[i] = new T[cols];
			for(int j=0; j<cols; j++){
				mat[i][j] = m.mat[i][j];
			}
		}
		
		return *this;
	}

	~matrix(){
		for(int i=0; i<rows; i++){
			delete[] mat[i];
		}

		delete[] mat;
		mat = nullptr;
		cout <<"memory deallocated"<< endl;
	}


	matrix operator + (const matrix& m) const{
		matrix temp(rows, cols);
		for(int i=0; i<rows; i++){
			for(int j=0; j<cols; j++){
				temp.mat[i][j] = mat[i][j] + m.mat[i][j];
			}
		}
		return temp;
	}
	
	void setData(){
		cout <<"Enter matrix ele's"<< endl;
		for(int i=0;i<rows;i++){
			for(int j=0;j<cols;j++){
				cin >> mat[i][j];
			}
		}
	}

	void getData(){
		cout <<"matrix data"<< endl;
		for(int i=0; i<rows; i++){
			for(int j=0; j<cols; j++){
				cout << mat[i][j] << " ";
			}
			cout << endl;
		}
	}
};

int main()
{
	int r, c;
	cout <<"Enter row & column"<< endl;
	cin >> r >> c;

	matrix<int> m1(r,c),m2(r,c);
	
	m1.setData();
	m2.setData();
	
	//m1.getData();
	//m2.getData();
	
	matrix<int> m3(r,c);
	
	m3 = m1 + m2;
	cout <<"matrix result ";
	m3.getData();

	return 0;
}
