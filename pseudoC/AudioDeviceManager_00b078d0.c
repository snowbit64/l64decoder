// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AudioDeviceManager
// Entry Point: 00b078d0
// Size: 52 bytes
// Signature: undefined __thiscall ~AudioDeviceManager(AudioDeviceManager * this)


/* AudioDeviceManager::~AudioDeviceManager() */

void __thiscall AudioDeviceManager::~AudioDeviceManager(AudioDeviceManager *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined8 *)this = 0;
  return;
}


