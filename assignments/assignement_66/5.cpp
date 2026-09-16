#include<iostream>
#include<map>
#include<vector>
#include<queue>
#include<string>
#include<set>

using namespace std;
int main(){
    map<string,vector<string>>graph;

    graph["Amit"] = {"Rahul", "Pooja"};
    graph["Rahul"] = {"Neha"};
    graph["Pooja"] = {"Kiran"};
    graph["Neha"] = {"Riya"};
    graph["Kiran"] = {"Riya"};

    string source="Amit";
    string destination="Riya";

    queue<string>q;
    set<string>visited;
    map<string,int>distance;

    q.push(source);
    visited.insert(source);
    distance[source]=0;

    while(!q.empty()){
        string current=q.front();
        q.pop();

        if(current==destination){
            cout<<"Minimum connections :"<<distance[current]<<endl;
            return 0;
        }

        for(string friendname:graph[current]){
            if(visited.find(friendname)==visited.end()){
                visited.insert(friendname);
                distance[friendname]=distance[current]+1;
                q.push(friendname);
            }
        }
    }
    cout<<"No connection found"<<endl;






    return 0;
}