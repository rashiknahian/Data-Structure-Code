#ifndef GRAPH_H
#define GRAPH_H
#include<iostream>
#include<queue>
#include<stack>
#include<string.h>

using namespace std;
const int NULL_EDGE = 0;

template<class VertexType>
class GraphType {
  public:
    GraphType(int);
    ~GraphType();
    void MakeEmpty();
    bool IsEmpty() const;
    bool IsFull() const;
    void AddVertex(VertexType);
    void AddEdge(VertexType, VertexType, int);
    int WeightIs(VertexType, VertexType);
    void GetToVertices(VertexType, queue<VertexType>&);
    int IndexIs(VertexType) const;
    void ClearMarks();
    void MarkVertex(VertexType);
    bool IsMarked(VertexType) const;
private:
    int numVertices;
    int maxVertices;
    VertexType* vertices;
    int **edges;
    bool* marks;
};
#endif
#include"Graph.cpp"

