// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~PedestrianGroupData
// Entry Point: 00893380
// Size: 320 bytes
// Signature: undefined __thiscall ~PedestrianGroupData(PedestrianGroupData * this)


/* PedestrianGroupData::~PedestrianGroupData() */

void __thiscall PedestrianGroupData::~PedestrianGroupData(PedestrianGroupData *this)

{
  PedestrianGroupData PVar1;
  void *pvVar2;
  byte **ppbVar3;
  byte *pbVar4;
  byte **ppbVar5;
  byte **ppbVar6;
  byte *pbVar7;
  byte *pbVar8;
  
  pvVar2 = *(void **)(this + 0xa8);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0xb0) = pvVar2;
    operator_delete(pvVar2);
  }
  ppbVar5 = *(byte ***)(this + 0x90);
  if (ppbVar5 != (byte **)0x0) {
    ppbVar6 = *(byte ***)(this + 0x98);
    ppbVar3 = ppbVar5;
    if (ppbVar6 != ppbVar5) {
      do {
        ppbVar3 = ppbVar6 + -3;
        pbVar7 = *ppbVar3;
        if (pbVar7 != (byte *)0x0) {
          pbVar4 = ppbVar6[-2];
          pbVar8 = pbVar7;
          if (pbVar4 != pbVar7) {
            do {
              pbVar8 = pbVar4 + -0x18;
              if ((*pbVar8 & 1) != 0) {
                operator_delete(*(void **)(pbVar4 + -8));
              }
              pbVar4 = pbVar8;
            } while (pbVar8 != pbVar7);
            pbVar8 = *ppbVar3;
          }
          ppbVar6[-2] = pbVar7;
          operator_delete(pbVar8);
        }
        ppbVar6 = ppbVar3;
      } while (ppbVar3 != ppbVar5);
      ppbVar3 = *(byte ***)(this + 0x90);
    }
    *(byte ***)(this + 0x98) = ppbVar5;
    operator_delete(ppbVar3);
  }
  pvVar2 = *(void **)(this + 0x78);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x80) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x60);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x68) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x48);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x50) = pvVar2;
    operator_delete(pvVar2);
  }
  pvVar2 = *(void **)(this + 0x30);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x38) = pvVar2;
    operator_delete(pvVar2);
  }
  if (((byte)this[0x18] & 1) == 0) {
    PVar1 = *this;
  }
  else {
    operator_delete(*(void **)(this + 0x28));
    PVar1 = *this;
  }
  if (((byte)PVar1 & 1) != 0) {
    operator_delete(*(void **)(this + 0x10));
    return;
  }
  return;
}


