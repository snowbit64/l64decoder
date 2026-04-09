// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078649c
// Entry Point: 0078649c
// Size: 32 bytes
// Signature: undefined FUN_0078649c(void)


void FUN_0078649c(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"pauseStreamedSample",(MethodDeclaration *)&DAT_01069860,0x20000000000,
             StreamedSample::pause);
  return;
}


