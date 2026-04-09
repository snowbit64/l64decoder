// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Parameters
// Entry Point: 008f9ce0
// Size: 80 bytes
// Signature: undefined __thiscall Parameters(Parameters * this)


/* TerrainPatchOccluderManager::Parameters::Parameters() */

void __thiscall TerrainPatchOccluderManager::Parameters::Parameters(Parameters *this)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41200000,4);
  this[0xc] = (Parameters)0x0;
  *(undefined8 *)this = 0x3f80000000000001;
  *(undefined4 *)(this + 8) = 100;
  *(undefined4 *)(this + 0x10) = 100;
  *(undefined8 *)(this + 0x14) = uVar1;
  *(undefined8 *)(this + 0x1c) = 0x643f800000;
  *(undefined8 *)(this + 0x2c) = 0x643f800000;
  *(undefined8 *)(this + 0x3c) = 0x643f800000;
  *(undefined8 *)(this + 0x24) = uVar1;
  *(undefined8 *)(this + 0x34) = uVar1;
  *(undefined8 *)(this + 0x44) = uVar1;
  *(undefined4 *)(this + 0x4c) = 0x3f800000;
  return;
}


