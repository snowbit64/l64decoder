// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: btDbvtBroadphase
// Entry Point: 00f43940
// Size: 256 bytes
// Signature: undefined __thiscall btDbvtBroadphase(btDbvtBroadphase * this, btOverlappingPairCache * param_1)


/* btDbvtBroadphase::btDbvtBroadphase(btOverlappingPairCache*) */

void __thiscall
btDbvtBroadphase::btDbvtBroadphase(btDbvtBroadphase *this,btOverlappingPairCache *param_1)

{
  this[0x40] = (btDbvtBroadphase)0x1;
  this[0x60] = (btDbvtBroadphase)0x1;
  this[0xa0] = (btDbvtBroadphase)0x1;
  this[0xc0] = (btDbvtBroadphase)0x1;
  *(undefined8 *)(this + 0x2c) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined ***)this = &PTR__btDbvtBroadphase_01018e18;
  *(undefined8 *)(this + 0x18) = 0xffffffff;
  *(undefined8 *)(this + 0x8c) = 0;
  *(undefined2 *)(this + 0x11d) = 0x100;
  *(undefined8 *)(this + 0xac) = 0;
  *(undefined8 *)(this + 0x78) = 0xffffffff;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x80) = 0;
  this[0x11c] = (btDbvtBroadphase)(param_1 == (btOverlappingPairCache *)0x0);
  *(undefined4 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xf4) = 0xa00000000;
  *(undefined8 *)(this + 0xec) = 0x100000000;
  *(undefined8 *)(this + 0x104) = 0;
  *(undefined8 *)(this + 0xfc) = 1;
  *(undefined4 *)(this + 0x10c) = 0;
  if (param_1 == (btOverlappingPairCache *)0x0) {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    param_1 = (btOverlappingPairCache *)(*(code *)PTR_FUN_01048e38)(0x78,0x10);
    btHashedOverlappingPairCache::btHashedOverlappingPairCache
              ((btHashedOverlappingPairCache *)param_1);
  }
  *(undefined4 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(btOverlappingPairCache **)(this + 0xe0) = param_1;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  return;
}


