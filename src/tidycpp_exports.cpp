// Generated by tidycpp: do not edit by hand

#include "tidycpp/declarations.hpp"
#include <Rcpp.h>
using namespace Rcpp;

// fill.cpp
SEXP fillDown(SEXP x);
extern "C" SEXP _tidyr_fillDown(SEXP x) {
  BEGIN_TIDYCPP
    return tidycpp::as_sexp(fillDown(tidycpp::unmove(tidycpp::as_cpp<SEXP>(x))));
  END_TIDYCPP
}
// fill.cpp
SEXP fillUp(SEXP x);
extern "C" SEXP _tidyr_fillUp(SEXP x) {
  BEGIN_TIDYCPP
    return tidycpp::as_sexp(fillUp(tidycpp::unmove(tidycpp::as_cpp<SEXP>(x))));
  END_TIDYCPP
}
// melt.cpp
tidycpp::list melt_dataframe(tidycpp::list data, const tidycpp::integer_vector& id_ind, const tidycpp::integer_vector& measure_ind, tidycpp::character_vector variable_name, tidycpp::character_vector value_name, tidycpp::sexp attrTemplate, bool factorsAsStrings, bool valueAsFactor, bool variableAsFactor);
extern "C" SEXP _tidyr_melt_dataframe(SEXP data, SEXP id_ind, SEXP measure_ind, SEXP variable_name, SEXP value_name, SEXP attrTemplate, SEXP factorsAsStrings, SEXP valueAsFactor, SEXP variableAsFactor) {
  BEGIN_TIDYCPP
    return tidycpp::as_sexp(melt_dataframe(tidycpp::unmove(tidycpp::as_cpp<tidycpp::list>(data)), tidycpp::unmove(tidycpp::as_cpp<const tidycpp::integer_vector&>(id_ind)), tidycpp::unmove(tidycpp::as_cpp<const tidycpp::integer_vector&>(measure_ind)), tidycpp::unmove(tidycpp::as_cpp<tidycpp::character_vector>(variable_name)), tidycpp::unmove(tidycpp::as_cpp<tidycpp::character_vector>(value_name)), tidycpp::unmove(tidycpp::as_cpp<tidycpp::sexp>(attrTemplate)), tidycpp::unmove(tidycpp::as_cpp<bool>(factorsAsStrings)), tidycpp::unmove(tidycpp::as_cpp<bool>(valueAsFactor)), tidycpp::unmove(tidycpp::as_cpp<bool>(variableAsFactor))));
  END_TIDYCPP
}
// simplifyPieces.cpp
List simplifyPieces(ListOf<CharacterVector> pieces, int p, bool fillLeft);
extern "C" SEXP _tidyr_simplifyPieces(SEXP pieces, SEXP p, SEXP fillLeft) {
  BEGIN_TIDYCPP
    return tidycpp::as_sexp(simplifyPieces(tidycpp::unmove(tidycpp::as_cpp<ListOf<CharacterVector>>(pieces)), tidycpp::unmove(tidycpp::as_cpp<int>(p)), tidycpp::unmove(tidycpp::as_cpp<bool>(fillLeft))));
  END_TIDYCPP
}

extern "C" {
/* .Call calls */
extern SEXP _tidyr_fillDown(SEXP);
extern SEXP _tidyr_fillUp(SEXP);
extern SEXP _tidyr_melt_dataframe(SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP, SEXP);
extern SEXP _tidyr_simplifyPieces(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
    {"_tidyr_fillDown",       (DL_FUNC) &_tidyr_fillDown,       1},
    {"_tidyr_fillUp",         (DL_FUNC) &_tidyr_fillUp,         1},
    {"_tidyr_melt_dataframe", (DL_FUNC) &_tidyr_melt_dataframe, 9},
    {"_tidyr_simplifyPieces", (DL_FUNC) &_tidyr_simplifyPieces, 3},
    {NULL, NULL, 0}
};
}



extern "C" void R_init_tidyr(DllInfo* dll){
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
  
}

