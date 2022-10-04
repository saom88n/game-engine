#ifndef UUID_H
#define UUID_H

#include "types.h"

namespace Engine {

    class UUID {    
    public:
		UUID();
		UUID(u64 uuid);
		UUID(const UUID&) = default;

		operator u64() const { return m_UUID; }
	private:
		u64 m_UUID;
	};
    
}

#endif