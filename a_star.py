# importing helper classes
from graph import Graph
from custom_queue import PriorityQueue
import time

def a_star_search(graph, start_node, goal_node):
    """
    The function should take in the graph defined along with the
    start and goal nodes and print out the shorted path according 
    to the A* Search Algorithm.

    NOTE: print the path and cost

    :params graph: (Graph) defined graph
    :params start_node: (String) starting node from graph
    :params goal_node: (String) goal node from the graph

    :return : None
    """

    # write your code below

    pq = PriorityQueue()

    visited = {}

    pq.insert([start_node, 0], graph.get_h(start_node))

    lowest_cost = 10**8
    shortest_path = ""
    strt = time.time()

    while not pq.is_empty():
        _, item = pq.remove()

        path = item[0]
        cost = item[1]
        print(item)
        item = item[0][-1]

        if item == goal_node:
            if lowest_cost > cost:
                lowest_cost = cost
                shortest_path = path
                end = time.time()
                break

        if item not in visited:
            for neighbour in graph.neighbours(item):
                cost_till_node = cost + graph.get_cost(item, neighbour)
                pq.insert([path + neighbour, cost_till_node], cost_till_node + graph.get_h(neighbour))

            visited[item] = 1
    final = end-strt
    print(f"Shortest Path: {list(shortest_path)}\nCost: {lowest_cost}\n")
    print("time: ", final)

if __name__ == "__main__":

    graph = Graph()

    # setting up nodes and neighbours
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

    # setting up heuristics
    graph.heuristics = {
        'A': 10,
        'B': 8,
        'C': 5,
        'D': 7,
        'E': 3,
        'F': 6,
        'G': 5,
        'H': 3,
        'I': 1,
        'J': 0

    }

    a_star_search(graph, 'A', 'J')
