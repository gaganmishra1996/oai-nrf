/**
 * NRF NFManagement Service
 * NRF NFManagement Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
 * CCSA, ETSI, TSDSI, TTA, TTC). All rights reserved.
 *
 * The version of the OpenAPI document: 1.1.0.alpha-1
 *
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * (https://openapi-generator.tech). https://openapi-generator.tech Do not edit
 * the class manually.
 */
/*
 * Helpers.h
 *
 * This is the helper class for models and primitives
 */

#ifndef Helpers_H_
#define Helpers_H_

#include <ctime>
#include <string>
#include <sstream>
#include <vector>
#include <map>
#include "ServiceName.h"
#include "PlmnId.h"
#include "Snssai.h"
#include "PlmnSnssai.h"
#include "PduSessionType.h"
#include "EventId.h"
#include "NwdafEvent.h"
#include "AccessType.h"
#include "ComplexQuery.h"
#include "AtsssCapability.h"
#include "Tai.h"
#include "Guami.h"
#include "DataSetId.h"
#include "Ipv6Prefix.h"

namespace oai {
namespace nrf {
namespace helpers {

std::string toStringValue(const std::string& value);
std::string toStringValue(const int32_t& value);
std::string toStringValue(const int64_t& value);
std::string toStringValue(const bool& value);
std::string toStringValue(const float& value);
std::string toStringValue(const double& value);

bool fromStringValue(const std::string& inStr, std::string& value);
bool fromStringValue(const std::string& inStr, int32_t& value);
bool fromStringValue(const std::string& inStr, int64_t& value);
bool fromStringValue(const std::string& inStr, bool& value);
bool fromStringValue(const std::string& inStr, float& value);
bool fromStringValue(const std::string& inStr, double& value);
bool fromStringValue(
    const std::string& inStr, oai::nrf::model::ServiceName& value);
bool fromStringValue(const std::string& inStr, oai::nrf::model::PlmnId& value);
bool fromStringValue(const std::string& inStr, oai::nrf::model::Snssai& value);
bool fromStringValue(
    const std::string& inStr, oai::nrf::model::PlmnSnssai& value);
bool fromStringValue(
    const std::string& inStr, oai::nrf::model::PduSessionType& value);
bool fromStringValue(const std::string& inStr, oai::nrf::model::EventId& value);
bool fromStringValue(
    const std::string& inStr, oai::nrf::model::NwdafEvent& value);
bool fromStringValue(
    const std::string& inStr, oai::nrf::model::AccessType& value);
bool fromStringValue(
    const std::string& inStr, oai::nrf::model::ComplexQuery& value);
bool fromStringValue(
    const std::string& inStr, oai::nrf::model::AtsssCapability& value);
bool fromStringValue(const std::string& inStr, oai::nrf::model::Tai& value);
bool fromStringValue(const std::string& inStr, oai::nrf::model::Guami& value);
bool fromStringValue(
    const std::string& inStr, oai::nrf::model::Ipv6Prefix& value);
bool fromStringValue(
    const std::string& inStr, oai::nrf::model::DataSetId& value);

template<typename T>
bool fromStringValue(
    const std::vector<std::string>& inStr, std::vector<T>& value) {
  try {
    for (auto& item : inStr) {
      T itemValue;
      if (fromStringValue(item, itemValue)) {
        value.push_back(itemValue);
      }
    }
  } catch (...) {
    return false;
  }
  return value.size() > 0;
}
template<typename T>
bool fromStringValue(
    const std::string& inStr, std::vector<T>& value, char separator = ',') {
  std::vector<std::string> inStrings;
  std::istringstream f(inStr);
  std::string s;
  while (std::getline(f, s, separator)) {
    inStrings.push_back(s);
  }
  return fromStringValue(inStrings, value);
}

}  // namespace helpers
}  // namespace nrf
}  // namespace oai

#endif  // Helpers_H_
