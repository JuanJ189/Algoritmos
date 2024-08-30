#include<iostream>
#include<vector>
#include <algorithm>
#define H 4

using namespace std;
// funciones
bool isSafe(int matriz[H][H], int x, int y);
bool solveMazeUtil(int matriz[H][H], int x, int y, int matriz2[H][H]);
bool solveMaze(int matriz[H][H]);
int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int matriz[H][H] = {
		{1,0,0,0},
		{1,1,0,1},
		{0,1,0,0},
		{1,1,1,1}
	};
	solveMaze(matriz);
	return 0;
}

bool isSafe(int matriz[H][H], int x, int y) {
	return x >= 0 && x < H && y >= 0 && y < H && matriz[x][y] == 1;
}
bool solveMazeUtil(int matriz[H][H], int x, int y, int matriz2[H][H]) {
	if (x == H - 1 && y == H - 1 && matriz[x][y] == 1) {
		matriz2[x][y] = 1;
		return true;
	}
	if (isSafe(matriz, x, y)) {
		if (matriz2[x][y] == 1) return false;

		matriz2[x][y] = 1;

		if (solveMazeUtil(matriz, x + 1, y, matriz2)) return true;

		if (solveMazeUtil(matriz, x, y + 1, matriz2)) return true;

		if (solveMazeUtil(matriz, x - 1, y, matriz2)) return true;

		if (solveMazeUtil(matriz, x, y - 1, matriz2)) return true;

		matriz[x][y] = 0;

		return false;
	}
}
bool solveMaze(int matriz[H][H]) {
	int matriz2[H][H] = {
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0},
		{0,0,0,0}
	};

	if (!solveMazeUtil(matriz, 0, 0, matriz2)) {
		cout << "No existe solucion" << endl;
		return false;
	}
	for (int i = 0; i < H; i++) {
		for (int j = 0; j < H; j++) {
			cout << matriz2[i][j] << " ";
		}
		cout << endl;
	}
	return true;
}


