/*Implementation of Queue STL operations
	1)push()
	2)size()
	3)front()
	4)pop()
	5)empty()

@Author Vishwanath Gulabal

*/

#include<iostream>
#include<queue>

using namespace std;

int main(void) {

    queue<int> q;

    /*Insert the elements in the queue */

    for(int i=100; i<=1000; i++) {
        q.push(i);
    }

    /*Size of the queue */
    cout << "Size of the queue is " << endl;
    cout << q.size() << endl;

    /*Display the elements of the queue */

    while(!q.empty()) {
        cout << q.front() <<endl;
        q.pop();
    }

    cout << q.size() << endl;

    return 0;
}
