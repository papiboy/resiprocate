#if !defined(SIPSESSION_HXX)
#define SIPSESSION_HXX


#include "sip2/util/Timer.hxx"

namespace Vocal2
{
class SipMessage;

class SipSession
{
public:
  void processRequest(SipMessage* msg);  
  void processResponse(SipMessage* msg);

private: 
      UInt64 mTimeTillExpiration; // for session timer 
   
      typedef enum 
      {
         Invalid=0,
         Trying,
         Proceeding,
         Early,
         Confirmed,
         Termininated
      } State;
      
      State mState;
};
 
}


#endif


/* ====================================================================
 * The Vovida Software License, Version 1.0 
 */

