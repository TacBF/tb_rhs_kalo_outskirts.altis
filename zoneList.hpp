#include "tb_defines.hpp"
//Mission: tb_Anthrakia_Docks
zoneList[] =
{
//ID and PROFILE = not used
//LINK = zones capturable after this one
//DEPEND = auto-capture/enable upon these zones being held
//DEPQTY = quantity of zones required for DEPEND i.e. can have only 2 of the 3 zones in DEPEND required
//SYNC = required zones for progression

//ID TEAM          	SPAWNTYPE       LINK         SYNC   PROFILE   DEPEND     DEPQTY  ZONE_DESC
{ 0, 0           , 0          ,    	{}         	, {}    , 1      , {}        , 0      },

{ 1, TEAM_BLUE, 	SPAWN_XRAY ,    {2}      	, {}    , 1      , {}        , 0    , "%3" },

{ 2, TEAM_BLUE, 	SPAWN_NEVER,    {1,3}      	, {}   	, 1      , {}        , 0    , "Paros" },

{ 3, TEAM_NEUTRAL, 	SPAWN_NEVER,    {2,4}  		, {}    , 1      , {}        , 0    , "Kalochori" },

{ 4, TEAM_NEUTRAL, 	SPAWN_NEVER,    {3,5}      	, {}   	, 1      , {}        , 0    , "Outskirts" }, // centre marketplace

{ 5, TEAM_NEUTRAL, 	SPAWN_NEVER,    {4,6}      	, {}   	, 1      , {}        , 0    , "Construction" },

{ 6, TEAM_NEUTRAL, 	SPAWN_NEVER,    {5,7}		, {}    , 1      , {}        , 0    , "Military Post" },

{ 7, TEAM_NEUTRAL, 	SPAWN_NEVER ,    {6,8}      , {}    , 1      , {}        , 0    , "Staging Point" },

{ 8, TEAM_RED, 		SPAWN_NEVER,    {7,9}		, {}    , 1      , {}        , 0    , "Junkyard" },

{ 9, TEAM_RED, 	SPAWN_XRAY ,    {8}      	, {}    , 1      , {}        , 0    , "%3" },

{ 10, TEAM_RED, 	SPAWN_INSTANT ,    {}      	, {}    , 1      , {7,9}        , 2    , "Forward Base" },

{ 11, TEAM_BLUE, 	SPAWN_INSTANT ,    {}      	, {}    , 1      , {1,3}        , 2    , "Forward Base" }


};
