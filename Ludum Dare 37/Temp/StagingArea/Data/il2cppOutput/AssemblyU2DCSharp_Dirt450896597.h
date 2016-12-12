#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Sprite[]
struct SpriteU5BU5D_t3359083662;
// UnityEngine.Collider2D
struct Collider2D_t646061738;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t1209076198;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Dirt
struct  Dirt_t450896597  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Sprite[] Dirt::dirtSprites
	SpriteU5BU5D_t3359083662* ___dirtSprites_2;
	// UnityEngine.Collider2D Dirt::dirtCollider
	Collider2D_t646061738 * ___dirtCollider_3;
	// UnityEngine.SpriteRenderer Dirt::dirtSpriteRenderer
	SpriteRenderer_t1209076198 * ___dirtSpriteRenderer_4;

public:
	inline static int32_t get_offset_of_dirtSprites_2() { return static_cast<int32_t>(offsetof(Dirt_t450896597, ___dirtSprites_2)); }
	inline SpriteU5BU5D_t3359083662* get_dirtSprites_2() const { return ___dirtSprites_2; }
	inline SpriteU5BU5D_t3359083662** get_address_of_dirtSprites_2() { return &___dirtSprites_2; }
	inline void set_dirtSprites_2(SpriteU5BU5D_t3359083662* value)
	{
		___dirtSprites_2 = value;
		Il2CppCodeGenWriteBarrier(&___dirtSprites_2, value);
	}

	inline static int32_t get_offset_of_dirtCollider_3() { return static_cast<int32_t>(offsetof(Dirt_t450896597, ___dirtCollider_3)); }
	inline Collider2D_t646061738 * get_dirtCollider_3() const { return ___dirtCollider_3; }
	inline Collider2D_t646061738 ** get_address_of_dirtCollider_3() { return &___dirtCollider_3; }
	inline void set_dirtCollider_3(Collider2D_t646061738 * value)
	{
		___dirtCollider_3 = value;
		Il2CppCodeGenWriteBarrier(&___dirtCollider_3, value);
	}

	inline static int32_t get_offset_of_dirtSpriteRenderer_4() { return static_cast<int32_t>(offsetof(Dirt_t450896597, ___dirtSpriteRenderer_4)); }
	inline SpriteRenderer_t1209076198 * get_dirtSpriteRenderer_4() const { return ___dirtSpriteRenderer_4; }
	inline SpriteRenderer_t1209076198 ** get_address_of_dirtSpriteRenderer_4() { return &___dirtSpriteRenderer_4; }
	inline void set_dirtSpriteRenderer_4(SpriteRenderer_t1209076198 * value)
	{
		___dirtSpriteRenderer_4 = value;
		Il2CppCodeGenWriteBarrier(&___dirtSpriteRenderer_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
