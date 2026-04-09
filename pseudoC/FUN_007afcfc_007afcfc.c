// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007afcfc
// Entry Point: 007afcfc
// Size: 40 bytes
// Signature: undefined FUN_007afcfc(void)


void FUN_007afcfc(long param_1,char **param_2)

{
  FoliageLayerGraphics::setShaderParameterForLayer
            (*(FoliageLayerGraphics **)(*(long *)(param_1 + 200) + 0x230),*(uint *)(param_1 + 0xd0),
             *param_2,*(float *)(param_2 + 2),*(float *)(param_2 + 4),*(float *)(param_2 + 6),
             *(float *)(param_2 + 8));
  return;
}


