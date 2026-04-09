// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00eb01c0
// Size: 332 bytes
// Signature: undefined __thiscall operator=(CircularList<VHACD::TMMEdge> * this, CircularList * param_1)


/* WARNING: Removing unreachable block (ram,0x00eb0254) */
/* VHACD::CircularList<VHACD::TMMEdge>::TEMPNAMEPLACEHOLDERVALUE(VHACD::CircularList<VHACD::TMMEdge>
   const&) */

CircularList<VHACD::TMMEdge> * __thiscall
VHACD::CircularList<VHACD::TMMEdge>::operator=
          (CircularList<VHACD::TMMEdge> *this,CircularList *param_1)

{
  void *pvVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_1 == (CircularList *)this) {
    return this;
  }
  uVar3 = *(ulong *)(this + 8);
  do {
    while (1 < uVar3) {
      pvVar1 = *(void **)this;
      lVar5 = *(long *)((long)pvVar1 + 0x30);
      lVar6 = *(long *)((long)pvVar1 + 0x38);
      operator_delete(pvVar1);
      uVar3 = *(long *)(this + 8) - 1;
      *(long *)this = lVar5;
      *(ulong *)(this + 8) = uVar3;
      *(long *)(lVar5 + 0x38) = lVar6;
      *(long *)(lVar6 + 0x30) = lVar5;
    }
    while( true ) {
      if (uVar3 != 1) {
        if (*(long *)(param_1 + 8) == 0) {
          return this;
        }
        puVar4 = *(undefined8 **)param_1;
        lVar5 = 1;
        do {
          puVar4 = (undefined8 *)puVar4[6];
          if (lVar5 == 1) {
            puVar2 = (undefined8 *)operator_new(0x40);
            uVar8 = *puVar4;
            uVar10 = puVar4[3];
            uVar9 = puVar4[2];
            uVar12 = puVar4[5];
            uVar11 = puVar4[4];
            puVar2[1] = puVar4[1];
            *puVar2 = uVar8;
            puVar2[3] = uVar10;
            puVar2[2] = uVar9;
            *(undefined8 **)this = puVar2;
            puVar2[6] = puVar2;
            puVar2[7] = puVar2;
            puVar2[5] = uVar12;
            puVar2[4] = uVar11;
            puVar2 = *(undefined8 **)param_1;
            *(undefined8 *)(this + 8) = 1;
            lVar5 = 2;
          }
          else {
            lVar6 = *(long *)this;
            lVar7 = *(long *)(lVar6 + 0x30);
            puVar2 = (undefined8 *)operator_new(0x40);
            uVar8 = *puVar4;
            uVar10 = puVar4[3];
            uVar9 = puVar4[2];
            uVar12 = puVar4[5];
            uVar11 = puVar4[4];
            puVar2[1] = puVar4[1];
            *puVar2 = uVar8;
            puVar2[3] = uVar10;
            puVar2[2] = uVar9;
            *(undefined8 **)this = puVar2;
            puVar2[6] = lVar7;
            puVar2[7] = lVar6;
            puVar2[5] = uVar12;
            puVar2[4] = uVar11;
            *(undefined8 **)(lVar6 + 0x30) = puVar2;
            *(undefined8 *)(lVar7 + 0x38) = *(undefined8 *)this;
            puVar2 = *(undefined8 **)param_1;
            *(long *)(this + 8) = lVar5;
            lVar5 = lVar5 + 1;
          }
        } while (puVar4 != puVar2);
        return this;
      }
      if (*(void **)this != (void *)0x0) break;
      uVar3 = 0;
      *(undefined8 *)this = 0;
      *(undefined8 *)(this + 8) = 0;
    }
    operator_delete(*(void **)this);
    uVar3 = *(long *)(this + 8) - 1;
    *(undefined8 *)this = 0;
    *(ulong *)(this + 8) = uVar3;
  } while( true );
}


