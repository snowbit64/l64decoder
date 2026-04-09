// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b09fcc
// Size: 44 bytes
// Signature: undefined __cdecl init(AudioDeviceDesc * param_1)


/* NullAudioDevice::init(AudioDeviceDesc const&) */

undefined8 NullAudioDevice::init(AudioDeviceDesc *param_1)

{
  undefined8 uVar1;
  
  uVar1 = Watch::getCurrentTicks();
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  return 1;
}


