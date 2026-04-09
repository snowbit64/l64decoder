// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007afd70
// Entry Point: 007afd70
// Size: 44 bytes
// Signature: undefined FUN_007afd70(void)


void FUN_007afd70(FoliageSystemDesc *param_1)

{
  if (param_1 != (FoliageSystemDesc *)0x0) {
    FoliageSystemDesc::~FoliageSystemDesc(param_1);
    operator_delete(param_1);
    return;
  }
  return;
}


