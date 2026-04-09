// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: update
// Entry Point: 00b20640
// Size: 100 bytes
// Signature: undefined __thiscall update(AndroidInputDevice * this, float param_1)


/* AndroidInputDevice::update(float) */

void __thiscall AndroidInputDevice::update(AndroidInputDevice *this,float param_1)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  long lVar4;
  ulong uVar5;
  
  lVar4 = *(long *)(this + 0x1570);
  lVar2 = *(long *)(this + 0x1578) - lVar4;
  if (lVar2 != 0) {
    uVar5 = 0;
    do {
      lVar1 = lVar4 + uVar5 * 8;
      uVar5 = (ulong)((int)uVar5 + 1);
      *(float *)(lVar1 + 4) = *(float *)(lVar1 + 4) + param_1;
    } while (uVar5 < (ulong)(lVar2 >> 3));
  }
  uVar3 = AndroidJNICall::callInt(*(AndroidJNICall **)(this + 0x30),"getDisplayRotation");
  *(undefined4 *)(this + 0x15a0) = uVar3;
  return;
}


