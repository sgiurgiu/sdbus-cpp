
/*
 * This file was automatically generated by sdbus-c++-xml2cpp; DO NOT EDIT!
 */

#ifndef __sdbuscpp__examplemanager_planet1_client_glue_h__proxy__H__
#define __sdbuscpp__examplemanager_planet1_client_glue_h__proxy__H__

#include <sdbus-c++/sdbus-c++.h>
#include <string>
#include <tuple>

namespace org {
namespace sdbuscpp {
namespace ExampleManager {

class Planet1_proxy
{
public:
    static constexpr const char* INTERFACE_NAME = "org.sdbuscpp.ExampleManager.Planet1";

protected:
    Planet1_proxy(sdbus::IProxy& proxy)
        : proxy_(&proxy)
    {
    }

    Planet1_proxy(const Planet1_proxy&) = delete;
    Planet1_proxy& operator=(const Planet1_proxy&) = delete;
    Planet1_proxy(Planet1_proxy&&) = default;
    Planet1_proxy& operator=(Planet1_proxy&&) = default;

    ~Planet1_proxy() = default;

    void registerProxy()
    {
    }

public:
    uint64_t GetPopulation()
    {
        uint64_t result;
        proxy_->callMethod("GetPopulation").onInterface(INTERFACE_NAME).storeResultsTo(result);
        return result;
    }

public:
    std::string Name()
    {
        return proxy_->getProperty("Name").onInterface(INTERFACE_NAME).get<std::string>();
    }

private:
    sdbus::IProxy* proxy_;
};

}}} // namespaces

#endif
