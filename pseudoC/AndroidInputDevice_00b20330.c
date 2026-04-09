// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AndroidInputDevice
// Entry Point: 00b20330
// Size: 136 bytes
// Signature: undefined __thiscall ~AndroidInputDevice(AndroidInputDevice * this)


/* AndroidInputDevice::~AndroidInputDevice() */

void __thiscall AndroidInputDevice::~AndroidInputDevice(AndroidInputDevice *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR_touchBegan_00fe8040;
                    /* try { // try from 00b20350 to 00b20353 has its CatchHandler @ 00b203b8 */
  disableSensors();
  m_pInputDevice = 0;
  if (((byte)this[0x1588] & 1) != 0) {
    operator_delete(*(void **)(this + 0x1598));
  }
  pvVar1 = *(void **)(this + 0x1570);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x1578) = pvVar1;
    operator_delete(pvVar1);
  }
  pvVar1 = *(void **)(this + 8);
  *(undefined ***)this = &PTR_touchBegan_00fe80a8;
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x10) = pvVar1;
    operator_delete(pvVar1);
    return;
  }
  return;
}


