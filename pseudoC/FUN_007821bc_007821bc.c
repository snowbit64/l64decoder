// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007821bc
// Entry Point: 007821bc
// Size: 28 bytes
// Signature: undefined FUN_007821bc(void)


void FUN_007821bc(void *param_1)

{
  ReflectionUtil::executeGlobalMethod
            (param_1,"saveCancelUpdateList",(MethodDeclaration *)&DAT_01077898,
             GenericSaveGameUtil::cancelUpdateSaveGameList);
  return;
}


