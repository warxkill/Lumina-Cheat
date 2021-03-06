#ifndef game_h

#define game_h

#include "../sdk/structs/Entity.h"
#include "../sdk/structs/mystructs.h"
#include <vector>

namespace game {

	extern std::vector<player_t*> players;

	extern player_t* localPlayer;

	void init();

	void updatePlayerCollection();

	player_t* getPlayerFromHandle(uintptr_t pointer);

	Entity* getLocalPlayer();

	bool isEnvironmentValid();
}

#endif // !game_h