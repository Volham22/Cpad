#pragma once

#include <map>
#include <string>

#include "folder.hh"
#include "singleton.hh"

class Convertor : public Singleton<Convertor>
{
public:
    std::map<std::string, Folder> read(std::string& path);
    void write(std::map<std::string, Folder>& map, std::string& path);
    void add_command(std::map<std::string, Folder>& map, std::string& key, std::string& command);
    void add_folder(std::map<std::string, Folder>& map, std::string& key, std::string& folder_name);
    void remove_command(std::map<std::string, Folder>& map, std::string& key, size_t command);
    void remove_folder(std::map<std::string, Folder>& map, std::string& key);
    void reset_folder(std::map<std::string, Folder>& map, std::string& key);
    void reset_all(std::map<std::string, Folder>& map);
};