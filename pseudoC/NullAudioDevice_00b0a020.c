// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~NullAudioDevice
// Entry Point: 00b0a020
// Size: 64 bytes
// Signature: undefined __thiscall ~NullAudioDevice(NullAudioDevice * this)


/* NullAudioDevice::~NullAudioDevice() */

void __thiscall NullAudioDevice::~NullAudioDevice(NullAudioDevice *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  *(undefined ***)this = &PTR__NullAudioDevice_00fe7368;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


