#include "ServiceModeling.h"
#include <vector>
#include <string>
#include <unordered_map>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;

void extractNodes(const string& filePath, string service_identifier, string api_identifier){
    
    vector<Service> Services;
    ifstream inputFile(filePath);

    if (!inputFile){
        cerr << "Error opening file: " << filePath;
        return;
    }

    string line;
    int ServNumber = 0;
    while (getline(inputFile, line)){
        string name;
        for (int i = 0; i < line.size(); i++){
            while(line[i] == ' '){
                i++;
            }
            if (service_identifier == line.substr(i, service_identifier.size())){
                i = i + service_identifier.size();
                while(line[i] == ' '){
                i++;
                }
                int s = i;
                while(line[i] != ' ' && line[i] != '{'){
                    i++;
                }
                name = line.substr(s, i-s);
                Service serv;
                serv.Servicename = name;
                Services.push_back(serv);
                ServNumber++;
                cout << name << "\n";
            }
            if (api_identifier == line.substr(i, api_identifier.size())){
                i = i + api_identifier.size();
                while(line[i] == ' '){
                i++;
                }
                int s = i;
                while(line[i] != ' ' && line[i] != '{'){
                    i++;
                }
                name = line.substr(s, i-s);
                api n;
                n.name = name;
                Services[ServNumber].myapi.push_back(n);
                cout << name << "\n";
            }

        }
    }
    inputFile.close();
}
