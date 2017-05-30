#include"Graph.h"
template<class VertexType>
void DFS(GraphType<VertexType>&graph, VertexType startVertex, VertexType endVertex );
template<class VertexType>
void BFS(GraphType<VertexType>&graph, VertexType startVertex, VertexType endVertex );

int main()
{

    GraphType<string> it(15);

    cout << (it.IsEmpty()? "True" : "False") << endl;



    string x,y;
    string a = "A";
    it.AddVertex(a);
    a = "B";
    it.AddVertex(a);
    a ="C";
    it.AddVertex(a);
    a = "D";
    it.AddVertex(a);
    a = "E";
    it.AddVertex(a);
    a = "F";
    it.AddVertex(a);
    a = "G";
    it.AddVertex(a);
    a = "H";
    it.AddVertex(a);
    a = "I";
    it.AddVertex(a);
    a = "J";
    it.AddVertex(a);


    cout << (it.IsEmpty()? "True" : "False") << endl;
    cout << (it.IsFull()? "True" : "False") << endl;



    it.AddEdge("A","B",1);
    it.AddEdge("B","C",2);
    it.AddEdge("C","D",3);
    it.AddEdge("B","D",1);
    it.AddEdge("D","C",5);
    it.AddEdge("A","E",7);
    it.AddEdge("E","D",3);
    it.AddEdge("D","F",10);
    it.AddEdge("B","G",9);
    it.AddEdge("G","J",13);
    it.AddEdge("J","I",6);
    it.AddEdge("H","F",7);
    it.AddEdge("H","E",5);


    x = "G";
    y = "I";
    BFS(it,x,y);

    x = "E";
    y = "F";
    BFS(it,x,y);

    x = "A";
    y = "H";
    BFS(it,x,y);

    x = "H";
    y = "B";
    BFS(it,x,y);

    x = "B";
    y = "H";
    BFS(it,x,y);

    x = "F";
    y = "C";
    BFS(it,x,y);

    cout << endl;

    it.AddEdge("F","H",3);



    x = "A";
    y = "H";
    DFS(it,x,y);

    x = "H";
    y = "B";
    DFS(it,x,y);

    x = "B";
    y = "H";
    DFS(it,x,y);

    x = "F";
    y = "C";
    DFS(it,x,y);



    return 0;
}
template<class VertexType>
void DFS(GraphType<VertexType>&graph, VertexType startVertex, VertexType endVertex )
{
    stack<VertexType> stack;
    queue<VertexType> vertexQ;
         bool found = false;

         VertexType vertex;
         VertexType item;

         graph.ClearMarks();

         stack.push(startVertex);

         do {
             vertex = stack.top();
           stack.pop();
           if(vertex == endVertex){
             found = true;
             }

           else if(!graph.IsMarked(vertex)) {
               graph.MarkVertex(vertex);
               graph.GetToVertices(vertex, vertexQ);

                    while(!vertexQ.empty()) {
                        item = vertexQ.front();
                         vertexQ.pop();
                         if(!graph.IsMarked(item))
                           stack.push(item);
                    }
             }

         }while(!stack.empty() && !found);

            if(!found)
                cout << "0 " ;
                else
                cout << "1 " ;
}


template<class VertexType>
void BFS(GraphType<VertexType>&graph, VertexType startVertex, VertexType endVertex )
{
    queue<VertexType> queueQ;
    queue<VertexType> vertexQ;
    bool found = false;

         VertexType vertex;
         VertexType item;
         graph.ClearMarks();

         queueQ.push(startVertex);

         do
         {
             vertex=queueQ.front();
             queueQ.pop();

             if(vertex == endVertex){
             found = true;
             }
             else if(!graph.IsMarked(vertex)) {
               graph.MarkVertex(vertex);
               graph.GetToVertices(vertex, vertexQ);

                    while(!vertexQ.empty()) {
                        item = vertexQ.front();
                         vertexQ.pop();
                         if(!graph.IsMarked(item))
                           queueQ.push(item);
                    }
             }
         }while(!queueQ.empty() && !found);

            if(!found)
                cout << "0 " ;
                else
                cout << "1 " ;

}
