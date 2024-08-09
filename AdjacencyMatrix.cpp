#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    int numVertices;
    vector<vector<int>> adjacencyMatrix;

public:
    Graph(int numVertices) {
        this->numVertices = numVertices;
        // Initialize the adjacency matrix with all zeros (no edges)
        adjacencyMatrix.resize(numVertices, vector<int>(numVertices, 0));
    }

    // Function to add an edge between two vertices
    void addEdge(int source, int destination) {
        if (source >= 0 && source < numVertices && destination >= 0 && destination < numVertices) {
            adjacencyMatrix[source][destination] = 1;
            adjacencyMatrix[destination][source] = 1; // For an undirected graph
        } else {
            cout << "Invalid vertex indices" << endl;
        }
    }

    // Function to print the adjacency matrix
    void printMatrix() {
        for (int i = 0; i < numVertices; i++) {
            for (int j = 0; j < numVertices; j++) {
                cout << adjacencyMatrix[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    int numVertices = 5;
    Graph graph(numVertices);

    graph.addEdge(0, 1);
    graph.addEdge(0, 2);
    graph.addEdge(1, 3);
    graph.addEdge(2, 4);

    cout << "Adjacency Matrix:" << endl;
    graph.printMatrix();

    return 0;
}
