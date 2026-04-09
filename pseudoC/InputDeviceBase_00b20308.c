// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~InputDeviceBase
// Entry Point: 00b20308
// Size: 40 bytes
// Signature: undefined __thiscall ~InputDeviceBase(InputDeviceBase * this)


/* InputDeviceBase::~InputDeviceBase() */

void __thiscall InputDeviceBase::~InputDeviceBase(InputDeviceBase *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 8);
  *(undefined ***)this = &PTR_touchBegan_00fe80a8;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


