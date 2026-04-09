// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00786150
// Entry Point: 00786150
// Size: 32 bytes
// Signature: undefined FUN_00786150(void)


void FUN_00786150(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"playVideoOverlay",(MethodDeclaration *)&DAT_01068d68,0x800000000,
             VideoOverlay::play);
  return;
}


