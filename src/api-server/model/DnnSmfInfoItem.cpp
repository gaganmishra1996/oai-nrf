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

#include "DnnSmfInfoItem.h"

namespace oai {
namespace nrf {
namespace model {

DnnSmfInfoItem::DnnSmfInfoItem() {
  m_Dnn = "";
}

DnnSmfInfoItem::~DnnSmfInfoItem() {}

void DnnSmfInfoItem::validate() {
  // TODO: implement validation
}

void to_json(nlohmann::json& j, const DnnSmfInfoItem& o) {
  j        = nlohmann::json();
  j["dnn"] = o.m_Dnn;
}

void from_json(const nlohmann::json& j, DnnSmfInfoItem& o) {
  j.at("dnn").get_to(o.m_Dnn);
}

std::string DnnSmfInfoItem::getDnn() const {
  return m_Dnn;
}
void DnnSmfInfoItem::setDnn(std::string const& value) {
  m_Dnn = value;
}

}  // namespace model
}  // namespace nrf
}  // namespace oai
