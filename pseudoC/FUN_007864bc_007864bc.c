// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007864bc
// Entry Point: 007864bc
// Size: 32 bytes
// Signature: undefined FUN_007864bc(void)


void FUN_007864bc(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"resumeStreamedSample",(MethodDeclaration *)&DAT_010698c8,0x20000000000,
             StreamedSample::resume);
  return;
}


