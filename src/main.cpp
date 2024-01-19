#include "soci/postgresql/soci-postgresql.h"
#include <iostream>
#include <soci/soci.h>

int main(int argc, char *argv[]) {
  auto sql = soci::session(
      soci::postgresql,
      "user=admin password=admin host=localhost port=9714 dbname=lithium");

  std::string name;
  std::string id = "8bd4b7e8-f93e-4b40-8275-d2b21d17656d";
  sql << "SELECT * FROM device_info WHERE id=:id", soci::use(id),
      soci::into(name);

  std::cout << "Result: " << name << "\n";
  return 0;
}