#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
template <typename J>
void Imprimir(vector <J> Lista);

template <typename J>
void BubleSort(vector <J> Lista);

template <typename J>
void Cambiar(J& v1, J& v2);

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> Numeros;
	vector<string> Nombres;
	string Letras = "akdfhdhdgafkhdh";

	return 0;
}
template <typename J>
void Cambiar(J& v1, J& v2) {
	swap(v1, v2);
}
template <typename J>
void BubleSort(vector<J> Lista) {
	for (int x = 0; x < Lista.size() - 1; x++) {
		for (int y = 0; y < Lista.size() - x - 1; y++) {
			if (Lista[y] > Lista[y - 1]) Cambiar(Lista[y], Lista[y + 1]);
		}
	}
}
template <typename J>
void Imprimir(vector <J> Lista) {
	for (x : Lista) {
		cout << x << " ";
	}
	cout << "\n";
}