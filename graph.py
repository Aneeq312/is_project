
class Graph:
    """
    The purpose of the class is to provide a clean way to define a graph for
    a searching algorithm:
    """

    def __init__(self):
        self.edges = {} # dictionary of edges NODE: NEIGHBOURS
        self.weights = {} # dictionary of NODES and their COSTS 
        
        # add a dictionary to store heuristics for nodes
        self.heuristics = {}

    def neighbours(self, node):
        """
        The function returns the neighbour of the node passed to it,
        which is essentially the value of the key in the edges dictionary.

        :params node: (string) a node in the graph

        :return: (list) neighbouring nodes
        """

        return self.edges[node]

    def get_cost(self, from_node, to_node):
        """
        Gets the cost of a connection between adjacent nodes.

        :params from_node: (string) starting node
        :params to_node: (string) ending node

        :return: (int) 
        """
        
        if self.weights.get(from_node + to_node):
            return self.weights.get(from_node + to_node)
        else:
            return self.weights.get(to_node + from_node)

    def get_h(self, node):
        """
        This function will give our the heuristic from the node to goal.

        :params node: (String) current node / any node

        :return: (int) heuristic to the goal
        """

        # write your code below 
        return self.heuristics[node]


if __name__ == "__main__":
    # testing out the graph class
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

    # test functions from the class
    
