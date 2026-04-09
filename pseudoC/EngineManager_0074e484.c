// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: EngineManager
// Entry Point: 0074e484
// Size: 412 bytes
// Signature: undefined __thiscall EngineManager(EngineManager * this)


/* EngineManager::EngineManager() */

void __thiscall EngineManager::EngineManager(EngineManager *this)

{
  undefined4 *puVar1;
  
  *(undefined4 *)(this + 0x68) = 0x3f800000;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined ***)this = &PTR__EngineManager_00fdaad8;
  *(undefined ***)(this + 8) = &PTR__EngineManager_00fdab50;
  *(undefined ***)(this + 0x10) = &PTR__EngineManager_00fdab78;
  *(undefined ***)(this + 0x18) = &PTR__EngineManager_00fdaba0;
  *(undefined8 *)(this + 0x78) = 0;
  *(EngineManager **)(this + 0x70) = this + 0x78;
  *(undefined ***)(this + 0x20) = &PTR__EngineManager_00fdabc8;
  *(undefined ***)(this + 0x28) = &PTR__EngineManager_00fdac00;
  *(undefined8 *)(this + 0x90) = 0;
  *(EngineManager **)(this + 0x88) = this + 0x90;
  *(undefined **)(this + 0x30) = &DAT_00fdac28;
  *(undefined ***)(this + 0x38) = &PTR_notifyAppSuspended_00fdac40;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(EngineManager **)(this + 0xa0) = this + 0xa8;
  *(undefined ***)(this + 0xe8) = &PTR_getAllowsUnicode_00fdad78;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x188) = 0;
                    /* try { // try from 0074e568 to 0074e56b has its CatchHandler @ 0074e6c0 */
  HardwareScalability::HardwareScalability((HardwareScalability *)(this + 0x198));
  *(undefined8 *)(this + 800) = 0;
  *(undefined8 *)(this + 0x308) = 0;
  *(undefined8 *)(this + 0x300) = 0;
  *(undefined8 *)(this + 0x2f8) = 0;
  *(undefined8 *)(this + 0x330) = 0;
  *(undefined8 *)(this + 0x328) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0x2ad) = 0;
  *(undefined8 *)(this + 0x2bd) = 0;
  *(undefined8 *)(this + 0x2b5) = 0;
  *(undefined4 *)(this + 0x2c4) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined4 *)(this + 0x2a8) = 4;
  *(undefined2 *)(this + 0x2f0) = 1;
  this[0x2ac] = (EngineManager)0x0;
  *(undefined8 *)(this + 0x2d0) = 0;
  *(undefined8 *)(this + 0x2c8) = 0;
  *(undefined8 *)(this + 0x2e0) = 0;
  *(undefined8 *)(this + 0x2d8) = 0;
                    /* try { // try from 0074e5c4 to 0074e5cb has its CatchHandler @ 0074e620 */
  puVar1 = (undefined4 *)operator_new(0x10);
  *(undefined4 **)(this + 0x2e8) = puVar1;
  *(undefined4 *)(this + 0x338) = 0;
  this[0x33c] = (EngineManager)0x0;
  *(undefined4 *)(this + 0x40) = 1;
  *(undefined8 *)(this + 0x310) = 0xffffffff000001ff;
  puVar1[3] = 0;
  *puVar1 = 0x102d0;
  *(undefined8 *)(puVar1 + 1) = 0xa00000001;
  return;
}


