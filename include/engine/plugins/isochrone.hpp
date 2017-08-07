#ifndef ISOCHRONEPLUGIN_HPP
#define ISOCHRONEPLUGIN_HPP

#include "engine/algorithm.hpp"
#include "engine/api/isochrone_parameters.hpp"
#include "engine/plugins/plugin_base.hpp"
#include "engine/routing_algorithms.hpp"
#include "engine/search_engine_data.hpp"

#include <string>

/**
 * TODO
 */
namespace osrm
{
namespace engine
{
namespace plugins
{

class IsochronePlugin final : public BasePlugin
{
  private:
    mutable SearchEngineData<routing_algorithms::ch::Algorithm> heaps;

  public:
    explicit IsochronePlugin();

    Status HandleRequest(const RoutingAlgorithmsInterface &algorithms,
                         const api::IsochroneParameters &parameters,
                         std::string &pbf_buffer) const;
};
}
}
}

#endif /* TILEPLUGIN_HPP */
