# importing helper classes
from graph import Graph
from custom_queue import PriorityQueue
import time

def uniform_cost_search(graph, start_node, goal_node):
    """
    The function should take in the graph defined along with the
    start and goal nodes and print out the shorted path according 
    to the Uniform Cost Search Algorithm.

    NOTE: print the path and cost

    :params graph: (Graph) defined graph
    :params start_node: (String) starting node from graph
    :params goal_node: (String) goal node from the graph

    :return : None
    """

    # write your code below

    pq = PriorityQueue()

    visited = {}

    pq.insert(start_node, 0)

    lowest_cost = 10**8
    shortest_path = ""
    strt = time.time()

    while not pq.is_empty():
        cost, item = pq.remove()

        path = item
        print(item)
        item = item[-1]

        if item == goal_node:
            if lowest_cost > cost:
                lowest_cost = cost
                shortest_path = path
                end = time.time()
                break

        if item not in visited:
            for neighbour in graph.neighbours(item):
                pq.insert(path + neighbour, (cost + graph.get_cost(item, neighbour)))

            visited[item] = 1
    final = end-strt
    print(f"Shortest Path: {list(shortest_path)}\nCost: {lowest_cost}\n")
    print("time: ", final)

if __name__ == "__main__":

    # Defining Graph
    graph = Graph()

    graph.edges = {
        'A': ['B', 'F'],
        'B': ['C', 'D'],
        'C': ['D','E'],
        'D': ['E'],
        'E': ['I','J'],
        'F': ['G', 'H'],
        'G': ['I'],
        'H': ['I'],
        'I': ['J']
    }

    # setting up connection costs
    graph.weights = {
        'AB': 6, 'AF': 3,
        'BC': 3, 'BD': 2,
        'CD': 1,
        'CE': 5, 'DE': 8,
        'EI': 5,
        'EJ': 5, 'FG': 1,
        'FH': 7, 'GI': 3,
        'HI': 2, 'IJ':3
        }

    uniform_cost_search(graph, 'A', 'J') 
