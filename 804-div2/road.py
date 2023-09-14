n, m = map(int, input().split())

parent = [i for i in range(n+1)]
size = [1 for i in range(n+1)]
max_size = 1
num_components = n

def find(x):
    if parent[x] != x:
        parent[x] = find(parent[x])
    return parent[x]

for i in range(m):
    a, b = map(int, input().split())
    pa, pb = find(a), find(b)
    if pa != pb:
        if size[pa] < size[pb]:
            pa, pb = pb, pa
        parent[pb] = pa
        size[pa] += size[pb]
        max_size = max(max_size, size[pa])
        num_components -= 1
    print(num_components, max_size)
