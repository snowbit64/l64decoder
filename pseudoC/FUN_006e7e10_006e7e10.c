// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_006e7e10
// Entry Point: 006e7e10
// Size: 60 bytes
// Signature: undefined FUN_006e7e10(void)


void FUN_006e7e10(long param_1)

{
  long *plVar1;
  undefined4 uVar2;
  
  AudioDeviceManager::getInstance();
  plVar1 = (long *)AudioDeviceManager::getCurrentAudioDevice();
  uVar2 = (**(code **)(*plVar1 + 0x138))();
  *(undefined4 *)(param_1 + 0x100) = uVar2;
  *(undefined4 *)(param_1 + 0x108) = 4;
  return;
}


