//Ordenamiento Quick Sort
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
//funciones
template <typename S>
void Imprimir(vector<S>& Lista);

template <typename G>
void QuickSort(vector<G> &Lista,int menor, int mayor);

template <typename D>
int Partir(vector<D>& Lista, int menor, int mayor);

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	vector<int> Numeros = { 7,1,2,3,4,5,6,2,3,5,6 };
	Imprimir(Numeros);
	QuickSort(Numeros, 0, Numeros.size() - 1);
	Imprimir(Numeros);
	return 0;
}
template <typename D>
int Partir(vector<D>& Lista, int menor, int mayor) {
	auto pivote = Lista[mayor];
	int i = menor - 1;
	for (int x = menor; x < mayor; x++) {
		if (Lista[x] <= pivote) {
			i++;
			swap(Lista[i], Lista[x]);
		}
	}
	swap(Lista[i + 1], Lista[mayor]);
	return i + 1;
}
template <typename G>
void QuickSort(vector<G> &Lista, int menor, int mayor) {
	if (menor < mayor) {
		int pivote = Partir(Lista, menor, mayor);

		QuickSort(Lista, menor, pivote - 1);
		QuickSort(Lista, pivote + 1, mayor);
	}
}
template <typename S>
void Imprimir(vector<S>& Lista) {
	for (auto x : Lista) {
		cout << x << " "; 
	}
	cout << "\n";
}