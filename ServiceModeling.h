#ifndef ServiceModeling_h
#include <string>
#include <vector>
#include <unordered_map>
#include <filesystem>
#include <optional>

using namespace std;
struct api {
    //string filePath, 
    string name;
};

class Service {
    public:
        string filePath;
        vector<api> myapi;
        string Servicename;
        
        Service() = default;

        Service(string& path, string& name, vector<api>& myapis){
            filePath = path;
            myapi = myapis;
            Servicename = name;
        }
};



class Graph {
    public:
    private:
};
 
void extractNodes(const string& filePath, string service_identifier, string api_identifier);
#endif