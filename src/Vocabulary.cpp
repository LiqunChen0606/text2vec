#include "Vocabulary.hpp"
using namespace Rcpp;
using namespace std;

RCPP_MODULE(Vocabulary) {
  class_< Vocabulary >( "Vocabulary" )
  .constructor<uint32_t, uint32_t, string>()
  .method( "insert_sentence", &Vocabulary::insert_sentence, "inserts sentence into corpus" )
  .method( "insert_sentence_batch", &Vocabulary::insert_sentence_batch, "inserts multiple sentences into corpus" )
  .method( "vocab_stat", &Vocabulary::vocab_stat, "returns cooccurence matrix")
  ;
}