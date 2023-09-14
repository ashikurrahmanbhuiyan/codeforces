#include <iostream>
#include <vector>

using namespace std;

class DSU {
public:
    DSU(int n) {
        parent.resize(n + 1);
        size.resize(n + 1);
        for (int i = 1; i <= n; i++) {
            parent[i] = i;
            size[i] = 1;
        }
    }

    int find(int x) {
        if (parent[x] == x) return x;
        return parent[x] = find(parent[x]);
    }

    void unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px != py) {
            if (size[px] < size[py]) swap(px, py);
            parent[py] = px;
            size[px] += size[py];
        }
    }

    int get_size(int x) {
        return size[find(x)];
    }

private:
    vector<int> parent, size;
};

int main() {
    int n, m;
    cin >> n >> m;

    DSU dsu(n);

    int components = n, max_component_size = 1;
    for (int i = 1; i <= m; i++) {
        int a, b;
        cin >> a >> b;

        int pa = dsu.find(a), pb = dsu.find(b);
        if (pa != pb) {
            dsu.unite(pa, pb);
            components--;
            int new_size = dsu.get_size(pa);
            if (new_size > max_component_size) max_component_size = new_size;
        }

        cout << components << " " << max_component_size << "\n";
    }

    return 0;
}
