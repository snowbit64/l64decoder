// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00786190
// Entry Point: 00786190
// Size: 32 bytes
// Signature: undefined FUN_00786190(void)


void FUN_00786190(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"updateVideoOverlay",(MethodDeclaration *)&DAT_01068e38,0x800000000,
             VideoOverlay::update);
  return;
}


