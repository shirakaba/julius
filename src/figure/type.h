#ifndef FIGURE_TYPE_H
#define FIGURE_TYPE_H

/**
 * @file
 * Figure types.
 */

/**
 * Figure types
 */
typedef enum {
    FIGURE_NONE = 0,
    FIGURE_IMMIGRANT = 1,
    FIGURE_EMIGRANT = 2,
    FIGURE_HOMELESS = 3,
    FIGURE_CART_PUSHER = 4,
    FIGURE_LABOR_SEEKER = 5,
    FIGURE_EXPLOSION = 6,
    FIGURE_TAX_COLLECTOR = 7,
    FIGURE_ENGINEER = 8,
    FIGURE_WAREHOUSEMAN = 9,
    FIGURE_PREFECT = 10,
    FIGURE_FORT_JAVELIN = 11,
    FIGURE_FORT_MOUNTED = 12,
    FIGURE_FORT_LEGIONARY = 13,
    FIGURE_FORT_STANDARD = 14,
    FIGURE_ACTOR = 15,
    FIGURE_GLADIATOR = 16,
    FIGURE_LION_TAMER = 17,
    FIGURE_CHARIOTEER = 18,
    FIGURE_TRADE_CARAVAN = 19,
    FIGURE_TRADE_SHIP = 20,
    FIGURE_TRADE_CARAVAN_DONKEY = 21,
    FIGURE_PROTESTER = 22,
    FIGURE_CRIMINAL = 23,
    FIGURE_RIOTER = 24,
    FIGURE_FISHING_BOAT = 25,
    FIGURE_MARKET_TRADER = 26,
    FIGURE_PRIEST = 27,
    FIGURE_SCHOOL_CHILD = 28,
    FIGURE_TEACHER = 29,
    FIGURE_LIBRARIAN = 30,
    FIGURE_BARBER = 31,
    FIGURE_BATHHOUSE_WORKER = 32,
    FIGURE_DOCTOR = 33,
    FIGURE_SURGEON = 34,
    FIGURE_WORKER = 35,
    FIGURE_MAP_FLAG = 36,
    FIGURE_FLOTSAM = 37,
    FIGURE_DOCKER = 38,
    FIGURE_MARKET_BUYER = 39,
    FIGURE_PATRICIAN = 40,
    FIGURE_INDIGENOUS_NATIVE = 41,
    FIGURE_TOWER_SENTRY = 42,
    FIGURE_ENEMY43_SPEAR = 43,
    FIGURE_ENEMY44_SWORD = 44,
    FIGURE_ENEMY45_SWORD = 45,
    FIGURE_ENEMY46_CAMEL = 46,
    FIGURE_ENEMY47_ELEPHANT = 47,
    FIGURE_ENEMY48_CHARIOT = 48,
    FIGURE_ENEMY49_FAST_SWORD = 49,
    FIGURE_ENEMY50_SWORD = 50,
    FIGURE_ENEMY51_SPEAR = 51,
    FIGURE_ENEMY52_MOUNTED_ARCHER = 52,
    FIGURE_ENEMY53_AXE = 53,
    FIGURE_ENEMY54_GLADIATOR = 54,
    FIGURE_ENEMY_CAESAR_JAVELIN = 55,
    FIGURE_ENEMY_CAESAR_MOUNTED = 56,
    FIGURE_ENEMY_CAESAR_LEGIONARY = 57,
    FIGURE_NATIVE_TRADER = 58,
    FIGURE_ARROW = 59,
    FIGURE_JAVELIN = 60,
    FIGURE_BOLT = 61,
    FIGURE_BALLISTA = 62,
    FIGURE_CREATURE = 63,
    FIGURE_MISSIONARY = 64,
    FIGURE_FISH_GULLS = 65,
    FIGURE_DELIVERY_BOY = 66,
    FIGURE_SHIPWRECK = 67,
    FIGURE_SHEEP = 68,
    FIGURE_WOLF = 69,
    FIGURE_ZEBRA = 70,
    FIGURE_SPEAR = 71,
    FIGURE_HIPPODROME_HORSES = 72
} figure_type;

typedef enum {
    ENEMY_0_BARBARIAN = 0,
    ENEMY_1_NUMIDIAN = 1,
    ENEMY_2_GAUL = 2,
    ENEMY_3_CELT = 3,
    ENEMY_4_GOTH = 4,
    ENEMY_5_PERGAMUM = 5,
    ENEMY_6_SELEUCID = 6,
    ENEMY_7_ETRUSCAN = 7,
    ENEMY_8_GREEK = 8,
    ENEMY_9_EGYPTIAN = 9,
    ENEMY_10_CARTHAGINIAN = 10,
    ENEMY_11_CAESAR = 11
} enemy_type;

enum {
    FIGURE_STATE_ALIVE = 1,
    FIGURE_STATE_DEAD = 2
};

enum {
    FigureTerrainUsage_Any = 0,
    FigureTerrainUsage_Roads = 1,
    FigureTerrainUsage_Enemy = 2,
    FigureTerrainUsage_PreferRoads = 3,
    FigureTerrainUsage_Walls = 4,
    FigureTerrainUsage_Animal = 5,
};

#endif // FIGURE_TYPE_H
