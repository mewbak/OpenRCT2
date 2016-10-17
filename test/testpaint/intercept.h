#pragma region Copyright (c) 2014-2016 OpenRCT2 Developers
/*****************************************************************************
 * OpenRCT2, an open source clone of Roller Coaster Tycoon 2.
 *
 * OpenRCT2 is the work of many authors, a full list can be found in contributors.md
 * For more information, visit https://github.com/OpenRCT2/OpenRCT2
 *
 * OpenRCT2 is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * A full copy of the GNU General Public License can be found in licence.txt
 *****************************************************************************/
#pragma endregion

#ifndef _TEST_PAINT_INTERCEPT_H_
#define _TEST_PAINT_INTERCEPT_H_

#include "../../src/common.h"

#ifdef __cplusplus
extern "C"
{
#endif
    #include "../../src/interface/colour.h"
    #include "../../src/paint/paint.h"
    #include "../../src/paint/map_element/map_element.h"
#ifdef __cplusplus
}
#endif

#define gRideEntries                RCT2_ADDRESS(RCT2_ADDRESS_RIDE_ENTRIES,                rct_ride_entry*)
#define gCurrentRotation        RCT2_GLOBAL(RCT2_ADDRESS_CURRENT_ROTATION, uint8)



enum {
    TEST_SUCCESS,
    TEST_FAILED,
    TEST_SKIPPED,
};

#ifdef __cplusplus
extern "C"
{
#endif
    void intercept_reset_environment();
    void intercept_reset_segment_heights();
    void intercept_reset_tunnels();

    int generatePaintCode(uint8 rideType);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus

#include <vector>

namespace Intercept2
{
    static const uint32 DEFAULT_SCHEME_TRACK = COLOUR_GREY << 19 | COLOUR_WHITE << 24 | 0xA0000000;
    static const uint32 DEFAULT_SCHEME_SUPPORTS = COLOUR_LIGHT_BLUE << 19 | COLOUR_ICY_BLUE << 24 | 0xA0000000;
    static const uint32 DEFAULT_SCHEME_MISC = COLOUR_DARK_PURPLE << 19 | COLOUR_LIGHT_PURPLE << 24 | 0xA0000000;
    static const uint32 DEFAULT_SCHEME_3 = COLOUR_BRIGHT_PURPLE << 19 | COLOUR_DARK_BLUE << 24 | 0xA0000000;



    void ResetEnvironment();
    void ResetTunnels();
    void ResetSupportHeights();
}

#endif

#endif // #endif _TEST_PAINT_INTERCEPT_H_
