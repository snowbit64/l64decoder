// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007a9ea8
// Entry Point: 007a9ea8
// Size: 24 bytes
// Signature: undefined FUN_007a9ea8(void)


void FUN_007a9ea8(GsShape *param_1,char *param_2)

{
  if (*param_2 != '\0') {
    GsShape::raiseShapeFlag(param_1,0x400);
    return;
  }
  GsShape::clearShapeFlag(param_1,0x400);
  return;
}


