import heapq
import numpy as np

def shortest_path(adj_matrix, source, destination):
    queue, visited = [(0, source, [])], set()
    heapq.heapify(queue)
    while queue:
        (cost, node, path) = heapq.heappop(queue)
        if node not in visited:
            visited.add(node)
            path = path + [node]
            if node == destination:
                return (cost, path)
            for neighbour, weight in enumerate(adj_matrix[node]):
                if weight > 0 and neighbour not in visited:
                    heapq.heappush(queue, (cost + weight, neighbour, path))
    return float("inf")

adj_matrix = np.zeros((18, 18))
adj_matrix[1][2] = 1
adj_matrix[1][12] = 15
adj_matrix[2][3] = 2
adj_matrix[2][11] = 16
adj_matrix[3][4] = 3
adj_matrix[3][10] = 17
adj_matrix[4][5] = 4
adj_matrix[4][10] = 18
adj_matrix[5][6] = 5
adj_matrix[5][8] = 19
adj_matrix[6][7] = 20
adj_matrix[7][8] = 10
adj_matrix[7][17] = 28
adj_matrix[8][9] = 9
adj_matrix[8][16] = 27
adj_matrix[9][10] = 8
adj_matrix[9][15] = 25
adj_matrix[9][16] = 26
adj_matrix[10][11] = 7
adj_matrix[10][14] = 23
adj_matrix[10][15] = 24
adj_matrix[11][12] = 6
adj_matrix[11][13] = 22
adj_matrix[12][13] = 21
adj_matrix[13][14] = 11
adj_matrix[14][15] = 12
adj_matrix[15][16] = 13
adj_matrix[16][17] = 14

print(adj_matrix)
print ("The shortest path between 1 -> 17 is: ")
print (shortest_path(adj_matrix, 1, 17))

