#include "brightray/common/application_info.h"

namespace brightray {

namespace {

std::string g_overridden_application_name;
std::string g_overridden_app_version;

}

// version
void OverrideApplicationVersion(const std::string& version) {
  g_overridden_app_version = version;
}
std::string GetOverriddenApplicationVersion() {
  return g_overridden_app_version;
}

// name
void OverrideApplicationName(const std::string& name) {
  g_overridden_application_name = name;
}
std::string GetOverriddenApplicationName() {
  return g_overridden_application_name;
}

}  // namespace brightray
