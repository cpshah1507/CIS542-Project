#include <vector>
#include <map>

using namespace std;

struct Plan{
  unsigned cost;      // For infinity the cost is: INF = 9000. It is taken as a constant value for a high value of cost.                                                                                   
  unsigned direction; // Direction is unsigned integer which denotes direction as degrees*/
};

typedef vector< map <unsigned,Plan> > nodeMap;

// Graph nodes are set according to ZigBee modules places in lab for the project
class Graph
{	
    public:
    nodeMap nodeGraph;
    void setNodes()
    {
    	Plan p;
    		
        map<unsigned,Plan> temp;
        
        /* For Node 1 */
        // Neighbour is node 3
        p.cost = 1;
        p.direction = 'S';
        temp.insert(make_pair(3-1,p));
        
        nodeGraph.push_back(temp);
        
        /* For Node 2 */
        temp.clear();
        p.cost = 3;
        p.direction = 'E';
        temp.insert(make_pair(3-1,p));
        
        nodeGraph.push_back(temp);
        
        /* For Node 3 */
        temp.clear();
        p.cost = 1;
        p.direction = 'N';
        temp.insert(make_pair(1-1,p));
        
        p.cost = 3;
        p.direction = 'W';
        temp.insert(make_pair(2-1,p));
        
        p.cost = 5;
        p.direction = 'E';
        temp.insert(make_pair(4-1,p));
        
        p.cost = 2;
        p.direction = 'S';
        temp.insert(make_pair(7-1,p));
        
        nodeGraph.push_back(temp);
        
        /* For Node 4 */
        temp.clear();
        p.cost = 5;
        p.direction = 'W';
        temp.insert(make_pair(3-1,p));
        
        temp.clear();
        p.cost = 7;
        p.direction = 'S';
        temp.insert(make_pair(5-1,p));
        
        nodeGraph.push_back(temp);
        
        /* For Node 5 */
        temp.clear();
        p.cost = 7;
        p.direction = 'N';
        temp.insert(make_pair(4-1,p));
        
        p.cost = 2;
        p.direction = 'S';
        temp.insert(make_pair(6-1,p));
        
        nodeGraph.push_back(temp);
        
        /* For Node 6 */
        temp.clear();
        p.cost = 2;
        p.direction = 'N';
        temp.insert(make_pair(5-1,p));

        p.cost = 3;
        p.direction = 'W';
        temp.insert(make_pair(7-1,p));
        nodeGraph.push_back(temp);
        
        /* For Node 7 */
        temp.clear();
        p.cost = 2;
        p.direction = 'N';
        temp.insert(make_pair(3-1,p));
        
        p.cost = 3;
        p.direction = 'E';
        temp.insert(make_pair(6-1,p));
        nodeGraph.push_back(temp);
	}
};