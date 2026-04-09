// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCloudDevice
// Entry Point: 00b2db00
// Size: 56 bytes
// Signature: undefined __thiscall setCloudDevice(CloudDeviceManager * this, ICloudDevice * param_1)


/* CloudDeviceManager::setCloudDevice(ICloudDevice*) */

void __thiscall CloudDeviceManager::setCloudDevice(CloudDeviceManager *this,ICloudDevice *param_1)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(ICloudDevice **)this = param_1;
  return;
}


