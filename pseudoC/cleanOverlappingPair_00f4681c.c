// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cleanOverlappingPair
// Entry Point: 00f4681c
// Size: 80 bytes
// Signature: undefined __thiscall cleanOverlappingPair(btHashedOverlappingPairCache * this, btBroadphasePair * param_1, btDispatcher * param_2)


/* btHashedOverlappingPairCache::cleanOverlappingPair(btBroadphasePair&, btDispatcher*) */

btHashedOverlappingPairCache * __thiscall
btHashedOverlappingPairCache::cleanOverlappingPair
          (btHashedOverlappingPairCache *this,btBroadphasePair *param_1,btDispatcher *param_2)

{
  if ((param_2 != (btDispatcher *)0x0) &&
     (this = *(btHashedOverlappingPairCache **)(param_1 + 0x10),
     (undefined8 *)this != (undefined8 *)0x0)) {
    (***(code ***)this)();
    this = (btHashedOverlappingPairCache *)
           (**(code **)(*(long *)param_2 + 0x78))(param_2,*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  return this;
}


