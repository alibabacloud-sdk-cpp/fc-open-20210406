// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/fc__open_20210406.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_FC-Open20210406;

Alibabacloud_FC-Open20210406::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "account-id.ap-northeast-1.fc.aliyuncs.com"},
    {"ap-south-1", "account-id.ap-south-1.fc.aliyuncs.com"},
    {"ap-southeast-1", "account-id.ap-southeast-1.fc.aliyuncs.com"},
    {"ap-southeast-2", "account-id.ap-southeast-2.fc.aliyuncs.com"},
    {"ap-southeast-3", "account-id.ap-southeast-3.fc.aliyuncs.com"},
    {"ap-southeast-5", "account-id.ap-southeast-5.fc.aliyuncs.com"},
    {"cn-beijing", "account-id.cn-beijing.fc.aliyuncs.com"},
    {"cn-chengdu", "account-id.cn-chengdu.fc.aliyuncs.com"},
    {"cn-hangzhou", "account-id.cn-hangzhou.fc.aliyuncs.com"},
    {"cn-hangzhou-finance", "account-id.cn-hangzhou-finance.fc.aliyuncs.com"},
    {"cn-hongkong", "account-id.cn-hongkong.fc.aliyuncs.com"},
    {"cn-huhehaote", "account-id.cn-huhehaote.fc.aliyuncs.com"},
    {"cn-north-2-gov-1", "account-id.cn-north-2-gov-1.fc.aliyuncs.com"},
    {"cn-qingdao", "account-id.cn-qingdao.fc.aliyuncs.com"},
    {"cn-shanghai", "account-id.cn-shanghai.fc.aliyuncs.com"},
    {"cn-shenzhen", "account-id.cn-shenzhen.fc.aliyuncs.com"},
    {"cn-zhangjiakou", "account-id.cn-zhangjiakou.fc.aliyuncs.com"},
    {"eu-central-1", "account-id.eu-central-1.fc.aliyuncs.com"},
    {"eu-west-1", "account-id.eu-west-1.fc.aliyuncs.com"},
    {"us-east-1", "account-id.us-east-1.fc.aliyuncs.com"},
    {"us-west-1", "account-id.us-west-1.fc.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("fc-open"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_FC-Open20210406::Client::getEndpoint(shared_ptr<string> productId,
                                                         shared_ptr<string> regionId,
                                                         shared_ptr<string> endpointRule,
                                                         shared_ptr<string> network,
                                                         shared_ptr<string> suffix,
                                                         shared_ptr<map<string, string>> endpointMap,
                                                         shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

CreateAliasResponse Alibabacloud_FC-Open20210406::Client::createAlias(shared_ptr<string> serviceName, shared_ptr<CreateAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createAliasWithOptions(serviceName, request, headers, runtime);
}

CreateAliasResponse Alibabacloud_FC-Open20210406::Client::createAliasWithOptions(shared_ptr<string> serviceName,
                                                                                 shared_ptr<CreateAliasRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, double>>(request->additionalVersionWeight)) {
    (*body)["additionalVersionWeight"] = *request->additionalVersionWeight;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->aliasName)) {
    (*body)["aliasName"] = *request->aliasName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    (*body)["versionId"] = *request->versionId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAlias"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/aliases"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAliasResponse(callApi(params, req, runtime));
}

CreateCustomDomainResponse Alibabacloud_FC-Open20210406::Client::createCustomDomain(shared_ptr<CreateCustomDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createCustomDomainWithOptions(request, headers, runtime);
}

CreateCustomDomainResponse Alibabacloud_FC-Open20210406::Client::createCustomDomainWithOptions(shared_ptr<CreateCustomDomainRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CertConfig>(request->certConfig)) {
    (*body)["certConfig"] = *request->certConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domainName)) {
    (*body)["domainName"] = *request->domainName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    (*body)["protocol"] = *request->protocol;
  }
  if (!Darabonba_Util::Client::isUnset<RouteConfig>(request->routeConfig)) {
    (*body)["routeConfig"] = *request->routeConfig;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomDomain"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/custom-domains"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomDomainResponse(callApi(params, req, runtime));
}

CreateFunctionResponse Alibabacloud_FC-Open20210406::Client::createFunction(shared_ptr<string> serviceName, shared_ptr<CreateFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<CreateFunctionHeaders> headers = make_shared<CreateFunctionHeaders>();
  return createFunctionWithOptions(serviceName, request, headers, runtime);
}

CreateFunctionResponse Alibabacloud_FC-Open20210406::Client::createFunctionWithOptions(shared_ptr<string> serviceName,
                                                                                       shared_ptr<CreateFunctionRequest> request,
                                                                                       shared_ptr<CreateFunctionHeaders> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->caPort)) {
    (*body)["caPort"] = *request->caPort;
  }
  if (!Darabonba_Util::Client::isUnset<Code>(request->code)) {
    (*body)["code"] = *request->code;
  }
  if (!Darabonba_Util::Client::isUnset<CustomContainerConfig>(request->customContainerConfig)) {
    (*body)["customContainerConfig"] = *request->customContainerConfig;
  }
  if (!Darabonba_Util::Client::isUnset<CustomDNS>(request->customDNS)) {
    (*body)["customDNS"] = *request->customDNS;
  }
  if (!Darabonba_Util::Client::isUnset<CustomRuntimeConfig>(request->customRuntimeConfig)) {
    (*body)["customRuntimeConfig"] = *request->customRuntimeConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->environmentVariables)) {
    (*body)["environmentVariables"] = *request->environmentVariables;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    (*body)["functionName"] = *request->functionName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->handler)) {
    (*body)["handler"] = *request->handler;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->initializationTimeout)) {
    (*body)["initializationTimeout"] = *request->initializationTimeout;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->initializer)) {
    (*body)["initializer"] = *request->initializer;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceConcurrency)) {
    (*body)["instanceConcurrency"] = *request->instanceConcurrency;
  }
  if (!Darabonba_Util::Client::isUnset<InstanceLifecycleConfig>(request->instanceLifecycleConfig)) {
    (*body)["instanceLifecycleConfig"] = *request->instanceLifecycleConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    (*body)["instanceType"] = *request->instanceType;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->layers)) {
    (*body)["layers"] = *request->layers;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memorySize)) {
    (*body)["memorySize"] = *request->memorySize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtime)) {
    (*body)["runtime"] = *request->runtime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    (*body)["timeout"] = *request->timeout;
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcCodeChecksum)) {
    (*realHeaders)["x-fc-code-checksum"] = Darabonba_Util::Client::toJSONString(headers->xFcCodeChecksum);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateFunction"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateFunctionResponse(callApi(params, req, runtime));
}

CreateLayerVersionResponse Alibabacloud_FC-Open20210406::Client::createLayerVersion(shared_ptr<string> layerName, shared_ptr<CreateLayerVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createLayerVersionWithOptions(layerName, request, headers, runtime);
}

CreateLayerVersionResponse Alibabacloud_FC-Open20210406::Client::createLayerVersionWithOptions(shared_ptr<string> layerName,
                                                                                               shared_ptr<CreateLayerVersionRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  layerName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(layerName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<Code>(request->code)) {
    (*body)["Code"] = *request->code;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->compatibleRuntime)) {
    (*body)["compatibleRuntime"] = *request->compatibleRuntime;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLayerVersion"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/layers/") + string(*layerName) + string("/versions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLayerVersionResponse(callApi(params, req, runtime));
}

CreateServiceResponse Alibabacloud_FC-Open20210406::Client::createService(shared_ptr<CreateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createServiceWithOptions(request, headers, runtime);
}

CreateServiceResponse Alibabacloud_FC-Open20210406::Client::createServiceWithOptions(shared_ptr<CreateServiceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->internetAccess)) {
    (*body)["internetAccess"] = *request->internetAccess;
  }
  if (!Darabonba_Util::Client::isUnset<LogConfig>(request->logConfig)) {
    (*body)["logConfig"] = *request->logConfig;
  }
  if (!Darabonba_Util::Client::isUnset<NASConfig>(request->nasConfig)) {
    (*body)["nasConfig"] = *request->nasConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    (*body)["role"] = *request->role;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*body)["serviceName"] = *request->serviceName;
  }
  if (!Darabonba_Util::Client::isUnset<TracingConfig>(request->tracingConfig)) {
    (*body)["tracingConfig"] = *request->tracingConfig;
  }
  if (!Darabonba_Util::Client::isUnset<VPCConfig>(request->vpcConfig)) {
    (*body)["vpcConfig"] = *request->vpcConfig;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateService"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateServiceResponse(callApi(params, req, runtime));
}

CreateTriggerResponse Alibabacloud_FC-Open20210406::Client::createTrigger(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<CreateTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createTriggerWithOptions(serviceName, functionName, request, headers, runtime);
}

CreateTriggerResponse Alibabacloud_FC-Open20210406::Client::createTriggerWithOptions(shared_ptr<string> serviceName,
                                                                                     shared_ptr<string> functionName,
                                                                                     shared_ptr<CreateTriggerRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invocationRole)) {
    (*body)["invocationRole"] = *request->invocationRole;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*body)["qualifier"] = *request->qualifier;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceArn)) {
    (*body)["sourceArn"] = *request->sourceArn;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerConfig)) {
    (*body)["triggerConfig"] = *request->triggerConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerName)) {
    (*body)["triggerName"] = *request->triggerName;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerType)) {
    (*body)["triggerType"] = *request->triggerType;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateTrigger"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/triggers"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateTriggerResponse(callApi(params, req, runtime));
}

CreateVpcBindingResponse Alibabacloud_FC-Open20210406::Client::createVpcBinding(shared_ptr<string> serviceName, shared_ptr<CreateVpcBindingRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return createVpcBindingWithOptions(serviceName, request, headers, runtime);
}

CreateVpcBindingResponse Alibabacloud_FC-Open20210406::Client::createVpcBindingWithOptions(shared_ptr<string> serviceName,
                                                                                           shared_ptr<CreateVpcBindingRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->vpcId)) {
    (*body)["vpcId"] = *request->vpcId;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateVpcBinding"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/bindings"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return CreateVpcBindingResponse(callApi(params, req, runtime));
}

DeleteAliasResponse Alibabacloud_FC-Open20210406::Client::deleteAlias(shared_ptr<string> serviceName, shared_ptr<string> aliasName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteAliasHeaders> headers = make_shared<DeleteAliasHeaders>();
  return deleteAliasWithOptions(serviceName, aliasName, headers, runtime);
}

DeleteAliasResponse Alibabacloud_FC-Open20210406::Client::deleteAliasWithOptions(shared_ptr<string> serviceName,
                                                                                 shared_ptr<string> aliasName,
                                                                                 shared_ptr<DeleteAliasHeaders> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  aliasName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(aliasName));
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->ifMatch)) {
    (*realHeaders)["If-Match"] = Darabonba_Util::Client::toJSONString(headers->ifMatch);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteAlias"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/aliases/") + string(*aliasName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteAliasResponse(callApi(params, req, runtime));
}

DeleteCustomDomainResponse Alibabacloud_FC-Open20210406::Client::deleteCustomDomain(shared_ptr<string> domainName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteCustomDomainWithOptions(domainName, headers, runtime);
}

DeleteCustomDomainResponse Alibabacloud_FC-Open20210406::Client::deleteCustomDomainWithOptions(shared_ptr<string> domainName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  domainName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(domainName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomDomain"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/custom-domains/") + string(*domainName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteCustomDomainResponse(callApi(params, req, runtime));
}

DeleteFunctionResponse Alibabacloud_FC-Open20210406::Client::deleteFunction(shared_ptr<string> serviceName, shared_ptr<string> functionName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteFunctionHeaders> headers = make_shared<DeleteFunctionHeaders>();
  return deleteFunctionWithOptions(serviceName, functionName, headers, runtime);
}

DeleteFunctionResponse Alibabacloud_FC-Open20210406::Client::deleteFunctionWithOptions(shared_ptr<string> serviceName,
                                                                                       shared_ptr<string> functionName,
                                                                                       shared_ptr<DeleteFunctionHeaders> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->ifMatch)) {
    (*realHeaders)["If-Match"] = Darabonba_Util::Client::toJSONString(headers->ifMatch);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunction"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteFunctionResponse(callApi(params, req, runtime));
}

DeleteFunctionAsyncInvokeConfigResponse Alibabacloud_FC-Open20210406::Client::deleteFunctionAsyncInvokeConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<DeleteFunctionAsyncInvokeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteFunctionAsyncInvokeConfigWithOptions(serviceName, functionName, request, headers, runtime);
}

DeleteFunctionAsyncInvokeConfigResponse Alibabacloud_FC-Open20210406::Client::deleteFunctionAsyncInvokeConfigWithOptions(shared_ptr<string> serviceName,
                                                                                                                         shared_ptr<string> functionName,
                                                                                                                         shared_ptr<DeleteFunctionAsyncInvokeConfigRequest> request,
                                                                                                                         shared_ptr<map<string, string>> headers,
                                                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunctionAsyncInvokeConfig"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/async-invoke-config"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteFunctionAsyncInvokeConfigResponse(callApi(params, req, runtime));
}

DeleteFunctionOnDemandConfigResponse Alibabacloud_FC-Open20210406::Client::deleteFunctionOnDemandConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<DeleteFunctionOnDemandConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteFunctionOnDemandConfigHeaders> headers = make_shared<DeleteFunctionOnDemandConfigHeaders>();
  return deleteFunctionOnDemandConfigWithOptions(serviceName, functionName, request, headers, runtime);
}

DeleteFunctionOnDemandConfigResponse Alibabacloud_FC-Open20210406::Client::deleteFunctionOnDemandConfigWithOptions(shared_ptr<string> serviceName,
                                                                                                                   shared_ptr<string> functionName,
                                                                                                                   shared_ptr<DeleteFunctionOnDemandConfigRequest> request,
                                                                                                                   shared_ptr<DeleteFunctionOnDemandConfigHeaders> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->ifMatch)) {
    (*realHeaders)["If-Match"] = Darabonba_Util::Client::toJSONString(headers->ifMatch);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteFunctionOnDemandConfig"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/on-demand-config"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteFunctionOnDemandConfigResponse(callApi(params, req, runtime));
}

DeleteLayerVersionResponse Alibabacloud_FC-Open20210406::Client::deleteLayerVersion(shared_ptr<string> layerName, shared_ptr<string> version) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteLayerVersionWithOptions(layerName, version, headers, runtime);
}

DeleteLayerVersionResponse Alibabacloud_FC-Open20210406::Client::deleteLayerVersionWithOptions(shared_ptr<string> layerName,
                                                                                               shared_ptr<string> version,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  layerName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(layerName));
  version = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(version));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLayerVersion"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/layers/") + string(*layerName) + string("/versions/") + string(*version))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteLayerVersionResponse(callApi(params, req, runtime));
}

DeleteServiceResponse Alibabacloud_FC-Open20210406::Client::deleteService(shared_ptr<string> serviceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteServiceHeaders> headers = make_shared<DeleteServiceHeaders>();
  return deleteServiceWithOptions(serviceName, headers, runtime);
}

DeleteServiceResponse Alibabacloud_FC-Open20210406::Client::deleteServiceWithOptions(shared_ptr<string> serviceName, shared_ptr<DeleteServiceHeaders> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->ifMatch)) {
    (*realHeaders)["If-Match"] = Darabonba_Util::Client::toJSONString(headers->ifMatch);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteService"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteServiceResponse(callApi(params, req, runtime));
}

DeleteServiceVersionResponse Alibabacloud_FC-Open20210406::Client::deleteServiceVersion(shared_ptr<string> serviceName, shared_ptr<string> versionId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteServiceVersionWithOptions(serviceName, versionId, headers, runtime);
}

DeleteServiceVersionResponse Alibabacloud_FC-Open20210406::Client::deleteServiceVersionWithOptions(shared_ptr<string> serviceName,
                                                                                                   shared_ptr<string> versionId,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  versionId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(versionId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteServiceVersion"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/versions/") + string(*versionId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteServiceVersionResponse(callApi(params, req, runtime));
}

DeleteTriggerResponse Alibabacloud_FC-Open20210406::Client::deleteTrigger(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<string> triggerName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<DeleteTriggerHeaders> headers = make_shared<DeleteTriggerHeaders>();
  return deleteTriggerWithOptions(serviceName, functionName, triggerName, headers, runtime);
}

DeleteTriggerResponse Alibabacloud_FC-Open20210406::Client::deleteTriggerWithOptions(shared_ptr<string> serviceName,
                                                                                     shared_ptr<string> functionName,
                                                                                     shared_ptr<string> triggerName,
                                                                                     shared_ptr<DeleteTriggerHeaders> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  triggerName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(triggerName));
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->ifMatch)) {
    (*realHeaders)["If-Match"] = Darabonba_Util::Client::toJSONString(headers->ifMatch);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTrigger"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/triggers/") + string(*triggerName))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteTriggerResponse(callApi(params, req, runtime));
}

DeleteVpcBindingResponse Alibabacloud_FC-Open20210406::Client::deleteVpcBinding(shared_ptr<string> serviceName, shared_ptr<string> vpcId) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deleteVpcBindingWithOptions(serviceName, vpcId, headers, runtime);
}

DeleteVpcBindingResponse Alibabacloud_FC-Open20210406::Client::deleteVpcBindingWithOptions(shared_ptr<string> serviceName,
                                                                                           shared_ptr<string> vpcId,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  vpcId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(vpcId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteVpcBinding"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/bindings/") + string(*vpcId))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeleteVpcBindingResponse(callApi(params, req, runtime));
}

DeregisterEventSourceResponse Alibabacloud_FC-Open20210406::Client::deregisterEventSource(shared_ptr<string> serviceName,
                                                                                          shared_ptr<string> functionName,
                                                                                          shared_ptr<string> sourceArn,
                                                                                          shared_ptr<DeregisterEventSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return deregisterEventSourceWithOptions(serviceName, functionName, sourceArn, request, headers, runtime);
}

DeregisterEventSourceResponse Alibabacloud_FC-Open20210406::Client::deregisterEventSourceWithOptions(shared_ptr<string> serviceName,
                                                                                                     shared_ptr<string> functionName,
                                                                                                     shared_ptr<string> sourceArn,
                                                                                                     shared_ptr<DeregisterEventSourceRequest> request,
                                                                                                     shared_ptr<map<string, string>> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  sourceArn = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(sourceArn));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeregisterEventSource"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/event-sources/") + string(*sourceArn))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return DeregisterEventSourceResponse(callApi(params, req, runtime));
}

GetAccountSettingsResponse Alibabacloud_FC-Open20210406::Client::getAccountSettings() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAccountSettingsWithOptions(headers, runtime);
}

GetAccountSettingsResponse Alibabacloud_FC-Open20210406::Client::getAccountSettingsWithOptions(shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAccountSettings"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/account-settings"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAccountSettingsResponse(callApi(params, req, runtime));
}

GetAliasResponse Alibabacloud_FC-Open20210406::Client::getAlias(shared_ptr<string> serviceName, shared_ptr<string> aliasName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getAliasWithOptions(serviceName, aliasName, headers, runtime);
}

GetAliasResponse Alibabacloud_FC-Open20210406::Client::getAliasWithOptions(shared_ptr<string> serviceName,
                                                                           shared_ptr<string> aliasName,
                                                                           shared_ptr<map<string, string>> headers,
                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  aliasName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(aliasName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAlias"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/aliases/") + string(*aliasName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAliasResponse(callApi(params, req, runtime));
}

GetCustomDomainResponse Alibabacloud_FC-Open20210406::Client::getCustomDomain(shared_ptr<string> domainName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getCustomDomainWithOptions(domainName, headers, runtime);
}

GetCustomDomainResponse Alibabacloud_FC-Open20210406::Client::getCustomDomainWithOptions(shared_ptr<string> domainName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  domainName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(domainName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomDomain"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/custom-domains/") + string(*domainName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomDomainResponse(callApi(params, req, runtime));
}

GetFunctionResponse Alibabacloud_FC-Open20210406::Client::getFunction(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<GetFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionWithOptions(serviceName, functionName, request, headers, runtime);
}

GetFunctionResponse Alibabacloud_FC-Open20210406::Client::getFunctionWithOptions(shared_ptr<string> serviceName,
                                                                                 shared_ptr<string> functionName,
                                                                                 shared_ptr<GetFunctionRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunction"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionResponse(callApi(params, req, runtime));
}

GetFunctionAsyncInvokeConfigResponse Alibabacloud_FC-Open20210406::Client::getFunctionAsyncInvokeConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<GetFunctionAsyncInvokeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionAsyncInvokeConfigWithOptions(serviceName, functionName, request, headers, runtime);
}

GetFunctionAsyncInvokeConfigResponse Alibabacloud_FC-Open20210406::Client::getFunctionAsyncInvokeConfigWithOptions(shared_ptr<string> serviceName,
                                                                                                                   shared_ptr<string> functionName,
                                                                                                                   shared_ptr<GetFunctionAsyncInvokeConfigRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionAsyncInvokeConfig"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/async-invoke-config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionAsyncInvokeConfigResponse(callApi(params, req, runtime));
}

GetFunctionCodeResponse Alibabacloud_FC-Open20210406::Client::getFunctionCode(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<GetFunctionCodeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionCodeWithOptions(serviceName, functionName, request, headers, runtime);
}

GetFunctionCodeResponse Alibabacloud_FC-Open20210406::Client::getFunctionCodeWithOptions(shared_ptr<string> serviceName,
                                                                                         shared_ptr<string> functionName,
                                                                                         shared_ptr<GetFunctionCodeRequest> request,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionCode"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/code"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionCodeResponse(callApi(params, req, runtime));
}

GetFunctionOnDemandConfigResponse Alibabacloud_FC-Open20210406::Client::getFunctionOnDemandConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<GetFunctionOnDemandConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getFunctionOnDemandConfigWithOptions(serviceName, functionName, request, headers, runtime);
}

GetFunctionOnDemandConfigResponse Alibabacloud_FC-Open20210406::Client::getFunctionOnDemandConfigWithOptions(shared_ptr<string> serviceName,
                                                                                                             shared_ptr<string> functionName,
                                                                                                             shared_ptr<GetFunctionOnDemandConfigRequest> request,
                                                                                                             shared_ptr<map<string, string>> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetFunctionOnDemandConfig"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/on-demand-config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetFunctionOnDemandConfigResponse(callApi(params, req, runtime));
}

GetLayerVersionResponse Alibabacloud_FC-Open20210406::Client::getLayerVersion(shared_ptr<string> layerName, shared_ptr<string> version) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLayerVersionWithOptions(layerName, version, headers, runtime);
}

GetLayerVersionResponse Alibabacloud_FC-Open20210406::Client::getLayerVersionWithOptions(shared_ptr<string> layerName,
                                                                                         shared_ptr<string> version,
                                                                                         shared_ptr<map<string, string>> headers,
                                                                                         shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  layerName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(layerName));
  version = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(version));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLayerVersion"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/layers/") + string(*layerName) + string("/versions/") + string(*version))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLayerVersionResponse(callApi(params, req, runtime));
}

GetLayerVersionByArnResponse Alibabacloud_FC-Open20210406::Client::getLayerVersionByArn(shared_ptr<string> arn) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getLayerVersionByArnWithOptions(arn, headers, runtime);
}

GetLayerVersionByArnResponse Alibabacloud_FC-Open20210406::Client::getLayerVersionByArnWithOptions(shared_ptr<string> arn, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  arn = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(arn));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLayerVersionByArn"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/layerarn/") + string(*arn))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLayerVersionByArnResponse(callApi(params, req, runtime));
}

GetProvisionConfigResponse Alibabacloud_FC-Open20210406::Client::getProvisionConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<GetProvisionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getProvisionConfigWithOptions(serviceName, functionName, request, headers, runtime);
}

GetProvisionConfigResponse Alibabacloud_FC-Open20210406::Client::getProvisionConfigWithOptions(shared_ptr<string> serviceName,
                                                                                               shared_ptr<string> functionName,
                                                                                               shared_ptr<GetProvisionConfigRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->target)) {
    (*body)["target"] = *request->target;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetProvisionConfig"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/provision-config"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetProvisionConfigResponse(callApi(params, req, runtime));
}

GetResourceTagsResponse Alibabacloud_FC-Open20210406::Client::getResourceTags(shared_ptr<GetResourceTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getResourceTagsWithOptions(request, headers, runtime);
}

GetResourceTagsResponse Alibabacloud_FC-Open20210406::Client::getResourceTagsWithOptions(shared_ptr<GetResourceTagsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    (*query)["resourceArn"] = *request->resourceArn;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetResourceTags"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/tag"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetResourceTagsResponse(callApi(params, req, runtime));
}

GetServiceResponse Alibabacloud_FC-Open20210406::Client::getService(shared_ptr<string> serviceName, shared_ptr<GetServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getServiceWithOptions(serviceName, request, headers, runtime);
}

GetServiceResponse Alibabacloud_FC-Open20210406::Client::getServiceWithOptions(shared_ptr<string> serviceName,
                                                                               shared_ptr<GetServiceRequest> request,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetService"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetServiceResponse(callApi(params, req, runtime));
}

GetStatefulAsyncInvocationResponse Alibabacloud_FC-Open20210406::Client::getStatefulAsyncInvocation(shared_ptr<string> serviceName,
                                                                                                    shared_ptr<string> functionName,
                                                                                                    shared_ptr<string> invocationId,
                                                                                                    shared_ptr<GetStatefulAsyncInvocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getStatefulAsyncInvocationWithOptions(serviceName, functionName, invocationId, request, headers, runtime);
}

GetStatefulAsyncInvocationResponse Alibabacloud_FC-Open20210406::Client::getStatefulAsyncInvocationWithOptions(shared_ptr<string> serviceName,
                                                                                                               shared_ptr<string> functionName,
                                                                                                               shared_ptr<string> invocationId,
                                                                                                               shared_ptr<GetStatefulAsyncInvocationRequest> request,
                                                                                                               shared_ptr<map<string, string>> headers,
                                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  invocationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(invocationId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetStatefulAsyncInvocation"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/stateful-async-invocations/") + string(*invocationId))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetStatefulAsyncInvocationResponse(callApi(params, req, runtime));
}

GetTriggerResponse Alibabacloud_FC-Open20210406::Client::getTrigger(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<string> triggerName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return getTriggerWithOptions(serviceName, functionName, triggerName, headers, runtime);
}

GetTriggerResponse Alibabacloud_FC-Open20210406::Client::getTriggerWithOptions(shared_ptr<string> serviceName,
                                                                               shared_ptr<string> functionName,
                                                                               shared_ptr<string> triggerName,
                                                                               shared_ptr<map<string, string>> headers,
                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  triggerName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(triggerName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTrigger"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/triggers/") + string(*triggerName))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTriggerResponse(callApi(params, req, runtime));
}

InvokeFunctionResponse Alibabacloud_FC-Open20210406::Client::invokeFunction(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<InvokeFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<InvokeFunctionHeaders> headers = make_shared<InvokeFunctionHeaders>();
  return invokeFunctionWithOptions(serviceName, functionName, request, headers, runtime);
}

InvokeFunctionResponse Alibabacloud_FC-Open20210406::Client::invokeFunctionWithOptions(shared_ptr<string> serviceName,
                                                                                       shared_ptr<string> functionName,
                                                                                       shared_ptr<InvokeFunctionRequest> request,
                                                                                       shared_ptr<InvokeFunctionHeaders> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcAccountId)) {
    (*realHeaders)["X-Fc-Account-Id"] = Darabonba_Util::Client::toJSONString(headers->xFcAccountId);
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcInvocationType)) {
    (*realHeaders)["x-fc-invocation-type"] = Darabonba_Util::Client::toJSONString(headers->xFcInvocationType);
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcLogType)) {
    (*realHeaders)["x-fc-log-type"] = Darabonba_Util::Client::toJSONString(headers->xFcLogType);
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcStatefulAsyncInvocationId)) {
    (*realHeaders)["x-fc-stateful-async-invocation-id"] = Darabonba_Util::Client::toJSONString(headers->xFcStatefulAsyncInvocationId);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", !request->body ? boost::any() : boost::any(*request->body)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("InvokeFunction"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/invocations"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("byte"))}
  }));
  return InvokeFunctionResponse(callApi(params, req, runtime));
}

ListAliasesResponse Alibabacloud_FC-Open20210406::Client::listAliases(shared_ptr<string> serviceName, shared_ptr<ListAliasesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listAliasesWithOptions(serviceName, request, headers, runtime);
}

ListAliasesResponse Alibabacloud_FC-Open20210406::Client::listAliasesWithOptions(shared_ptr<string> serviceName,
                                                                                 shared_ptr<ListAliasesRequest> request,
                                                                                 shared_ptr<map<string, string>> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    (*query)["prefix"] = *request->prefix;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startKey)) {
    (*query)["startKey"] = *request->startKey;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAliases"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/aliases"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAliasesResponse(callApi(params, req, runtime));
}

ListCustomDomainsResponse Alibabacloud_FC-Open20210406::Client::listCustomDomains(shared_ptr<ListCustomDomainsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listCustomDomainsWithOptions(request, headers, runtime);
}

ListCustomDomainsResponse Alibabacloud_FC-Open20210406::Client::listCustomDomainsWithOptions(shared_ptr<ListCustomDomainsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    (*query)["prefix"] = *request->prefix;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startKey)) {
    (*query)["startKey"] = *request->startKey;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomDomains"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/custom-domains"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomDomainsResponse(callApi(params, req, runtime));
}

ListEventSourcesResponse Alibabacloud_FC-Open20210406::Client::listEventSources(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<ListEventSourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listEventSourcesWithOptions(serviceName, functionName, request, headers, runtime);
}

ListEventSourcesResponse Alibabacloud_FC-Open20210406::Client::listEventSourcesWithOptions(shared_ptr<string> serviceName,
                                                                                           shared_ptr<string> functionName,
                                                                                           shared_ptr<ListEventSourcesRequest> request,
                                                                                           shared_ptr<map<string, string>> headers,
                                                                                           shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListEventSources"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/event-sources"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListEventSourcesResponse(callApi(params, req, runtime));
}

ListFunctionAsyncInvokeConfigsResponse Alibabacloud_FC-Open20210406::Client::listFunctionAsyncInvokeConfigs(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<ListFunctionAsyncInvokeConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFunctionAsyncInvokeConfigsWithOptions(serviceName, functionName, request, headers, runtime);
}

ListFunctionAsyncInvokeConfigsResponse Alibabacloud_FC-Open20210406::Client::listFunctionAsyncInvokeConfigsWithOptions(shared_ptr<string> serviceName,
                                                                                                                       shared_ptr<string> functionName,
                                                                                                                       shared_ptr<ListFunctionAsyncInvokeConfigsRequest> request,
                                                                                                                       shared_ptr<map<string, string>> headers,
                                                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFunctionAsyncInvokeConfigs"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/async-invoke-configs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionAsyncInvokeConfigsResponse(callApi(params, req, runtime));
}

ListFunctionsResponse Alibabacloud_FC-Open20210406::Client::listFunctions(shared_ptr<string> serviceName, shared_ptr<ListFunctionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listFunctionsWithOptions(serviceName, request, headers, runtime);
}

ListFunctionsResponse Alibabacloud_FC-Open20210406::Client::listFunctionsWithOptions(shared_ptr<string> serviceName,
                                                                                     shared_ptr<ListFunctionsRequest> request,
                                                                                     shared_ptr<map<string, string>> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    (*query)["prefix"] = *request->prefix;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startKey)) {
    (*query)["startKey"] = *request->startKey;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListFunctions"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListFunctionsResponse(callApi(params, req, runtime));
}

ListInstancesResponse Alibabacloud_FC-Open20210406::Client::listInstances(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<ListInstancesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<ListInstancesHeaders> headers = make_shared<ListInstancesHeaders>();
  return listInstancesWithOptions(serviceName, functionName, request, headers, runtime);
}

ListInstancesResponse Alibabacloud_FC-Open20210406::Client::listInstancesWithOptions(shared_ptr<string> serviceName,
                                                                                     shared_ptr<string> functionName,
                                                                                     shared_ptr<ListInstancesRequest> request,
                                                                                     shared_ptr<ListInstancesHeaders> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcAccountId)) {
    (*realHeaders)["X-Fc-Account-Id"] = Darabonba_Util::Client::toJSONString(headers->xFcAccountId);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListInstances"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/instances"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListInstancesResponse(callApi(params, req, runtime));
}

ListLayerVersionsResponse Alibabacloud_FC-Open20210406::Client::listLayerVersions(shared_ptr<string> layerName, shared_ptr<ListLayerVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLayerVersionsWithOptions(layerName, request, headers, runtime);
}

ListLayerVersionsResponse Alibabacloud_FC-Open20210406::Client::listLayerVersionsWithOptions(shared_ptr<string> layerName,
                                                                                             shared_ptr<ListLayerVersionsRequest> request,
                                                                                             shared_ptr<map<string, string>> headers,
                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  layerName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(layerName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startVersion)) {
    (*query)["startVersion"] = *request->startVersion;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLayerVersions"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/layers/") + string(*layerName) + string("/versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLayerVersionsResponse(callApi(params, req, runtime));
}

ListLayersResponse Alibabacloud_FC-Open20210406::Client::listLayers(shared_ptr<ListLayersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listLayersWithOptions(request, headers, runtime);
}

ListLayersResponse Alibabacloud_FC-Open20210406::Client::listLayersWithOptions(shared_ptr<ListLayersRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    (*query)["prefix"] = *request->prefix;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startKey)) {
    (*query)["startKey"] = *request->startKey;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLayers"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/layers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLayersResponse(callApi(params, req, runtime));
}

ListOnDemandConfigsResponse Alibabacloud_FC-Open20210406::Client::listOnDemandConfigs(shared_ptr<ListOnDemandConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listOnDemandConfigsWithOptions(request, headers, runtime);
}

ListOnDemandConfigsResponse Alibabacloud_FC-Open20210406::Client::listOnDemandConfigsWithOptions(shared_ptr<ListOnDemandConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    (*query)["prefix"] = *request->prefix;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startKey)) {
    (*query)["startKey"] = *request->startKey;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListOnDemandConfigs"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/on-demand-configs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListOnDemandConfigsResponse(callApi(params, req, runtime));
}

ListProvisionConfigsResponse Alibabacloud_FC-Open20210406::Client::listProvisionConfigs(shared_ptr<ListProvisionConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listProvisionConfigsWithOptions(request, headers, runtime);
}

ListProvisionConfigsResponse Alibabacloud_FC-Open20210406::Client::listProvisionConfigsWithOptions(shared_ptr<ListProvisionConfigsRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->serviceName)) {
    (*query)["serviceName"] = *request->serviceName;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListProvisionConfigs"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/provision-configs"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListProvisionConfigsResponse(callApi(params, req, runtime));
}

ListReservedCapacitiesResponse Alibabacloud_FC-Open20210406::Client::listReservedCapacities(shared_ptr<ListReservedCapacitiesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listReservedCapacitiesWithOptions(request, headers, runtime);
}

ListReservedCapacitiesResponse Alibabacloud_FC-Open20210406::Client::listReservedCapacitiesWithOptions(shared_ptr<ListReservedCapacitiesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListReservedCapacities"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/reserved-capacities"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListReservedCapacitiesResponse(callApi(params, req, runtime));
}

ListServiceVersionsResponse Alibabacloud_FC-Open20210406::Client::listServiceVersions(shared_ptr<string> serviceName, shared_ptr<ListServiceVersionsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServiceVersionsWithOptions(serviceName, request, headers, runtime);
}

ListServiceVersionsResponse Alibabacloud_FC-Open20210406::Client::listServiceVersionsWithOptions(shared_ptr<string> serviceName,
                                                                                                 shared_ptr<ListServiceVersionsRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->direction)) {
    (*query)["direction"] = *request->direction;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startKey)) {
    (*query)["startKey"] = *request->startKey;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServiceVersions"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/versions"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServiceVersionsResponse(callApi(params, req, runtime));
}

ListServicesResponse Alibabacloud_FC-Open20210406::Client::listServices(shared_ptr<ListServicesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listServicesWithOptions(request, headers, runtime);
}

ListServicesResponse Alibabacloud_FC-Open20210406::Client::listServicesWithOptions(shared_ptr<ListServicesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    (*query)["prefix"] = *request->prefix;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startKey)) {
    (*query)["startKey"] = *request->startKey;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListServices"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListServicesResponse(callApi(params, req, runtime));
}

ListStatefulAsyncInvocationsResponse Alibabacloud_FC-Open20210406::Client::listStatefulAsyncInvocations(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<ListStatefulAsyncInvocationsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listStatefulAsyncInvocationsWithOptions(serviceName, functionName, request, headers, runtime);
}

ListStatefulAsyncInvocationsResponse Alibabacloud_FC-Open20210406::Client::listStatefulAsyncInvocationsWithOptions(shared_ptr<string> serviceName,
                                                                                                                   shared_ptr<string> functionName,
                                                                                                                   shared_ptr<ListStatefulAsyncInvocationsRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->includePayload)) {
    (*query)["includePayload"] = *request->includePayload;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invocationIdPrefix)) {
    (*query)["invocationIdPrefix"] = *request->invocationIdPrefix;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortOrderByTime)) {
    (*query)["sortOrderByTime"] = *request->sortOrderByTime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startedTimeBegin)) {
    (*query)["startedTimeBegin"] = *request->startedTimeBegin;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startedTimeEnd)) {
    (*query)["startedTimeEnd"] = *request->startedTimeEnd;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    (*query)["status"] = *request->status;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListStatefulAsyncInvocations"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/stateful-async-invocations"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListStatefulAsyncInvocationsResponse(callApi(params, req, runtime));
}

ListTaggedResourcesResponse Alibabacloud_FC-Open20210406::Client::listTaggedResources(shared_ptr<ListTaggedResourcesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTaggedResourcesWithOptions(request, headers, runtime);
}

ListTaggedResourcesResponse Alibabacloud_FC-Open20210406::Client::listTaggedResourcesWithOptions(shared_ptr<ListTaggedResourcesRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTaggedResources"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/tags"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTaggedResourcesResponse(callApi(params, req, runtime));
}

ListTriggersResponse Alibabacloud_FC-Open20210406::Client::listTriggers(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<ListTriggersRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listTriggersWithOptions(serviceName, functionName, request, headers, runtime);
}

ListTriggersResponse Alibabacloud_FC-Open20210406::Client::listTriggersWithOptions(shared_ptr<string> serviceName,
                                                                                   shared_ptr<string> functionName,
                                                                                   shared_ptr<ListTriggersRequest> request,
                                                                                   shared_ptr<map<string, string>> headers,
                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->limit)) {
    (*query)["limit"] = *request->limit;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->nextToken)) {
    (*query)["nextToken"] = *request->nextToken;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->prefix)) {
    (*query)["prefix"] = *request->prefix;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startKey)) {
    (*query)["startKey"] = *request->startKey;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTriggers"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/triggers"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTriggersResponse(callApi(params, req, runtime));
}

ListVpcBindingsResponse Alibabacloud_FC-Open20210406::Client::listVpcBindings(shared_ptr<string> serviceName) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return listVpcBindingsWithOptions(serviceName, headers, runtime);
}

ListVpcBindingsResponse Alibabacloud_FC-Open20210406::Client::listVpcBindingsWithOptions(shared_ptr<string> serviceName, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListVpcBindings"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/bindings"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListVpcBindingsResponse(callApi(params, req, runtime));
}

PermanentDeleteLayerVersionResponse Alibabacloud_FC-Open20210406::Client::permanentDeleteLayerVersion(shared_ptr<string> userID, shared_ptr<string> layerName, shared_ptr<string> version) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return permanentDeleteLayerVersionWithOptions(userID, layerName, version, headers, runtime);
}

PermanentDeleteLayerVersionResponse Alibabacloud_FC-Open20210406::Client::permanentDeleteLayerVersionWithOptions(shared_ptr<string> userID,
                                                                                                                 shared_ptr<string> layerName,
                                                                                                                 shared_ptr<string> version,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  userID = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(userID));
  layerName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(layerName));
  version = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(version));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PermanentDeleteLayerVersion"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/adminlayers/") + string(*userID) + string("/") + string(*layerName) + string("/versions/") + string(*version))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PermanentDeleteLayerVersionResponse(callApi(params, req, runtime));
}

PublishLayerAsPublicResponse Alibabacloud_FC-Open20210406::Client::publishLayerAsPublic(shared_ptr<string> layerName, shared_ptr<string> version) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return publishLayerAsPublicWithOptions(layerName, version, headers, runtime);
}

PublishLayerAsPublicResponse Alibabacloud_FC-Open20210406::Client::publishLayerAsPublicWithOptions(shared_ptr<string> layerName,
                                                                                                   shared_ptr<string> version,
                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  layerName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(layerName));
  version = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(version));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishLayerAsPublic"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/layers/") + string(*layerName) + string("/versions/") + string(*version))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return PublishLayerAsPublicResponse(callApi(params, req, runtime));
}

PublishServiceVersionResponse Alibabacloud_FC-Open20210406::Client::publishServiceVersion(shared_ptr<string> serviceName, shared_ptr<PublishServiceVersionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PublishServiceVersionHeaders> headers = make_shared<PublishServiceVersionHeaders>();
  return publishServiceVersionWithOptions(serviceName, request, headers, runtime);
}

PublishServiceVersionResponse Alibabacloud_FC-Open20210406::Client::publishServiceVersionWithOptions(shared_ptr<string> serviceName,
                                                                                                     shared_ptr<PublishServiceVersionRequest> request,
                                                                                                     shared_ptr<PublishServiceVersionHeaders> headers,
                                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->ifMatch)) {
    (*realHeaders)["If-Match"] = Darabonba_Util::Client::toJSONString(headers->ifMatch);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PublishServiceVersion"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/versions"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PublishServiceVersionResponse(callApi(params, req, runtime));
}

PutFunctionAsyncInvokeConfigResponse Alibabacloud_FC-Open20210406::Client::putFunctionAsyncInvokeConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<PutFunctionAsyncInvokeConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return putFunctionAsyncInvokeConfigWithOptions(serviceName, functionName, request, headers, runtime);
}

PutFunctionAsyncInvokeConfigResponse Alibabacloud_FC-Open20210406::Client::putFunctionAsyncInvokeConfigWithOptions(shared_ptr<string> serviceName,
                                                                                                                   shared_ptr<string> functionName,
                                                                                                                   shared_ptr<PutFunctionAsyncInvokeConfigRequest> request,
                                                                                                                   shared_ptr<map<string, string>> headers,
                                                                                                                   shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<DestinationConfig>(request->destinationConfig)) {
    (*body)["destinationConfig"] = *request->destinationConfig;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAsyncEventAgeInSeconds)) {
    (*body)["maxAsyncEventAgeInSeconds"] = *request->maxAsyncEventAgeInSeconds;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxAsyncRetryAttempts)) {
    (*body)["maxAsyncRetryAttempts"] = *request->maxAsyncRetryAttempts;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->statefulInvocation)) {
    (*body)["statefulInvocation"] = *request->statefulInvocation;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutFunctionAsyncInvokeConfig"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/async-invoke-config"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutFunctionAsyncInvokeConfigResponse(callApi(params, req, runtime));
}

PutFunctionOnDemandConfigResponse Alibabacloud_FC-Open20210406::Client::putFunctionOnDemandConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<PutFunctionOnDemandConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<PutFunctionOnDemandConfigHeaders> headers = make_shared<PutFunctionOnDemandConfigHeaders>();
  return putFunctionOnDemandConfigWithOptions(serviceName, functionName, request, headers, runtime);
}

PutFunctionOnDemandConfigResponse Alibabacloud_FC-Open20210406::Client::putFunctionOnDemandConfigWithOptions(shared_ptr<string> serviceName,
                                                                                                             shared_ptr<string> functionName,
                                                                                                             shared_ptr<PutFunctionOnDemandConfigRequest> request,
                                                                                                             shared_ptr<PutFunctionOnDemandConfigHeaders> headers,
                                                                                                             shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->maximumInstanceCount)) {
    (*body)["maximumInstanceCount"] = *request->maximumInstanceCount;
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->ifMatch)) {
    (*realHeaders)["If-Match"] = Darabonba_Util::Client::toJSONString(headers->ifMatch);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutFunctionOnDemandConfig"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/on-demand-config"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutFunctionOnDemandConfigResponse(callApi(params, req, runtime));
}

PutProvisionConfigResponse Alibabacloud_FC-Open20210406::Client::putProvisionConfig(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<PutProvisionConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return putProvisionConfigWithOptions(serviceName, functionName, request, headers, runtime);
}

PutProvisionConfigResponse Alibabacloud_FC-Open20210406::Client::putProvisionConfigWithOptions(shared_ptr<string> serviceName,
                                                                                               shared_ptr<string> functionName,
                                                                                               shared_ptr<PutProvisionConfigRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<ScheduledActions>>(request->scheduledActions)) {
    (*body)["scheduledActions"] = *request->scheduledActions;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->target)) {
    (*body)["target"] = *request->target;
  }
  if (!Darabonba_Util::Client::isUnset<vector<TargetTrackingPolicies>>(request->targetTrackingPolicies)) {
    (*body)["targetTrackingPolicies"] = *request->targetTrackingPolicies;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("PutProvisionConfig"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/provision-config"))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return PutProvisionConfigResponse(callApi(params, req, runtime));
}

RegisterEventSourceResponse Alibabacloud_FC-Open20210406::Client::registerEventSource(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<RegisterEventSourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return registerEventSourceWithOptions(serviceName, functionName, request, headers, runtime);
}

RegisterEventSourceResponse Alibabacloud_FC-Open20210406::Client::registerEventSourceWithOptions(shared_ptr<string> serviceName,
                                                                                                 shared_ptr<string> functionName,
                                                                                                 shared_ptr<RegisterEventSourceRequest> request,
                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->sourceArn)) {
    (*body)["sourceArn"] = *request->sourceArn;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterEventSource"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/event-sources"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterEventSourceResponse(callApi(params, req, runtime));
}

StopStatefulAsyncInvocationResponse Alibabacloud_FC-Open20210406::Client::stopStatefulAsyncInvocation(shared_ptr<string> serviceName,
                                                                                                      shared_ptr<string> functionName,
                                                                                                      shared_ptr<string> invocationId,
                                                                                                      shared_ptr<StopStatefulAsyncInvocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return stopStatefulAsyncInvocationWithOptions(serviceName, functionName, invocationId, request, headers, runtime);
}

StopStatefulAsyncInvocationResponse Alibabacloud_FC-Open20210406::Client::stopStatefulAsyncInvocationWithOptions(shared_ptr<string> serviceName,
                                                                                                                 shared_ptr<string> functionName,
                                                                                                                 shared_ptr<string> invocationId,
                                                                                                                 shared_ptr<StopStatefulAsyncInvocationRequest> request,
                                                                                                                 shared_ptr<map<string, string>> headers,
                                                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  invocationId = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(invocationId));
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*query)["qualifier"] = *request->qualifier;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("StopStatefulAsyncInvocation"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/stateful-async-invocations/") + string(*invocationId))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return StopStatefulAsyncInvocationResponse(callApi(params, req, runtime));
}

TagResourceResponse Alibabacloud_FC-Open20210406::Client::tagResource(shared_ptr<TagResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return tagResourceWithOptions(request, headers, runtime);
}

TagResourceResponse Alibabacloud_FC-Open20210406::Client::tagResourceWithOptions(shared_ptr<TagResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    (*body)["resourceArn"] = *request->resourceArn;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->tags)) {
    (*body)["tags"] = *request->tags;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("TagResource"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/tag"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return TagResourceResponse(callApi(params, req, runtime));
}

UntagResourceResponse Alibabacloud_FC-Open20210406::Client::untagResource(shared_ptr<UntagResourceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return untagResourceWithOptions(request, headers, runtime);
}

UntagResourceResponse Alibabacloud_FC-Open20210406::Client::untagResourceWithOptions(shared_ptr<UntagResourceRequest> request, shared_ptr<map<string, string>> headers, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->all)) {
    (*body)["all"] = *request->all;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceArn)) {
    (*body)["resourceArn"] = *request->resourceArn;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->tagKeys)) {
    (*body)["tagKeys"] = *request->tagKeys;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UntagResource"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/tag"))},
    {"method", boost::any(string("DELETE"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("none"))}
  }));
  return UntagResourceResponse(callApi(params, req, runtime));
}

UpdateAliasResponse Alibabacloud_FC-Open20210406::Client::updateAlias(shared_ptr<string> serviceName, shared_ptr<string> aliasName, shared_ptr<UpdateAliasRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateAliasHeaders> headers = make_shared<UpdateAliasHeaders>();
  return updateAliasWithOptions(serviceName, aliasName, request, headers, runtime);
}

UpdateAliasResponse Alibabacloud_FC-Open20210406::Client::updateAliasWithOptions(shared_ptr<string> serviceName,
                                                                                 shared_ptr<string> aliasName,
                                                                                 shared_ptr<UpdateAliasRequest> request,
                                                                                 shared_ptr<UpdateAliasHeaders> headers,
                                                                                 shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  aliasName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(aliasName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<map<string, double>>(request->additionalVersionWeight)) {
    (*body)["additionalVersionWeight"] = *request->additionalVersionWeight;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->versionId)) {
    (*body)["versionId"] = *request->versionId;
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->ifMatch)) {
    (*realHeaders)["If-Match"] = Darabonba_Util::Client::toJSONString(headers->ifMatch);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateAlias"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/aliases/") + string(*aliasName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateAliasResponse(callApi(params, req, runtime));
}

UpdateCustomDomainResponse Alibabacloud_FC-Open20210406::Client::updateCustomDomain(shared_ptr<string> domainName, shared_ptr<UpdateCustomDomainRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<map<string, string>> headers = make_shared<map<string, string>>(map<string, string>());
  return updateCustomDomainWithOptions(domainName, request, headers, runtime);
}

UpdateCustomDomainResponse Alibabacloud_FC-Open20210406::Client::updateCustomDomainWithOptions(shared_ptr<string> domainName,
                                                                                               shared_ptr<UpdateCustomDomainRequest> request,
                                                                                               shared_ptr<map<string, string>> headers,
                                                                                               shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  domainName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(domainName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<CertConfig>(request->certConfig)) {
    (*body)["certConfig"] = *request->certConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->protocol)) {
    (*body)["protocol"] = *request->protocol;
  }
  if (!Darabonba_Util::Client::isUnset<RouteConfig>(request->routeConfig)) {
    (*body)["routeConfig"] = *request->routeConfig;
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !headers ? boost::any() : boost::any(*headers)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomDomain"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/custom-domains/") + string(*domainName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCustomDomainResponse(callApi(params, req, runtime));
}

UpdateFunctionResponse Alibabacloud_FC-Open20210406::Client::updateFunction(shared_ptr<string> serviceName, shared_ptr<string> functionName, shared_ptr<UpdateFunctionRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateFunctionHeaders> headers = make_shared<UpdateFunctionHeaders>();
  return updateFunctionWithOptions(serviceName, functionName, request, headers, runtime);
}

UpdateFunctionResponse Alibabacloud_FC-Open20210406::Client::updateFunctionWithOptions(shared_ptr<string> serviceName,
                                                                                       shared_ptr<string> functionName,
                                                                                       shared_ptr<UpdateFunctionRequest> request,
                                                                                       shared_ptr<UpdateFunctionHeaders> headers,
                                                                                       shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->instanceConcurrency)) {
    (*body)["InstanceConcurrency"] = *request->instanceConcurrency;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->caPort)) {
    (*body)["caPort"] = *request->caPort;
  }
  if (!Darabonba_Util::Client::isUnset<Code>(request->code)) {
    (*body)["code"] = *request->code;
  }
  if (!Darabonba_Util::Client::isUnset<CustomContainerConfig>(request->customContainerConfig)) {
    (*body)["customContainerConfig"] = *request->customContainerConfig;
  }
  if (!Darabonba_Util::Client::isUnset<CustomDNS>(request->customDNS)) {
    (*body)["customDNS"] = *request->customDNS;
  }
  if (!Darabonba_Util::Client::isUnset<CustomRuntimeConfig>(request->customRuntimeConfig)) {
    (*body)["customRuntimeConfig"] = *request->customRuntimeConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(request->environmentVariables)) {
    (*body)["environmentVariables"] = *request->environmentVariables;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->handler)) {
    (*body)["handler"] = *request->handler;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->initializationTimeout)) {
    (*body)["initializationTimeout"] = *request->initializationTimeout;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->initializer)) {
    (*body)["initializer"] = *request->initializer;
  }
  if (!Darabonba_Util::Client::isUnset<InstanceLifecycleConfig>(request->instanceLifecycleConfig)) {
    (*body)["instanceLifecycleConfig"] = *request->instanceLifecycleConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->instanceType)) {
    (*body)["instanceType"] = *request->instanceType;
  }
  if (!Darabonba_Util::Client::isUnset<vector<string>>(request->layers)) {
    (*body)["layers"] = *request->layers;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->memorySize)) {
    (*body)["memorySize"] = *request->memorySize;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->runtime)) {
    (*body)["runtime"] = *request->runtime;
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    (*body)["timeout"] = *request->timeout;
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->ifMatch)) {
    (*realHeaders)["If-Match"] = Darabonba_Util::Client::toJSONString(headers->ifMatch);
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcAccountId)) {
    (*realHeaders)["X-Fc-Account-Id"] = Darabonba_Util::Client::toJSONString(headers->xFcAccountId);
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcCodeChecksum)) {
    (*realHeaders)["x-fc-code-checksum"] = Darabonba_Util::Client::toJSONString(headers->xFcCodeChecksum);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateFunction"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateFunctionResponse(callApi(params, req, runtime));
}

UpdateServiceResponse Alibabacloud_FC-Open20210406::Client::updateService(shared_ptr<string> serviceName, shared_ptr<UpdateServiceRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateServiceHeaders> headers = make_shared<UpdateServiceHeaders>();
  return updateServiceWithOptions(serviceName, request, headers, runtime);
}

UpdateServiceResponse Alibabacloud_FC-Open20210406::Client::updateServiceWithOptions(shared_ptr<string> serviceName,
                                                                                     shared_ptr<UpdateServiceRequest> request,
                                                                                     shared_ptr<UpdateServiceHeaders> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->internetAccess)) {
    (*body)["internetAccess"] = *request->internetAccess;
  }
  if (!Darabonba_Util::Client::isUnset<LogConfig>(request->logConfig)) {
    (*body)["logConfig"] = *request->logConfig;
  }
  if (!Darabonba_Util::Client::isUnset<NASConfig>(request->nasConfig)) {
    (*body)["nasConfig"] = *request->nasConfig;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->role)) {
    (*body)["role"] = *request->role;
  }
  if (!Darabonba_Util::Client::isUnset<TracingConfig>(request->tracingConfig)) {
    (*body)["tracingConfig"] = *request->tracingConfig;
  }
  if (!Darabonba_Util::Client::isUnset<VPCConfig>(request->vpcConfig)) {
    (*body)["vpcConfig"] = *request->vpcConfig;
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->ifMatch)) {
    (*realHeaders)["If-Match"] = Darabonba_Util::Client::toJSONString(headers->ifMatch);
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcAccountId)) {
    (*realHeaders)["X-Fc-Account-Id"] = Darabonba_Util::Client::toJSONString(headers->xFcAccountId);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateService"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateServiceResponse(callApi(params, req, runtime));
}

UpdateTriggerResponse Alibabacloud_FC-Open20210406::Client::updateTrigger(shared_ptr<string> serviceName,
                                                                          shared_ptr<string> functionName,
                                                                          shared_ptr<string> triggerName,
                                                                          shared_ptr<UpdateTriggerRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  shared_ptr<UpdateTriggerHeaders> headers = make_shared<UpdateTriggerHeaders>();
  return updateTriggerWithOptions(serviceName, functionName, triggerName, request, headers, runtime);
}

UpdateTriggerResponse Alibabacloud_FC-Open20210406::Client::updateTriggerWithOptions(shared_ptr<string> serviceName,
                                                                                     shared_ptr<string> functionName,
                                                                                     shared_ptr<string> triggerName,
                                                                                     shared_ptr<UpdateTriggerRequest> request,
                                                                                     shared_ptr<UpdateTriggerHeaders> headers,
                                                                                     shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  serviceName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(serviceName));
  functionName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(functionName));
  triggerName = make_shared<string>(Alibabacloud_OpenApiUtil::Client::getEncodeParam(triggerName));
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    (*body)["description"] = *request->description;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->invocationRole)) {
    (*body)["invocationRole"] = *request->invocationRole;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->qualifier)) {
    (*body)["qualifier"] = *request->qualifier;
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->triggerConfig)) {
    (*body)["triggerConfig"] = *request->triggerConfig;
  }
  shared_ptr<map<string, string>> realHeaders = make_shared<map<string, string>>(map<string, string>());
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(headers->commonHeaders)) {
    realHeaders = headers->commonHeaders;
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->ifMatch)) {
    (*realHeaders)["If-Match"] = Darabonba_Util::Client::toJSONString(headers->ifMatch);
  }
  if (!Darabonba_Util::Client::isUnset<string>(headers->xFcAccountId)) {
    (*realHeaders)["X-Fc-Account-Id"] = Darabonba_Util::Client::toJSONString(headers->xFcAccountId);
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"headers", !realHeaders ? boost::any() : boost::any(*realHeaders)},
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTrigger"))},
    {"version", boost::any(string("2021-04-06"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/2021-04-06/services/") + string(*serviceName) + string("/functions/") + string(*functionName) + string("/triggers/") + string(*triggerName))},
    {"method", boost::any(string("PUT"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("ROA"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTriggerResponse(callApi(params, req, runtime));
}

