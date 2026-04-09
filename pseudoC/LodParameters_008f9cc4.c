// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LodParameters
// Entry Point: 008f9cc4
// Size: 28 bytes
// Signature: undefined __thiscall LodParameters(LodParameters * this)


/* TerrainPatchOccluderManager::LodParameters::LodParameters() */

void __thiscall TerrainPatchOccluderManager::LodParameters::LodParameters(LodParameters *this)

{
  undefined8 uVar1;
  
  uVar1 = NEON_fmov(0x41200000,4);
  *(undefined4 *)this = 100;
  *(undefined8 *)(this + 4) = uVar1;
  *(undefined4 *)(this + 0xc) = 0x3f800000;
  return;
}


