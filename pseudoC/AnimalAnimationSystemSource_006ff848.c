// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ~AnimalAnimationSystemSource
// Entry Point: 006ff848
// Size: 380 bytes
// Signature: undefined __thiscall ~AnimalAnimationSystemSource(AnimalAnimationSystemSource * this)


/* AnimalAnimationSystemSource::~AnimalAnimationSystemSource() */

void __thiscall
AnimalAnimationSystemSource::~AnimalAnimationSystemSource(AnimalAnimationSystemSource *this)

{
  AnimalAnimationSystemSource AVar1;
  void *pvVar2;
  void **ppvVar3;
  long lVar4;
  AnimalAnimationSystemSource *pAVar5;
  void *pvVar6;
  AnimalAnimationSystemSource *pAVar7;
  void *pvVar8;
  
  ppvVar3 = (void **)(this + 0x3d10);
  lVar4 = -0x1400;
  do {
    if (((byte)*(AnimalAnimationSystemSource *)(ppvVar3 + -2) & 1) != 0) {
      operator_delete(*ppvVar3);
    }
    ppvVar3 = ppvVar3 + -5;
    lVar4 = lVar4 + 0x28;
  } while (lVar4 != 0);
  lVar4 = -0x1800;
  ppvVar3 = (void **)(this + 0x28f8);
  do {
    if (((byte)*(AnimalAnimationSystemSource *)(ppvVar3 + -2) & 1) == 0) {
      if (((byte)*(AnimalAnimationSystemSource *)(ppvVar3 + -5) & 1) == 0) goto LAB_006ff8bc;
LAB_006ff8d8:
      operator_delete(ppvVar3[-3]);
      AVar1 = *(AnimalAnimationSystemSource *)(ppvVar3 + -8);
    }
    else {
      operator_delete(*ppvVar3);
      if (((byte)*(AnimalAnimationSystemSource *)(ppvVar3 + -5) & 1) != 0) goto LAB_006ff8d8;
LAB_006ff8bc:
      AVar1 = *(AnimalAnimationSystemSource *)(ppvVar3 + -8);
    }
    if (((byte)AVar1 & 1) != 0) {
      operator_delete(ppvVar3[-6]);
    }
    lVar4 = lVar4 + 0x60;
    ppvVar3 = ppvVar3 + -0xc;
    if (lVar4 == 0) {
      pAVar5 = this + 0x1110;
      do {
        pvVar6 = *(void **)(pAVar5 + -0x18);
        if (pvVar6 != (void *)0x0) {
          pvVar8 = pvVar6;
          pvVar2 = *(void **)(pAVar5 + -0x10);
          if (*(void **)(pAVar5 + -0x10) != pvVar6) {
            do {
              pvVar8 = (void *)((long)pvVar2 + -0x28);
              if ((*(byte *)((long)pvVar2 + -0x20) & 1) != 0) {
                operator_delete(*(void **)((long)pvVar2 + -0x10));
              }
              pvVar2 = pvVar8;
            } while (pvVar8 != pvVar6);
            pvVar8 = *(void **)(pAVar5 + -0x18);
          }
          *(void **)(pAVar5 + -0x10) = pvVar6;
          operator_delete(pvVar8);
        }
        if (((byte)pAVar5[-0x50] & 1) != 0) {
          operator_delete(*(void **)(pAVar5 + -0x40));
        }
        pAVar7 = pAVar5 + -0x70;
        if (((byte)pAVar5[-0x68] & 1) != 0) {
          operator_delete(*(void **)(pAVar5 + -0x58));
        }
        pAVar5 = pAVar7;
      } while (pAVar7 != this + 0x310);
      lVar4 = 0;
      do {
        if (((byte)this[lVar4 + 0x2f0] & 1) != 0) {
          operator_delete(*(void **)(this + lVar4 + 0x300));
        }
        lVar4 = lVar4 + -0x18;
      } while (lVar4 != -0x300);
      return;
    }
  } while( true );
}


