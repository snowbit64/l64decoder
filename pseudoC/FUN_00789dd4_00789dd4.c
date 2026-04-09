// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00789dd4
// Entry Point: 00789dd4
// Size: 88 bytes
// Signature: undefined FUN_00789dd4(void)


void FUN_00789dd4(undefined4 *param_1)

{
  long *plVar1;
  
  AudioDeviceManager::getInstance();
  plVar1 = (long *)AudioDeviceManager::getCurrentAudioDevice();
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00789e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xa8))
              (param_1[4],param_1[8],param_1[0xc],param_1[0x10],param_1[0x14],param_1[0x18],plVar1,
               *param_1);
    return;
  }
  return;
}


