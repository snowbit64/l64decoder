// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e7e4c
// Entry Point: 006e7e4c
// Size: 76 bytes
// Signature: undefined FUN_006e7e4c(void)


void FUN_006e7e4c(float *param_1)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  
  AudioDeviceManager::getInstance();
  plVar1 = (long *)AudioDeviceManager::getCurrentAudioDevice();
  fVar3 = *param_1;
  fVar2 = 0.0;
  if ((0.0 <= fVar3) && (fVar2 = 1.0, fVar3 <= 1.0)) {
    fVar2 = fVar3;
  }
                    /* WARNING: Could not recover jumptable at 0x006e7e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x130))(fVar2);
  return;
}


