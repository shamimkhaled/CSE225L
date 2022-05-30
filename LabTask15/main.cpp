#include <iostream>
#include "graphtype.cpp"
using namespace std;

int main()
{

    GraphType<char> graphtype;
    graphtype.AddVertex('A');
    graphtype.AddVertex('B');
    graphtype.AddVertex('C');
    graphtype.AddVertex('D');
    graphtype.AddVertex('E');
    graphtype.AddVertex('F');
    graphtype.AddVertex('G');
    graphtype.AddVertex('H');

    graphtype.AddEdge('A','B',1);
    graphtype.AddEdge('A','C',1);
    graphtype.AddEdge('A','D',1);

    graphtype.AddEdge('B','A',1);
    graphtype.AddEdge('D','A',1);
    graphtype.AddEdge('D','E',1);

    graphtype.AddEdge('D','G',1);
    graphtype.AddEdge('G','F',1);
    graphtype.AddEdge('F','H',1);
    graphtype.AddEdge('H','E',1);

    cout << graphtype.OutDegree('D') <<endl;
    if(graphtype.FoundEdge('A','D'))
        cout << "There is an edge." << endl;

    if(!graphtype.FoundEdge('B','D'))
        cout << "There is no edge." << endl;

    graphtype.DepthFirstSearch('B','E');
    graphtype.DepthFirstSearch('E','B');
    graphtype.BreadthFirstSearch('B','E');
    graphtype.BreadthFirstSearch('E','B');

    cout << graphtype.OutDegree('B')+1;

    return 0;
}
