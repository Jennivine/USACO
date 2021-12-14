#include <bits/stdc++.h>
using namespace std;

#define INFINITY 1000000001

struct Cow {
    int time_stopped;
    int x, y;
    char dir;
};

int N;
Cow C[55];

int when_hits(int i, int j, int currTime) {
    Cow I = C[i], J = C[j];
    if (I.dir == J.dir) return INFINITY;
    if (I.dir == 'E') {
        swap(I.x, I.y); swap(J.x, J.y);
    }

    if (J.y <= I.y) return INFINITY;
    if (J.time_stopped == INFINITY) {
        if (

int main() {

