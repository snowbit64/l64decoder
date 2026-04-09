// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AndroidCloudDevice
// Entry Point: 00b2dcf8
// Size: 80 bytes
// Signature: undefined __thiscall ~AndroidCloudDevice(AndroidCloudDevice * this)


/* AndroidCloudDevice::~AndroidCloudDevice() */

void __thiscall AndroidCloudDevice::~AndroidCloudDevice(AndroidCloudDevice *this)

{
  void *pvVar1;
  
  pvVar1 = *(void **)(this + 0x20);
  *(undefined ***)this = &PTR__AndroidCloudDevice_00fe93d0;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x28) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
  }
  operator_delete(this);
  return;
}


