// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~DensityMapSyncer
// Entry Point: 00858254
// Size: 520 bytes
// Signature: undefined __thiscall ~DensityMapSyncer(DensityMapSyncer * this)


/* DensityMapSyncer::~DensityMapSyncer() */

void __thiscall DensityMapSyncer::~DensityMapSyncer(DensityMapSyncer *this)

{
  int iVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  void *pvVar5;
  void **ppvVar6;
  ulong uVar7;
  long *plVar8;
  BitVector *this_00;
  void **ppvVar9;
  long lVar10;
  
  ppvVar6 = (void **)(this + 0x40);
  pvVar2 = *(void **)(this + 0x48);
  *(undefined ***)this = &PTR__DensityMapSyncer_00fdbcd8;
  *(undefined ***)(this + 0x20) = &PTR__DensityMapSyncer_00fdbd08;
  if (pvVar2 != *ppvVar6) {
    uVar7 = 0;
    pvVar2 = *ppvVar6;
    do {
      uVar3 = (*(long *)(this + 0x30) - *(long *)(this + 0x28) >> 4) * -0x5555555555555555;
      ppvVar9 = *(void ***)((long)pvVar2 + uVar7 * 0x10 + 8);
      if ((int)uVar3 != 0) {
        lVar10 = 0;
        do {
          if (*(void **)((long)*ppvVar9 + lVar10) != (void *)0x0) {
            operator_delete__(*(void **)((long)*ppvVar9 + lVar10));
          }
          lVar10 = lVar10 + 8;
        } while ((uVar3 & 0xffffffff) * 8 - lVar10 != 0);
      }
      if (*ppvVar9 != (void *)0x0) {
        operator_delete__(*ppvVar9);
      }
      if (ppvVar9[1] != (void *)0x0) {
        operator_delete__(ppvVar9[1]);
      }
      pvVar2 = *ppvVar6;
      pvVar4 = *(void **)((long)pvVar2 + uVar7 * 0x10 + 8);
      if (pvVar4 != (void *)0x0) {
        operator_delete(pvVar4);
        pvVar2 = *ppvVar6;
      }
      uVar7 = (ulong)((int)uVar7 + 1);
    } while (uVar7 < (ulong)(*(long *)(this + 0x48) - (long)pvVar2 >> 4));
  }
  ppvVar9 = (void **)(this + 0x28);
  pvVar4 = *ppvVar9;
  pvVar5 = *(void **)(this + 0x30);
  if (*(void **)(this + 0x30) != pvVar4) {
    uVar7 = 0;
    do {
                    /* try { // try from 00858398 to 0085839f has its CatchHandler @ 0085845c */
      DensityMap::removeDirtyListener
                (*(DensityMap **)((long)pvVar4 + uVar7 * 0x30),(DirtyListener *)(this + 0x20));
      plVar8 = *(long **)((long)*ppvVar9 + uVar7 * 0x30);
      iVar1 = FUN_00f27700(0xffffffff,plVar8 + 1);
      if (iVar1 < 2) {
                    /* try { // try from 008583c8 to 008583cf has its CatchHandler @ 0085845c */
        (**(code **)(*plVar8 + 0x10))(plVar8);
      }
      pvVar4 = *ppvVar9;
      this_00 = *(BitVector **)((long)pvVar4 + uVar7 * 0x30 + 0x18);
      if (this_00 != (BitVector *)0x0) {
        BitVector::~BitVector(this_00);
        operator_delete(this_00);
        pvVar4 = *ppvVar9;
      }
      plVar8 = *(long **)((long)pvVar4 + uVar7 * 0x30 + 0x20);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 8))();
        pvVar4 = *ppvVar9;
      }
      uVar7 = (ulong)((int)uVar7 + 1);
      uVar3 = (*(long *)(this + 0x30) - (long)pvVar4 >> 4) * -0x5555555555555555;
    } while (uVar7 <= uVar3 && uVar3 - uVar7 != 0);
    pvVar2 = *ppvVar6;
    pvVar5 = pvVar4;
  }
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x48) = pvVar2;
    operator_delete(pvVar2);
    pvVar5 = *(void **)(this + 0x28);
  }
  if (pvVar5 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar5;
    operator_delete(pvVar5);
  }
  Entity::~Entity((Entity *)this);
  return;
}


