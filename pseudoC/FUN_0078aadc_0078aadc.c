// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0078aadc
// Entry Point: 0078aadc
// Size: 68 bytes
// Signature: undefined FUN_0078aadc(void)


void FUN_0078aadc(undefined4 *param_1)

{
  long *plVar1;
  
  AudioDeviceManager::getInstance();
  plVar1 = (long *)AudioDeviceManager::getCurrentAudioDevice();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0078ab10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x90))(param_1[4],plVar1,*param_1);
    return;
  }
  return;
}


