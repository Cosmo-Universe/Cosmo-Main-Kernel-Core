#include <iostream>
#include <fstream>
#include <ctime>

class Logger {
private:
    std::ofstream logFile;

public:
    Logger(const std::string& filePath) {
        logFile.open(filePath, std::ios::app);
    }

    ~Logger() {
        logFile.close();
    }

    /**
     * @param message The message to save to the log file.
     * @param state The state of the message. 0 is success, 1 is error, 2 is warning, 3 is info, 4 is debug.
    */
    void save(const std::string& message, int state = 0) {
        logFile << state << message << std::endl;
    }

    void write(const std::string& message) {
        logFile << message;
    }

    std::string getDate() {
        std::time_t now = std::time(nullptr);
        char buffer[80];
        std::strftime(buffer, sizeof(buffer), "%Y-%m-%d %H:%M:%S", std::localtime(&now));
        return buffer;
    }

    std::string read() {
        std::string line;
        std::string content;
        while (std::getline(logFile, line)) {
            content += line + "\n";
        }
        return content;
    }

    void deleteLogFile() {
        logFile.close();
        std::remove(logFile.str().c_str());
    }


    void error(const std::string& errorMessage) {
        std::cerr << "Error: " << errorMessage << std::endl;
    }
};
