// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007864dc
// Entry Point: 007864dc
// Size: 32 bytes
// Signature: undefined FUN_007864dc(void)


void FUN_007864dc(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"stopStreamedSample",(MethodDeclaration *)&DAT_01069930,0x20000000000,
             StreamedSample::stop);
  return;
}


