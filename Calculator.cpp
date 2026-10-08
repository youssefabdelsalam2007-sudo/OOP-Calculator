#include <iostream>
using namespace std;

class ClsCalculator
{
private:
    double _the_latest_result = 0;
    double _previous_result = 0;
    string _latest_operation = "";

public:

    void Clear()
    {
        _previous_result = _the_latest_result;
        _the_latest_result = 0;
        _latest_operation = "Clearing";
    }

    double Add(double Num)
    {
        _previous_result = _the_latest_result;
        _the_latest_result += Num;
        _latest_operation = "Adding";

        return _the_latest_result;
    }

    double Subtract(double Num)
    {
        _previous_result = _the_latest_result;
        _the_latest_result -= Num;
        _latest_operation = "Subtracting";

        return _the_latest_result;
    }

    double Divide(double Num)
    {
        if (Num == 0)
        {
            cout << "Error: Division by zero is not allowed." << endl;
            return _the_latest_result;
        }

        _previous_result = _the_latest_result;
        _latest_operation = "Dividing";
        _the_latest_result /= Num;

        return _the_latest_result;
    }

    double Multiply(double Num)
    {
        _previous_result = _the_latest_result;
        _latest_operation = "Multiplying";
        _the_latest_result *= Num;

        return _the_latest_result;
    }

    double Delete()
    {
        _latest_operation = "Deleting";
        _the_latest_result = _previous_result;

        return _the_latest_result;
    }

    void PrintResult()
    {
        cout << "Final result after "
             << _latest_operation
             << " is: "
             << _the_latest_result
             << endl;
    }
};

int main()
{
    ClsCalculator calc1;

    calc1.Add(10);
    calc1.Clear();
    calc1.Add(10);
    calc1.Subtract(50);

    calc1.PrintResult();
}