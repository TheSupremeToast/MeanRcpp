#include <RcppArmadillo.h>
// [[Rcpp::depends(RcppArmadillo)]]
using namespace Rcpp;

// [[Rcpp::export()]]
double meanCpp(Rcpp::IntegerVector x) {
    double res = 0;
    for (int i = 0; i < x.size(); i++) {
        res += x[i];
    }
    res = res / (1.0 * x.size());
    return res;
}
