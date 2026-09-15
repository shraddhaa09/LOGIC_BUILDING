#include<iostream>
#include<map>
#include<vector>
#include<queue>
using namespace std;

int main(){
    map<char,vector<char>>graph;
    map<char, int>indegree;

    graph['A'].push_back('C');
    graph['B'].push_back('C');
    graph['C'].push_back('D');
    graph['B'].push_back('E');
    graph['D'].push_back('F');
    graph['E'].push_back('F');

    indegree['A']=0;
    indegree['B']=0;
    indegree['C']=0;
    indegree['D']=0;
    indegree['E']=0;
    indegree['F']=0;

    for(auto x:graph){
        for(char next:x.second){
            indegree[next]++;
        }
    }

    queue<char>q;

    for(auto x:indegree){
        if(x.second==0)
        {
            q.push(x.first);
        }
    }

    while (!q.empty())
    {
        char current=q.front();
        q.pop();
        cout<<current<<" ";

        for(char next:graph[current]){
            indegree[next]--;

            if(indegree[next]==0){
                q.push(next);
            }
        }
    }

    return 0;
}