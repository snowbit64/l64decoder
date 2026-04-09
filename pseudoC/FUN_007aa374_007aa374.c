// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007aa374
// Entry Point: 007aa374
// Size: 20 bytes
// Signature: undefined FUN_007aa374(void)


void FUN_007aa374(GsShape *param_1,byte *param_2)

{
  GsShape::setShapeFlags(param_1,*(uint *)(param_1 + 400) & 0xfffffeff | (uint)*param_2 << 8);
  return;
}


