#include <fastdds/rtps/writer/LocatorSelectorSender.hpp>
#include <fastdds/rtps/writer/RTPSWriter.h>

namespace eprosima {
namespace fastdds {
namespace rtps {

bool LocatorSelectorSender::send(
        CDRMessage_t* message,
        std::chrono::steady_clock::time_point max_blocking_time_point) const
{
    return writer_.send_nts(message, *this, max_blocking_time_point);
}

} // namespace rtps
} // namespace fastdds
} // namespace eprosima
