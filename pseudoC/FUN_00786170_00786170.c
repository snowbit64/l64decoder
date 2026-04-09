// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00786170
// Entry Point: 00786170
// Size: 32 bytes
// Signature: undefined FUN_00786170(void)


void FUN_00786170(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"stopVideoOverlay",(MethodDeclaration *)&DAT_01068dd0,0x800000000,
             VideoOverlay::stop);
  return;
}


