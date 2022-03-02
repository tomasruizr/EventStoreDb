#include <string>
#include <uuid/uuid.h>

using namespace std;

string uuid(){
  uuid_t uuidObject;
  uuid_generate(uuidObject);
  char out[37];
  uuid_unparse(uuidObject, out);
  return string{out};
}