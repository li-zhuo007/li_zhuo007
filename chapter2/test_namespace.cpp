

/*
#include <iostream>
using namespace std;

namespace perception
{
    void Infer() { cout << "Perception infer." << endl; }
}

namespace prediction
{
    void Infer() { cout << "Prediction infer." << endl; }
}

int main()
{
    perception::Infer();
    prediction::Infer();
    return 0;
}
*/

#include <iostream>
using namespace std;

namespace perception
{
    void Infer() { cout << "Perception infer." << endl; }
}

namespace prediction
{
    void Infer() { cout << "Prediction infer." << endl; }
}

using namespace perception;
int main()
{
    Infer();
    return 0;
}
