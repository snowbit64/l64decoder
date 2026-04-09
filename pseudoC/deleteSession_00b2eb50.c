// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deleteSession
// Entry Point: 00b2eb50
// Size: 308 bytes
// Signature: undefined __thiscall deleteSession(AndroidCloudDevice * this, Session * param_1)


/* AndroidCloudDevice::deleteSession(ICloudDevice::Session*) */

void __thiscall AndroidCloudDevice::deleteSession(AndroidCloudDevice *this,Session *param_1)

{
  size_t sVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  
  lVar3 = *(long *)(this + 0x20);
  lVar4 = *(long *)(this + 0x28);
  if (lVar4 != lVar3) {
    uVar5 = 0;
    uVar6 = 0;
    do {
      pvVar2 = *(void **)(lVar3 + uVar5 * 8);
      if (*(Session **)((long)pvVar2 + 8) == param_1) {
        operator_delete(pvVar2);
        lVar3 = *(long *)(this + 0x20);
        pvVar2 = (void *)(lVar3 + uVar5 * 8);
        sVar1 = *(long *)(this + 0x28) - (long)(void *)((long)pvVar2 + 8);
        if (sVar1 != 0) {
          memmove(pvVar2,(void *)((long)pvVar2 + 8),sVar1);
          lVar3 = *(long *)(this + 0x20);
        }
        lVar4 = (long)pvVar2 + sVar1;
        *(long *)(this + 0x28) = lVar4;
      }
      else {
        uVar6 = uVar6 + 1;
      }
      uVar5 = (ulong)uVar6;
    } while (uVar5 < (ulong)(lVar4 - lVar3 >> 3));
  }
  AndroidJNICall::callBoolFromInt
            (*(AndroidJNICall **)(this + 0x38),"deleteSession",*(int *)(param_1 + 0x20));
  lVar4 = *(long *)(this + 8);
  lVar3 = *(long *)(this + 0x10) - lVar4;
  if (lVar3 != 0) {
    uVar5 = 0;
    do {
      if (*(Session **)(lVar4 + uVar5 * 8) == param_1) {
        pvVar2 = (void *)(lVar4 + uVar5 * 8);
        sVar1 = *(long *)(this + 0x10) - (long)(void *)((long)pvVar2 + 8);
        if (sVar1 != 0) {
          memmove(pvVar2,(void *)((long)pvVar2 + 8),sVar1);
        }
        *(size_t *)(this + 0x10) = (long)pvVar2 + sVar1;
        break;
      }
      uVar5 = (ulong)((int)uVar5 + 1);
    } while (uVar5 < (ulong)(lVar3 >> 3));
    if (param_1 == (Session *)0x0) {
      return;
    }
  }
  if (((byte)*param_1 & 1) != 0) {
    operator_delete(*(void **)(param_1 + 0x10));
  }
  operator_delete(param_1);
  return;
}


