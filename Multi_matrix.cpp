#include <iostream>
#include <vector>
using namespace std;
void  multi_matrix(const vector<vector<double>>& mat1, const vector<vector<double>>& mat2, vector<vector<double>>& mat3) {
	for (int i = 0; i < mat3.size(); i++) {
		for (int j = 0; j < mat3.at(i).size(); j++) {
			double sum_i_j = 0;
			for (int k = 0; k < mat2.size(); k++) {
				sum_i_j += mat1.at(i).at(k) * mat2.at(k).at(j);  
			}
			mat3.at(i).at(j) = sum_i_j;
		}
	}
}
void print_multi_matrix(const vector<vector<double>>& mat) {
	for (vector<double> row : mat) {    		// for each which prints the elements of a matrix
		for (double item : row) {
			cout << item << " ";
		}
		cout << endl;
	} 
	cout << "\n\n";
} 

int main(int argc, char* argv []) {
	vector<vector<double>> mat1 = { {1, 2, 3}, {7, 8, 9}, {0, 2, 3}, {1, 1, 2} }; 			// matrix of vector 4 x 3 
	vector<vector<double>> mat2 = { {0, 0, 9, 0, 9}, {2.3, 4, 5, 0, 8}, {1, 2, 4, 9, 7} };  			// matrix of vector 3 x 5 
	vector<vector<double>> mat3 = { {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0} };  				// matrix of vector4 x 5

	multi_matrix(mat1, mat2, mat3);
	print_multi_matrix(mat3);


}
