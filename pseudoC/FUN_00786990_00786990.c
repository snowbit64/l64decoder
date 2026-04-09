// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00786990
// Entry Point: 00786990
// Size: 32 bytes
// Signature: undefined FUN_00786990(void)


void FUN_00786990(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"pauseSoundPlayer",(MethodDeclaration *)&DAT_0106a8a0,0x40000000000,
             SoundPlayer::pause);
  return;
}


