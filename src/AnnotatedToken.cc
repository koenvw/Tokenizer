#include "onmt/AnnotatedToken.h"

namespace onmt
{

  AnnotatedToken::AnnotatedToken(const std::string& str)
    : _str(str)
  {
  }

  void AnnotatedToken::append(const std::string& str)
  {
    _str += str;
  }

  void AnnotatedToken::set(const std::string& str)
  {
    _str = str;
  }

  void AnnotatedToken::clear()
  {
    _str.clear();
    _join_right = false;
    _join_left = false;
  }

  const std::string& AnnotatedToken::str() const
  {
    return _str;
  }

  void AnnotatedToken::join_right()
  {
    _join_right = true;
  }

  void AnnotatedToken::join_left()
  {
    _join_left = true;
  }

  void AnnotatedToken::spacer()
  {
    _spacer = true;
  }

  bool AnnotatedToken::is_joined_right() const
  {
    return _join_right;
  }

  bool AnnotatedToken::is_joined_left() const
  {
    return _join_left;
  }

  bool AnnotatedToken::is_spacer() const
  {
    return _spacer;
  }

}