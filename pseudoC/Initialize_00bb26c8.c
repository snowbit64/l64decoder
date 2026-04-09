// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Initialize
// Entry Point: 00bb26c8
// Size: 316 bytes
// Signature: undefined __thiscall Initialize(btSparseSdf<3> * this, int param_1, int param_2)


/* btSparseSdf<3>::Initialize(int, int) */

void __thiscall btSparseSdf<3>::Initialize(btSparseSdf<3> *this,int param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *pvVar7;
  
  uVar1 = *(uint *)(this + 4);
  *(int *)(this + 0x2c) = param_2;
  if ((int)uVar1 < param_1) {
    lVar6 = (long)(int)uVar1;
    if (*(int *)(this + 8) < param_1) {
      if (param_1 == 0) {
        lVar2 = 0;
      }
      else {
        lVar2 = btAlignedAllocInternal
                          (-(ulong)((uint)param_1 >> 0x1f) & 0xfffffff800000000 |
                           (ulong)(uint)param_1 << 3,0x10);
        uVar1 = *(uint *)(this + 4);
      }
      if (0 < (int)uVar1) {
        lVar4 = 0;
        do {
          *(undefined8 *)(lVar2 + lVar4) = *(undefined8 *)(*(long *)(this + 0x10) + lVar4);
          lVar4 = lVar4 + 8;
        } while ((ulong)uVar1 * 8 - lVar4 != 0);
      }
      if ((*(void **)(this + 0x10) != (void *)0x0) && (this[0x18] != (btSparseSdf<3>)0x0)) {
        btAlignedFreeInternal(*(void **)(this + 0x10));
      }
      *(long *)(this + 0x10) = lVar2;
      *(int *)(this + 8) = param_1;
      this[0x18] = (btSparseSdf<3>)0x1;
    }
    do {
      *(undefined8 *)(*(long *)(this + 0x10) + lVar6 * 8) = 0;
      lVar6 = lVar6 + 1;
    } while (param_1 != lVar6);
  }
  *(int *)(this + 4) = param_1;
  if (0 < param_1) {
    uVar5 = 0;
    do {
      pvVar3 = *(void **)(*(long *)(this + 0x10) + uVar5 * 8);
      *(undefined8 *)(*(long *)(this + 0x10) + uVar5 * 8) = 0;
      while (pvVar3 != (void *)0x0) {
        pvVar7 = *(void **)((long)pvVar3 + 0x120);
        operator_delete(pvVar3);
        pvVar3 = pvVar7;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != (uint)param_1);
  }
  *(undefined4 *)(this + 0x24) = 0;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined4 *)(this + 0x20) = 0x3e800000;
  *(undefined8 *)(this + 0x30) = 0x100000001;
  return;
}


