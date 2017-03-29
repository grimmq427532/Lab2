using namespace std;
class Rate{
public:
	Rate();
	Rate(int rate);
	int Update(int K , int oppsite_rate , float act_scro);
	int returnValue();
private:
	int rate_value;
};