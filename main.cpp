#include "ServiceModeling.h"
#include <vector>
#include <string>
#include <unordered_map>
#include <filesystem>
#include <fstream>
#include <sstream>
#include <iostream>

int main(int argc, char *argv[]){
    string file_path = "/Users/andreiionov/Documents/GitHub/ServiceModeling/ServiceModeling.h";
      
    extractNodes(file_path, "struct", "");


    return 0;

}