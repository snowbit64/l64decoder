// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00789d90
// Entry Point: 00789d90
// Size: 68 bytes
// Signature: undefined FUN_00789d90(void)


void FUN_00789d90(undefined4 *param_1)

{
  long *plVar1;
  
  AudioDeviceManager::getInstance();
  plVar1 = (long *)AudioDeviceManager::getCurrentAudioDevice();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00789dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa0))(param_1[4],plVar1,*param_1);
    return;
  }
  return;
}


