#include <iostream>
#include <random>
#include <functional>

bool InsideUnitSphere(double x, double y, double z)
{
    return ((x*x + y*y + z*z) <= 1);
}

double IntegrateMonteCarlo3D(int n_points, double min, double max, std::function<bool(double,double,double)> monte_carlo_input)
{
    int count = 0;
    double VolCube = std::pow((max - min), 3);

    //set up random number generator here
    std::mt19937 rng_mt;
    std::uniform_real_distribution<double> distribution(-1.0,1.0);
    auto random_num_gen = std::bind (distribution, rng_mt);
    
    for(int i = 0; i < n_points; i++)
    {
        //generate random points here
    
        double x = random_num_gen();
        double y = random_num_gen();
        double z = random_num_gen();

        if(monte_carlo_input(x, y, z)) count++;
    }

    return (double) count / n_points * VolCube;
}


int main()
{
    int N_points = 10000;

    double UnitSphereVol = IntegrateMonteCarlo3D(N_points, -1.0, 1.0, InsideUnitSphere);

    std::cout << "Volume estimate of sphere using " << N_points << " points = " << UnitSphereVol << std::endl;
}
