// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remap
// Entry Point: 009e26a0
// Size: 24 bytes
// Signature: undefined __cdecl remap(float param_1, float param_2, float param_3, float param_4, float param_5)


/* ProceduralPlacementRemapMask::remap(float, float, float, float, float) */

undefined4
ProceduralPlacementRemapMask::remap
          (float param_1,float param_2,float param_3,float param_4,float param_5)

{
  undefined4 uVar1;
  
  uVar1 = NEON_fmadd((param_1 - param_2) / (param_3 - param_2),param_5 - param_4,param_4);
  return uVar1;
}


