// This file can be included several times.

#ifndef MACRO_CONFIG_INT
#error "The config macros must be defined"
#define MACRO_CONFIG_INT(Gcme, ScriptName, Def, Min, Max, Save, Desc) ;
#define MACRO_CONFIG_COL(Gcme, ScriptName, Def, Save, Desc) ;
#define MACRO_CONFIG_STR(Gcme, ScriptName, Len, Def, Save, Desc) ;
#endif

// Gun/shotgun muzzle flash (drawn with the shooter; can appear behind other tees)
MACRO_CONFIG_INT(GcGunMuzzleFlash, gc_gun_muzzle_flash, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show gun and shotgun muzzle flash when firing")

// Gun bullet impact: vanilla spawns 10 DamageInd net events (star sprites) in a fan — can draw behind other tees
MACRO_CONFIG_INT(GcGunHitDamageInd, gc_gun_hit_damage_ind, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show star burst when a gun bullet hits (10-event DamageInd; also hides client prediction of the same)")

// Vanilla hammer hit sprite (SPRITE_PART_HIT01) on connect — same scale as stock DDNet at 120; 0 disables
MACRO_CONFIG_INT(GcHammerHitVanillaBurst, gc_hammer_hit_vanilla_burst, 120, 0, 220, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Vanilla hammer hit burst size (0 off, ~120 stock)")

// Sparkle burst when a hammer swing connects on another tee (client-side visuals)
MACRO_CONFIG_INT(GcHammerHitStars, gc_hammer_hit_stars, 1, 0, 1, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Show sparkle stars on hammer hit (tee vs tee)")
MACRO_CONFIG_INT(GcHammerHitStarsCount, gc_hammer_hit_stars_count, 18, 4, 40, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Number of sparkle particles per hammer hit")
MACRO_CONFIG_INT(GcHammerHitStarsSpread, gc_hammer_hit_stars_spread, 55, 10, 120, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Random placement radius around the hit (world units)")
MACRO_CONFIG_INT(GcHammerHitStarsSize, gc_hammer_hit_stars_size, 24, 6, 50, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Sparkle size (approx. max diameter in world units)")
MACRO_CONFIG_INT(GcHammerHitStarsLife, gc_hammer_hit_stars_life, 320, 80, 700, CFGFLAG_CLIENT | CFGFLAG_SAVE, "Sparkle lifetime in milliseconds")
