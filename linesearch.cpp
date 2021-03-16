#include <iostream>
#include <functional>
//#include <vector>
#include <cmath>
#include <limits>
#include <cassert>

typedef std::function<void(const double alpha, double &f, double &g)> func_deriv_eval;

// f0 Value of function at starting point of line search.
// d0 Directional derivative at starting point of line search.
// alpha the step length.
// fa Value of function at alpha.
// mu the sufficient decrease constant. Should take a value between 0 and 1.
bool sufficient_decrease(double f0, double d0, double alpha, double fa, double mu) {
    return fa <= f0 + mu*alpha*d0;
}

void line_search(const func_deriv_eval phi, const double alpha0, const double mu, const double eta) {
    constexpr double xtrapf = 4.;
    double f, g;
    phi(alpha0, f, g);
    std::cerr << f << " " << g << std::endl;
    double  = 0., sty = 0.;
    bool brackt = false;  // set to true when a minimizer has been bracketed in an interval of uncertainty  with endpoints stx and sty
    bool stage1 = true;   // use function psi instead if phi
    // TODO alpha_min alpha_max nfev
    while (1) {
        double stmin = 0., stmax = 0.;
        if (brackt) {
            stmin = std::min(stx, sty);
            stmax = std::max(stx, sty);
        } else {
        }
    }
}




/*
typedef std::vector<double> vector;
typedef std::function<void(std::vector<double>& x, double &f, std::vector<double>& g)> func_grad_eval;


void line_search(func_grad_eval phi,
        double step0,
        double alpha = 1.,
        double c1 = 1e-4,
        double c2 = 1e-1,
        double xtol = 1e-14,
        double alpha_min = 0.,
        double alpha_max = std::numeric_limits<double>::max(),
        int maxfev = std::numeric_limits<int>::max(),
        double delta = 0.66) {

        constexpr double xtrapf = 4.;
        if (alpha <= 0) {
            std::cerr << "alpha < 0.0" << std::endl;
            return;
        }
        if (c1 < 0) {
            std::cerr << "c1 < 0.0" << std::endl;
            return;
        }
        if (c2 < 0) {
            std::cerr << "c2 < 0.0" << std::endl;
            return;
        }
        if (xtol < 0) {
            std::cerr << "xtol < 0.0" << std::endl;
            return;
        }
        if (alpha_min < 0) {
            std::cerr << "alpha_min < 0.0" << std::endl;
            return;
        }
        if (alpha_max < 0) {
            std::cerr << "alpha_max < 0.0" << std::endl;
            return;
        }
        if (maxfev <= 0) {
            std::cerr << "maxfev < 0" << std::endl;
            return;
        }
}
*/

