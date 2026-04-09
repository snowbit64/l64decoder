// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~ConditionalAnimationItem
// Entry Point: 008643b8
// Size: 412 bytes
// Signature: undefined __thiscall ~ConditionalAnimationItem(ConditionalAnimationItem * this)


/* ConditionalAnimationItem::~ConditionalAnimationItem() */

void __thiscall ConditionalAnimationItem::~ConditionalAnimationItem(ConditionalAnimationItem *this)

{
  ConditionalAnimationItem CVar1;
  void *pvVar2;
  void **ppvVar3;
  void **ppvVar4;
  void *pvVar5;
  void **ppvVar6;
  byte *pbVar7;
  void **ppvVar8;
  byte *pbVar9;
  void *pvVar10;
  byte *pbVar11;
  void **ppvVar12;
  void **ppvVar13;
  
  pvVar2 = *(void **)(this + 0xd8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xe0) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0xc0);
  if (pvVar2 != (void *)0x0) {
    pvVar10 = pvVar2;
    pvVar5 = *(void **)(this + 200);
    if (*(void **)(this + 200) != pvVar2) {
      do {
        pvVar10 = (void *)((long)pvVar5 + -0x20);
        if ((*(byte *)((long)pvVar5 + -0x18) & 1) != 0) {
          operator_delete(*(void **)((long)pvVar5 + -8));
        }
        pvVar5 = pvVar10;
      } while (pvVar10 != pvVar2);
      pvVar10 = *(void **)(this + 0xc0);
    }
    *(void **)(this + 200) = pvVar2;
    operator_delete(pvVar10);
  }
  ppvVar8 = *(void ***)(this + 0x98);
  if (ppvVar8 != (void **)0x0) {
    ppvVar12 = *(void ***)(this + 0xa0);
    ppvVar4 = ppvVar8;
    if (ppvVar12 != ppvVar8) {
      do {
        ppvVar4 = ppvVar12 + -3;
        ppvVar13 = (void **)*ppvVar4;
        if (ppvVar13 != (void **)0x0) {
          ppvVar6 = (void **)ppvVar12[-2];
          ppvVar3 = ppvVar13;
          if (ppvVar6 != ppvVar13) {
            do {
              ppvVar3 = ppvVar6 + -4;
              pvVar2 = *ppvVar3;
              if (pvVar2 != (void *)0x0) {
                ppvVar6[-3] = pvVar2;
                operator_delete(pvVar2);
              }
              ppvVar6 = ppvVar3;
            } while (ppvVar3 != ppvVar13);
            ppvVar3 = (void **)*ppvVar4;
          }
          ppvVar12[-2] = ppvVar13;
          operator_delete(ppvVar3);
        }
        ppvVar12 = ppvVar4;
      } while (ppvVar4 != ppvVar8);
      ppvVar4 = *(void ***)(this + 0x98);
    }
    *(void ***)(this + 0xa0) = ppvVar8;
    operator_delete(ppvVar4);
  }
  pbVar9 = *(byte **)(this + 0x80);
  if (pbVar9 != (byte *)0x0) {
    pbVar7 = *(byte **)(this + 0x88);
    pbVar11 = pbVar9;
    if (pbVar7 != pbVar9) {
      do {
        pbVar11 = pbVar7 + -0x38;
        if ((*pbVar11 & 1) != 0) {
          operator_delete(*(void **)(pbVar7 + -0x28));
        }
        pbVar7 = pbVar11;
      } while (pbVar11 != pbVar9);
      pbVar11 = *(byte **)(this + 0x80);
    }
    *(byte **)(this + 0x88) = pbVar9;
    operator_delete(pbVar11);
  }
  if (((byte)this[0x48] & 1) == 0) {
    CVar1 = this[0x10];
  }
  else {
    operator_delete(*(void **)(this + 0x58));
    CVar1 = this[0x10];
  }
  if (((byte)CVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x20));
    return;
  }
  return;
}


