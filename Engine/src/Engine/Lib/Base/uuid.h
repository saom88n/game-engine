#ifndef UUID_H
#define UUID_H

#include <stdlib.h>
#include <stdint.h>
#include "types.h"

#include "util.h"

#define IMAX_BITS(m) ((m)/((m)%255+1) / 255%255*8 + 7-86/((m)%255+12))
#define RAND_MAX_WIDTH IMAX_BITS(RAND_MAX)
_Static_assert((RAND_MAX & (RAND_MAX + 1u)) == 0, "RAND_MAX not a Mersenne number");

uint64_t rand_uint64(void) {
  uint64_t r = 0;
  for (int i = 0; i < 64; i += RAND_MAX_WIDTH) {
    r <<= RAND_MAX_WIDTH;
    r ^= (unsigned) rand();
  }
  return r;
}

namespace Engine {

    class UUID {    
    public:		  
      UUID() : m_UUID(rand_uint64()){}
		  UUID(u64 uuid) : m_UUID(uuid) {};
		  UUID(const UUID&) = default;
      
		  operator u64() const { return m_UUID; }
     
  private:
		  u64 m_UUID;
	};
    
}

#endif
