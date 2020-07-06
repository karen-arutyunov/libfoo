#include <cassert>
#include <sstream>
#include <stdexcept>

#include <libfoo/version.hxx>
#include <libfoo/foo.hxx>

int main ()
{
  using namespace std;
  using namespace foo;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hi, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
