#include <iostream>

class KalmanFilter {
public:
  KalmanFilter();
  virtual ~KalmanFilter();
  void Init(int a) { this->a = a; } ;
  void Incr();
  void Add(const int b);
  int Result();
private:
  int a;
};
KalmanFilter::KalmanFilter() {}
KalmanFilter::~KalmanFilter() {}
void KalmanFilter::Incr() { a++; }
void KalmanFilter::Add(const int b) { a += b; }
int KalmanFilter::Result() { return a; }

using namespace std;
int main() {
  cout << "Hello World!" << endl;

  KalmanFilter k;
  k.Init(3);
  cout << k.Result() << endl;

  return 0;
}
