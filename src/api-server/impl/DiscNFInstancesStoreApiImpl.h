/**
 * NRF NFDiscovery Service
 * NRF NFDiscovery Service. © 2019, 3GPP Organizational Partners (ARIB, ATIS,
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
 * Licensed to the OpenAirInterface (OAI) Software Alliance under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.
 * The OpenAirInterface Software Alliance licenses this file to You under
 * the OAI Public License, Version 1.1  (the "License"); you may not use this
 *file except in compliance with the License. You may obtain a copy of the
 *License at
 *
 *      http://www.openairinterface.org/?page_id=698
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *-------------------------------------------------------------------------------
 * For more information about the OpenAirInterface (OAI) Software Alliance:
 *      contact@openairinterface.org
 */

/*
 * NFInstancesStoreApiImpl.h
 *
 *
 */

#ifndef DISC_NF_INSTANCES_STORE_API_IMPL_H_
#define DISC_NF_INSTANCES_STORE_API_IMPL_H_

#include <pistache/endpoint.h>
#include <pistache/http.h>
#include <pistache/router.h>
#include <memory>

#include <DiscNFInstancesStoreApi.h>

#include <pistache/optional.h>

#include "AccessType.h"
#include "AtsssCapability.h"
#include "ComplexQuery.h"
#include "DataSetId.h"
#include "EventId.h"
#include "Guami.h"
#include "Ipv6Prefix.h"
#include "NFType.h"
#include "NwdafEvent.h"
#include "PduSessionType.h"
#include "PlmnId.h"
#include "PlmnSnssai.h"
#include "ProblemDetails.h"
#include "SearchResult.h"
#include "ServiceName.h"
#include "Snssai.h"
#include "Tai.h"
#include "nrf_app.hpp"
#include <string>
#include <set>

namespace oai {
namespace nrf {
namespace api {

using namespace oai::nrf::model;
using namespace oai::nrf::app;

class DiscNFInstancesStoreApiImpl
    : public oai::nrf::api::DiscNFInstancesStoreApi {
 public:
  DiscNFInstancesStoreApiImpl(
      std::shared_ptr<Pistache::Rest::Router>, nrf_app* nrf_app_inst,
      std::string address);
  ~DiscNFInstancesStoreApiImpl() {}

  void search_nf_instances(
      const Pistache::Optional<std::string>& targetNfType,
      const Pistache::Optional<std::string>& requesterNfType,
      const Pistache::Optional<std::string>& requesterNfInstanceId,
      const Pistache::Optional<std::vector<ServiceName>>& serviceNames,
      const Pistache::Optional<std::string>& requesterNfInstanceFqdn,
      const Pistache::Optional<std::vector<PlmnId>>& targetPlmnList,
      const Pistache::Optional<std::vector<PlmnId>>& requesterPlmnList,
      const Pistache::Optional<std::string>& targetNfInstanceId,
      const Pistache::Optional<std::string>& targetNfFqdn,
      const Pistache::Optional<std::string>& hnrfUri,
      const Pistache::Optional<std::vector<Snssai>>& snssais,
      const Pistache::Optional<std::vector<Snssai>>& requesterSnssais,
      const Pistache::Optional<std::vector<PlmnSnssai>>& plmnSpecificSnssaiList,
      const Pistache::Optional<std::string>& dnn,
      const Pistache::Optional<std::vector<std::string>>& nsiList,
      const Pistache::Optional<std::string>& smfServingArea,
      const Pistache::Optional<Tai>& tai,
      const Pistache::Optional<std::string>& amfRegionId,
      const Pistache::Optional<std::string>& amfSetId,
      const Pistache::Optional<Guami>& guami,
      const Pistache::Optional<std::string>& supi,
      const Pistache::Optional<std::string>& ueIpv4Address,
      const Pistache::Optional<std::string>& ipDomain,
      const Pistache::Optional<Ipv6Prefix>& ueIpv6Prefix,
      const Pistache::Optional<bool>& pgwInd,
      const Pistache::Optional<std::string>& pgw,
      const Pistache::Optional<std::string>& gpsi,
      const Pistache::Optional<std::string>& externalGroupIdentity,
      const Pistache::Optional<DataSetId>& dataSet,
      const Pistache::Optional<std::string>& routingIndicator,
      const Pistache::Optional<std::vector<std::string>>& groupIdList,
      const Pistache::Optional<std::vector<std::string>>& dnaiList,
      const Pistache::Optional<std::vector<PduSessionType>>& pduSessionTypes,
      const Pistache::Optional<std::vector<EventId>>& eventIdList,
      const Pistache::Optional<std::vector<NwdafEvent>>& nwdafEventList,
      const Pistache::Optional<std::string>& supportedFeatures,
      const Pistache::Optional<bool>& upfIwkEpsInd,
      const Pistache::Optional<PlmnId>& chfSupportedPlmn,
      const Pistache::Optional<std::string>& preferredLocality,
      const Pistache::Optional<AccessType>& accessType,
      const Pistache::Optional<int32_t>& limit,
      const Pistache::Optional<std::vector<std::string>>& requiredFeatures,
      const Pistache::Optional<ComplexQuery>& complexQuery,
      const Pistache::Optional<int32_t>& maxPayloadSize,
      const Pistache::Optional<AtsssCapability>& atsssCapability,
      const Pistache::Optional<bool>& upfUeIpAddrInd,
      const Pistache::Optional<Pistache::Http::Header::Raw>& ifNoneMatch,
      Pistache::Http::ResponseWriter& response);

 private:
  nrf_app* m_nrf_app;
  std::string m_address;
};

}  // namespace api
}  // namespace nrf
}  // namespace oai

#endif
