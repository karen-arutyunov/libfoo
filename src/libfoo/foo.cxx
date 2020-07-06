#include <libfoo/foo.hxx>

#include <libfoo/config.hxx>
#include <libfoo/utility.hxx>

#include <ostream>
#include <stdexcept>

using namespace std;

namespace foo
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << HELLO ", " << n << '!' << endl;
  }
}
