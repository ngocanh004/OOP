#include <iostream>
using namespace std;
class SoNguyen {
private:
    int A;
    int B;

public:
    SoNguyen(int A, int B) {
        this->A = A;
        this->B = B;
    }

    int cong() {
        return A + B;
    }
};

int main() {
    int A, B;
    cin >> A;
	cin >> B;
    SoNguyen soNguyen(A, B);
    cout<<soNguyen.cong() << endl;
    return 0;
}
