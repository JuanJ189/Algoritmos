#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename G>
G Buscar(vector<G> &Lista, int menor, int mayor , G val) {
	while (menor <= mayor) {
		int mitad = (menor + mayor) / 2;
		if (Lista[mitad] == val) return mitad;
		if (Lista[mitad] < val) {
			menor = mitad + 1;
		}
		else {
			mayor = mitad - 1;
		}
	}
	return -1;
}
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> Numeros = { 3,5,10,15,21,50,100,120,432 };
	int valor = 10;
	auto k = Buscar(Numeros, 0, Numeros.size() - 1, valor);
	cout << k << endl;
	return 0;
}