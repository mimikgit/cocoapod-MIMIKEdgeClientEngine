#include <string>
#include <map>

class EdgeService {
public:
    static int start(int port, const std::string& nodeId, const std::string& nodeName,
        const std::string& license,
        const std::string& workingPath,
        const std::map< std::string, std::string>& edgeEnv);
    
    static void stop();
    
    static int getStatus();
};
