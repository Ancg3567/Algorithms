import collections
def bfs(graph, r):
    visited,queue = set(),collections.deque([r])
    visited.add(r)
    while queue:
        vertex = queue.popleft()
        print(str(vertex) + " ", end="")

        for neighbour in graph[vertex]:
            if neighbour not in visited:
                visited.add(neighbour)
                queue.append(neighbour)

if __name__ == '__main__':
    graph = {0: [1, 2], 1: [2], 2: [3], 3: [1, 2]}
    print("Breadth First Traversal: ")
    bfs(graph, 0)
