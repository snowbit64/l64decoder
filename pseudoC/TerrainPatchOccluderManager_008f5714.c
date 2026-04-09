// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: TerrainPatchOccluderManager
// Entry Point: 008f5714
// Size: 236 bytes
// Signature: undefined __thiscall TerrainPatchOccluderManager(TerrainPatchOccluderManager * this)


/* TerrainPatchOccluderManager::TerrainPatchOccluderManager() */

void __thiscall
TerrainPatchOccluderManager::TerrainPatchOccluderManager(TerrainPatchOccluderManager *this)

{
  undefined8 uVar1;
  
  *(undefined8 *)this = 0xabcdef;
  Event::Event((Event *)(this + 8),true,true);
  *(undefined8 *)(this + 0x68) = 0;
                    /* try { // try from 008f5754 to 008f575b has its CatchHandler @ 008f5800 */
  Mutex::Mutex((Mutex *)(this + 0x70),true);
  uVar1 = NEON_fmov(0x41200000,4);
  this[0xa4] = (TerrainPatchOccluderManager)0x0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0x98) = 0x3f80000000000001;
  *(undefined8 *)(this + 0xac) = uVar1;
  *(undefined8 *)(this + 0xbc) = uVar1;
  *(undefined8 *)(this + 0xcc) = uVar1;
  *(undefined8 *)(this + 0xb4) = 0x643f800000;
  *(undefined8 *)(this + 0xc4) = 0x643f800000;
  *(undefined8 *)(this + 0xd4) = 0x643f800000;
  *(undefined8 *)(this + 0xdc) = uVar1;
  *(undefined4 *)(this + 0xa0) = 100;
  *(undefined4 *)(this + 0xe4) = 0x3f800000;
  *(undefined4 *)(this + 0xa8) = 100;
  *(undefined4 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0xf8) = 0x100000000;
  this[0x133] = (TerrainPatchOccluderManager)0x1;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined4 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined4 *)(this + 0x170) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  this[0x188] = (TerrainPatchOccluderManager)0x0;
  *(undefined4 *)(this + 0x12f) = 0;
  return;
}


