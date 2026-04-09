// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createCurrentAudioDevice
// Entry Point: 00b07af4
// Size: 80 bytes
// Signature: undefined __thiscall createCurrentAudioDevice(AudioDeviceManager * this, AUDIO_DEVICE_TYPE param_1)


/* AudioDeviceManager::createCurrentAudioDevice(AudioDeviceManager::AUDIO_DEVICE_TYPE) */

void __thiscall
AudioDeviceManager::createCurrentAudioDevice(AudioDeviceManager *this,AUDIO_DEVICE_TYPE param_1)

{
  undefined8 uVar1;
  
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  uVar1 = createAudioDevice(param_1,false,false,0);
  *(undefined8 *)this = uVar1;
  return;
}


