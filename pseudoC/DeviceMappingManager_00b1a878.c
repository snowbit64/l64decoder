// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DeviceMappingManager
// Entry Point: 00b1a878
// Size: 112 bytes
// Signature: undefined __thiscall DeviceMappingManager(DeviceMappingManager * this)


/* DeviceMappingManager::DeviceMappingManager() */

void __thiscall DeviceMappingManager::DeviceMappingManager(DeviceMappingManager *this)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 8) = 0;
  *(DeviceMappingManager **)this = this + 8;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x50) = 0;
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined8 *)(this + 0x38) = 0;
                    /* try { // try from 00b1a8c0 to 00b1a8c7 has its CatchHandler @ 00b1a8fc */
  DeviceMapping::DeviceMapping((DeviceMapping *)(this + 0x68));
                    /* try { // try from 00b1a8cc to 00b1a8cf has its CatchHandler @ 00b1a8e8 */
  DeviceMapping::DeviceMapping((DeviceMapping *)(this + 0xc20));
  *(undefined8 *)(this + 0x17d8) = 0;
  this[0x48] = (DeviceMappingManager)0x0;
  return;
}


