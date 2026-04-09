// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00788bb8
// Entry Point: 00788bb8
// Size: 32 bytes
// Signature: undefined FUN_00788bb8(void)


void FUN_00788bb8(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"resetTrafficSystem",(MethodDeclaration *)&DAT_01071038,0x10000000,
             TrafficSystem::reset);
  return;
}


