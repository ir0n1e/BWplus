#include "script_component.hpp"

ADDON = false;

PREP(serverInit);
PREP(clientInit);
PREP(canConnectSatcom);
PREP(connectSatcom);
PREP(disConnectSatcom);
PREP(getConnectionQuality);
PREP(showColoredQuality);
PREP(isConnected);
PREP(buildSatcom);
PREP(dismantleSatcom);
PREP(setTFRmulti);

ADDON = true;
