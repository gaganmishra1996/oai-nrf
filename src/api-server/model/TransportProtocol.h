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
 * TransportProtocol.h
 *
 *
 */

#ifndef TransportProtocol_H_
#define TransportProtocol_H_

#include <nlohmann/json.hpp>

namespace oai {
namespace nrf {
namespace model {

/// <summary>
///
/// </summary>
class TransportProtocol {
 public:
  TransportProtocol();
  virtual ~TransportProtocol();

  void validate();

  /////////////////////////////////////////////
  /// TransportProtocol members

  friend void to_json(nlohmann::json& j, const TransportProtocol& o);
  friend void from_json(const nlohmann::json& j, TransportProtocol& o);

 protected:
};

}  // namespace model
}  // namespace nrf
}  // namespace oai

#endif /* TransportProtocol_H_ */
