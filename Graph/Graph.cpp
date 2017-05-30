#ifndef GRAPH_CPP
#define GRAPH_CPP
#include"Graph.h"

template<class VertexType>
GraphType<VertexType>::GraphType(int maxV)
{
 numVertices = 0;
 maxVertices = maxV;

 vertices = new VertexType[maxV];

 edges = new int*[maxV];
 for(int i = 0; i < maxV; i++)
   edges[i] = new int[maxV];

 marks = new bool[maxV];
}


template<class VertexType>
GraphType<VertexType>::~GraphType()
{
 delete [] vertices;

 for(int i = 0; i < maxVertices; i++)
   delete [] edges[i];
 delete [] edges;

 delete [] marks;
}


template<class VertexType>
int GraphType<VertexType>:: IndexIs(VertexType vertex) const
{
    for(int i=0;i<numVertices;i++)
        if(vertices[i]==vertex)
        return i;
    return -1;
}


template<class VertexType>
bool GraphType<VertexType> :: IsMarked(VertexType vertex) const
{
    int ind = IndexIs(vertex);
    return marks[ind];
}


template<class VertexType>
void GraphType<VertexType> :: ClearMarks()
{
    for(int i = 0; i < numVertices; i++)
        marks[i] = false;
}


template<class VertexType>
void GraphType<VertexType> :: MarkVertex(VertexType vertex)
{
    int ind = IndexIs(vertex);
    marks[ind] = true;
}


template<class VertexType>
bool GraphType<VertexType> :: IsEmpty() const
{
    return (numVertices==0);
}


template<class VertexType>
bool GraphType<VertexType> :: IsFull() const
{
    return (numVertices==maxVertices);
}


template<class VertexType>
void GraphType<VertexType>::AddVertex(VertexType vertex)
{
 vertices[numVertices] = vertex;

 for(int index = 0; index < numVertices; index++) {
    edges[numVertices][index] = NULL_EDGE;
    edges[index][numVertices] = NULL_EDGE;
 }


 numVertices++;
}


template<class VertexType>
void GraphType<VertexType>::AddEdge(VertexType fromVertex, VertexType toVertex, int weight)
{
 int row;
 int col;

 row = IndexIs(fromVertex);
 col = IndexIs(toVertex);
 edges[row][col] = weight;
}


template<class VertexType>
int GraphType<VertexType>::WeightIs(VertexType fromVertex, VertexType toVertex)
{
 int row;
 int col;

 row = IndexIs(fromVertex);
 col = IndexIs(toVertex);
 return edges[row][col];
}


template<class VertexType>
void GraphType<VertexType>::GetToVertices(VertexType vertex,queue<VertexType>& adjvertexQ)
{
 int fromIndex;
 int toIndex;

 fromIndex = IndexIs(vertex);
 for(toIndex = 0; toIndex < numVertices; toIndex++)
   if(edges[fromIndex][toIndex] != NULL_EDGE)
     adjvertexQ.push(vertices[toIndex]);
}
#endif

