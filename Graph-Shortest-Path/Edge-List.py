import collections
import heapq

def Shortest_path(edge_list, source, destination):
    graph = collections.defaultdict(list)
    for l, r, c in edge_list:
        graph[l].append((c,r))
    queue, visited = [(0, source, [])], set()
    heapq.heapify(queue)
    while queue:
        (cost, node, path) = heapq.heappop(queue)
        if node not in visited:
            visited.add(node)
            path = path + [node]
            if node == destination:
                return (cost, path)
            for c, neighbour in graph[node]:
                if neighbour not in visited:
                    heapq.heappush(queue, (cost + c, neighbour, path))
    return float("inf")

if __name__ == "__main__":
    edge_list = [
(1, 2, 1),
(1, 12, 15),
(2, 3, 2),
(2, 11, 16),
(3, 4, 3),
(3, 10, 17),
(4, 5, 4),
(4, 10, 18),
(5, 6, 5),
(5, 8, 19),
(6, 7, 20),
(7, 8, 10),
(7, 17, 28),
(8, 9, 9),
(8, 16, 27),
(9, 10, 8),
(9, 15, 25),
(9, 16, 26),
(10, 11, 7),
(10, 14, 23),
(10, 15, 24),
(11, 12, 6),
(11, 13, 22),
(12, 13, 21),
(13, 14, 11),
(14, 15, 12),
(15, 16, 13),
(16, 17, 14)]

    print (edge_list)
    print("The shortest path between 1 -> 17 is: ")
    print (Shortest_path(edge_list, 1, 17))