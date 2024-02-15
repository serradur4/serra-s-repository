void product_vector_vet(const vector<vector<double>>& mat1, const vector<vector<double>>& mat2, vector<vector<double>>& mat3) {
	for (int i = 0; i < mat3.size(); i++) {
		for (int j = 0; j < mat3.at(i).size(); j++) {
			double sum_i_j = 0;
			for (int k = 0; k < mat2.size(); k++) {
				sum_i_j += mat1.at(i).at(k) * mat2.at(k).at(j);  // mat1.at(i).at(k) è come scrivere mat1[i][j] (solo che at ti restituisce il controllo) 
			}
			mat3.at(i).at(j) = sum_i_j;
		}
	}
}
void print_matrix_vet(const vector<vector<double>>& mat) {
	for (vector<double> row : mat) {    // for each che stampa gli elementi di una matrice 
		for (double item : row) {
			cout << item << " ";
		}
		cout << endl;
	} 
	cout << "\n\n";
} 

int main() {
	int matrix1[2][3] = { {2, 3, 4}, {1, 2, 3} };
	int matrix2[3][4] = { {1, 2, 3, 4}, {9, 0, 7, 7}, {2, 3, 9, 7} };
	int matrix3[2][4] = {};
	product_matrix(matrix1, matrix2, matrix3);
	print_matrix(matrix3, 2);
	

	vector<vector<double>> mat1 = { {1, 2, 3}, {7, 8, 9}, {0, 2, 3}, {1, 1, 2} }; // matrice di vector 4 x 3 
	vector<vector<double>> mat2 = { {0, 0, 9, 0, 9}, {2.3, 4, 5, 0, 8}, {1, 2, 4, 9, 7} };  // matrice di vector 3 x 5 
	vector<vector<double>> mat3 = { {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0}, {0, 0, 0, 0, 0} };  // matrice di vector 4 x 5

	product_vector_vet(mat1, mat2, mat3);
	print_matrix_vet(mat3);


}
