// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00786ad0
// Entry Point: 00786ad0
// Size: 32 bytes
// Signature: undefined FUN_00786ad0(void)


void FUN_00786ad0(void *param_1)

{
  ReflectionUtil::executeObjectMethod
            (param_1,"ambientSoundsRemoveAllSamples",(MethodDeclaration *)&DAT_0106acb0,
             0x40000000000,SoundPlayer::removeAllAmbientSamples);
  return;
}


