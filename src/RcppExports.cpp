// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;
using namespace Eigen;

// TransferModalUnfoldings
MatrixXd TransferModalUnfoldings(MatrixXd S, int d1, int d2, int r1, int r2, int r3);
RcppExport SEXP _tensorMam_TransferModalUnfoldings(SEXP SSEXP, SEXP d1SEXP, SEXP d2SEXP, SEXP r1SEXP, SEXP r2SEXP, SEXP r3SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< int >::type d1(d1SEXP);
    Rcpp::traits::input_parameter< int >::type d2(d2SEXP);
    Rcpp::traits::input_parameter< int >::type r1(r1SEXP);
    Rcpp::traits::input_parameter< int >::type r2(r2SEXP);
    Rcpp::traits::input_parameter< int >::type r3(r3SEXP);
    rcpp_result_gen = Rcpp::wrap(TransferModalUnfoldings(S, d1, d2, r1, r2, r3));
    return rcpp_result_gen;
END_RCPP
}
// Estimation
List Estimation(MatrixXd Y, MatrixXd Z, MatrixXd A, MatrixXd B, MatrixXd C, MatrixXd S, double threshold, int max_step);
RcppExport SEXP _tensorMam_Estimation(SEXP YSEXP, SEXP ZSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP SSEXP, SEXP thresholdSEXP, SEXP max_stepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< int >::type max_step(max_stepSEXP);
    rcpp_result_gen = Rcpp::wrap(Estimation(Y, Z, A, B, C, S, threshold, max_step));
    return rcpp_result_gen;
END_RCPP
}
// setuplambda
VectorXd setuplambda(MatrixXd Y, MatrixXd Z, MatrixXd A, MatrixXd B, MatrixXd C, MatrixXd S, int nlam, VectorXd setlam);
RcppExport SEXP _tensorMam_setuplambda(SEXP YSEXP, SEXP ZSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP SSEXP, SEXP nlamSEXP, SEXP setlamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< int >::type nlam(nlamSEXP);
    Rcpp::traits::input_parameter< VectorXd >::type setlam(setlamSEXP);
    rcpp_result_gen = Rcpp::wrap(setuplambda(Y, Z, A, B, C, S, nlam, setlam));
    return rcpp_result_gen;
END_RCPP
}
// EstPenColumn
List EstPenColumn(MatrixXd Y, MatrixXd Z, MatrixXd A, MatrixXd B, MatrixXd C, MatrixXd S, VectorXd lambda, double alpha, double gamma, int penalty, int dfmax, double threshold, double eps, int max_step, int max_iter);
RcppExport SEXP _tensorMam_EstPenColumn(SEXP YSEXP, SEXP ZSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP SSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP penaltySEXP, SEXP dfmaxSEXP, SEXP thresholdSEXP, SEXP epsSEXP, SEXP max_stepSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type max_step(max_stepSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(EstPenColumn(Y, Z, A, B, C, S, lambda, alpha, gamma, penalty, dfmax, threshold, eps, max_step, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// EstPenSingle
List EstPenSingle(MatrixXd Y, MatrixXd Z, MatrixXd A, MatrixXd B, MatrixXd C, MatrixXd S, VectorXd lambda, double alpha, double gamma, int penalty, int dfmax, double threshold, double eps, int max_step, int max_iter);
RcppExport SEXP _tensorMam_EstPenSingle(SEXP YSEXP, SEXP ZSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP SSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP penaltySEXP, SEXP dfmaxSEXP, SEXP thresholdSEXP, SEXP epsSEXP, SEXP max_stepSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type max_step(max_stepSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(EstPenSingle(Y, Z, A, B, C, S, lambda, alpha, gamma, penalty, dfmax, threshold, eps, max_step, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// EstPenColumnCV
List EstPenColumnCV(MatrixXd Y, MatrixXd Z, MatrixXd Ytest, MatrixXd Ztest, MatrixXd A, MatrixXd B, MatrixXd C, MatrixXd S, VectorXd lambda, double alpha, double gamma, int penalty, int dfmax, double threshold, double eps, int max_step, int max_iter);
RcppExport SEXP _tensorMam_EstPenColumnCV(SEXP YSEXP, SEXP ZSEXP, SEXP YtestSEXP, SEXP ZtestSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP SSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP penaltySEXP, SEXP dfmaxSEXP, SEXP thresholdSEXP, SEXP epsSEXP, SEXP max_stepSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Ytest(YtestSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Ztest(ZtestSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type max_step(max_stepSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(EstPenColumnCV(Y, Z, Ytest, Ztest, A, B, C, S, lambda, alpha, gamma, penalty, dfmax, threshold, eps, max_step, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// EstPenSingleCV
List EstPenSingleCV(MatrixXd Y, MatrixXd Z, MatrixXd Ytest, MatrixXd Ztest, MatrixXd A, MatrixXd B, MatrixXd C, MatrixXd S, VectorXd lambda, double alpha, double gamma, int penalty, int dfmax, double threshold, double eps, int max_step, int max_iter);
RcppExport SEXP _tensorMam_EstPenSingleCV(SEXP YSEXP, SEXP ZSEXP, SEXP YtestSEXP, SEXP ZtestSEXP, SEXP ASEXP, SEXP BSEXP, SEXP CSEXP, SEXP SSEXP, SEXP lambdaSEXP, SEXP alphaSEXP, SEXP gammaSEXP, SEXP penaltySEXP, SEXP dfmaxSEXP, SEXP thresholdSEXP, SEXP epsSEXP, SEXP max_stepSEXP, SEXP max_iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Ytest(YtestSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Ztest(ZtestSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type B(BSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type C(CSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type S(SSEXP);
    Rcpp::traits::input_parameter< VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< double >::type alpha(alphaSEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< int >::type penalty(penaltySEXP);
    Rcpp::traits::input_parameter< int >::type dfmax(dfmaxSEXP);
    Rcpp::traits::input_parameter< double >::type threshold(thresholdSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    Rcpp::traits::input_parameter< int >::type max_step(max_stepSEXP);
    Rcpp::traits::input_parameter< int >::type max_iter(max_iterSEXP);
    rcpp_result_gen = Rcpp::wrap(EstPenSingleCV(Y, Z, Ytest, Ztest, A, B, C, S, lambda, alpha, gamma, penalty, dfmax, threshold, eps, max_step, max_iter));
    return rcpp_result_gen;
END_RCPP
}
// EstimationD3
List EstimationD3(MatrixXd Y, MatrixXd Z);
RcppExport SEXP _tensorMam_EstimationD3(SEXP YSEXP, SEXP ZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    rcpp_result_gen = Rcpp::wrap(EstimationD3(Y, Z));
    return rcpp_result_gen;
END_RCPP
}
// setuplambdaMVR_colwise
VectorXd setuplambdaMVR_colwise(MatrixXd Y, MatrixXd Z, int nlam, VectorXd setlam);
RcppExport SEXP _tensorMam_setuplambdaMVR_colwise(SEXP YSEXP, SEXP ZSEXP, SEXP nlamSEXP, SEXP setlamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< int >::type nlam(nlamSEXP);
    Rcpp::traits::input_parameter< VectorXd >::type setlam(setlamSEXP);
    rcpp_result_gen = Rcpp::wrap(setuplambdaMVR_colwise(Y, Z, nlam, setlam));
    return rcpp_result_gen;
END_RCPP
}
// setuplambdaMVR_lasso
MatrixXd setuplambdaMVR_lasso(MatrixXd Y, MatrixXd Z, int nlam, VectorXd setlam);
RcppExport SEXP _tensorMam_setuplambdaMVR_lasso(SEXP YSEXP, SEXP ZSEXP, SEXP nlamSEXP, SEXP setlamSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< int >::type nlam(nlamSEXP);
    Rcpp::traits::input_parameter< VectorXd >::type setlam(setlamSEXP);
    rcpp_result_gen = Rcpp::wrap(setuplambdaMVR_lasso(Y, Z, nlam, setlam));
    return rcpp_result_gen;
END_RCPP
}
// setuplambdaMVR_blockwise
VectorXd setuplambdaMVR_blockwise(MatrixXd Y, MatrixXd Z, int nlam, VectorXd setlam, VectorXi lengths);
RcppExport SEXP _tensorMam_setuplambdaMVR_blockwise(SEXP YSEXP, SEXP ZSEXP, SEXP nlamSEXP, SEXP setlamSEXP, SEXP lengthsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< int >::type nlam(nlamSEXP);
    Rcpp::traits::input_parameter< VectorXd >::type setlam(setlamSEXP);
    Rcpp::traits::input_parameter< VectorXi >::type lengths(lengthsSEXP);
    rcpp_result_gen = Rcpp::wrap(setuplambdaMVR_blockwise(Y, Z, nlam, setlam, lengths));
    return rcpp_result_gen;
END_RCPP
}
// setuplambdaMVR_glasso
MatrixXd setuplambdaMVR_glasso(MatrixXd Y, MatrixXd Z, int nlam, VectorXd setlam, VectorXi lengths);
RcppExport SEXP _tensorMam_setuplambdaMVR_glasso(SEXP YSEXP, SEXP ZSEXP, SEXP nlamSEXP, SEXP setlamSEXP, SEXP lengthsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< int >::type nlam(nlamSEXP);
    Rcpp::traits::input_parameter< VectorXd >::type setlam(setlamSEXP);
    Rcpp::traits::input_parameter< VectorXi >::type lengths(lengthsSEXP);
    rcpp_result_gen = Rcpp::wrap(setuplambdaMVR_glasso(Y, Z, nlam, setlam, lengths));
    return rcpp_result_gen;
END_RCPP
}
// EstMVR_colwise
List EstMVR_colwise(MatrixXd Y, MatrixXd Z, MatrixXd W, VectorXd lambda, List optsList, List optsList_pen);
RcppExport SEXP _tensorMam_EstMVR_colwise(SEXP YSEXP, SEXP ZSEXP, SEXP WSEXP, SEXP lambdaSEXP, SEXP optsListSEXP, SEXP optsList_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    Rcpp::traits::input_parameter< List >::type optsList_pen(optsList_penSEXP);
    rcpp_result_gen = Rcpp::wrap(EstMVR_colwise(Y, Z, W, lambda, optsList, optsList_pen));
    return rcpp_result_gen;
END_RCPP
}
// EstMVR_lasso
List EstMVR_lasso(MatrixXd Y, MatrixXd Z1, MatrixXd W, MatrixXd lambda, List optsList, List optsList_pen);
RcppExport SEXP _tensorMam_EstMVR_lasso(SEXP YSEXP, SEXP Z1SEXP, SEXP WSEXP, SEXP lambdaSEXP, SEXP optsListSEXP, SEXP optsList_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z1(Z1SEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    Rcpp::traits::input_parameter< List >::type optsList_pen(optsList_penSEXP);
    rcpp_result_gen = Rcpp::wrap(EstMVR_lasso(Y, Z1, W, lambda, optsList, optsList_pen));
    return rcpp_result_gen;
END_RCPP
}
// EstMVR_blockwise
List EstMVR_blockwise(MatrixXd Y, MatrixXd Z, MatrixXd W, VectorXd lambda, VectorXi lengths, List optsList, List optsList_pen);
RcppExport SEXP _tensorMam_EstMVR_blockwise(SEXP YSEXP, SEXP ZSEXP, SEXP WSEXP, SEXP lambdaSEXP, SEXP lengthsSEXP, SEXP optsListSEXP, SEXP optsList_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< VectorXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< VectorXi >::type lengths(lengthsSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    Rcpp::traits::input_parameter< List >::type optsList_pen(optsList_penSEXP);
    rcpp_result_gen = Rcpp::wrap(EstMVR_blockwise(Y, Z, W, lambda, lengths, optsList, optsList_pen));
    return rcpp_result_gen;
END_RCPP
}
// EstMVR_glasso
List EstMVR_glasso(MatrixXd Y, MatrixXd Z, MatrixXd W, MatrixXd lambda, VectorXi lengths, List optsList, List optsList_pen);
RcppExport SEXP _tensorMam_EstMVR_glasso(SEXP YSEXP, SEXP ZSEXP, SEXP WSEXP, SEXP lambdaSEXP, SEXP lengthsSEXP, SEXP optsListSEXP, SEXP optsList_penSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< MatrixXd >::type Y(YSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type W(WSEXP);
    Rcpp::traits::input_parameter< MatrixXd >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< VectorXi >::type lengths(lengthsSEXP);
    Rcpp::traits::input_parameter< List >::type optsList(optsListSEXP);
    Rcpp::traits::input_parameter< List >::type optsList_pen(optsList_penSEXP);
    rcpp_result_gen = Rcpp::wrap(EstMVR_glasso(Y, Z, W, lambda, lengths, optsList, optsList_pen));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_tensorMam_TransferModalUnfoldings", (DL_FUNC) &_tensorMam_TransferModalUnfoldings, 6},
    {"_tensorMam_Estimation", (DL_FUNC) &_tensorMam_Estimation, 8},
    {"_tensorMam_setuplambda", (DL_FUNC) &_tensorMam_setuplambda, 8},
    {"_tensorMam_EstPenColumn", (DL_FUNC) &_tensorMam_EstPenColumn, 15},
    {"_tensorMam_EstPenSingle", (DL_FUNC) &_tensorMam_EstPenSingle, 15},
    {"_tensorMam_EstPenColumnCV", (DL_FUNC) &_tensorMam_EstPenColumnCV, 17},
    {"_tensorMam_EstPenSingleCV", (DL_FUNC) &_tensorMam_EstPenSingleCV, 17},
    {"_tensorMam_EstimationD3", (DL_FUNC) &_tensorMam_EstimationD3, 2},
    {"_tensorMam_setuplambdaMVR_colwise", (DL_FUNC) &_tensorMam_setuplambdaMVR_colwise, 4},
    {"_tensorMam_setuplambdaMVR_lasso", (DL_FUNC) &_tensorMam_setuplambdaMVR_lasso, 4},
    {"_tensorMam_setuplambdaMVR_blockwise", (DL_FUNC) &_tensorMam_setuplambdaMVR_blockwise, 5},
    {"_tensorMam_setuplambdaMVR_glasso", (DL_FUNC) &_tensorMam_setuplambdaMVR_glasso, 5},
    {"_tensorMam_EstMVR_colwise", (DL_FUNC) &_tensorMam_EstMVR_colwise, 6},
    {"_tensorMam_EstMVR_lasso", (DL_FUNC) &_tensorMam_EstMVR_lasso, 6},
    {"_tensorMam_EstMVR_blockwise", (DL_FUNC) &_tensorMam_EstMVR_blockwise, 7},
    {"_tensorMam_EstMVR_glasso", (DL_FUNC) &_tensorMam_EstMVR_glasso, 7},
    {NULL, NULL, 0}
};

RcppExport void R_init_tensorMam(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
