// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: operator=
// Entry Point: 00d556f0
// Size: 372 bytes
// Signature: undefined __thiscall operator=(CircularList<HACD::TMMEdge> * this, CircularList * param_1)


/* HACD::CircularList<HACD::TMMEdge>::TEMPNAMEPLACEHOLDERVALUE(HACD::CircularList<HACD::TMMEdge>
   const&) */

CircularList<HACD::TMMEdge> * __thiscall
HACD::CircularList<HACD::TMMEdge>::operator=
          (CircularList<HACD::TMMEdge> *this,CircularList *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 != (CircularList *)this) {
    Clear();
    lVar2 = *(long *)(param_1 + 0x10);
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
    if (lVar2 != 0) {
      puVar3 = *(undefined8 **)(param_1 + 8);
      lVar2 = *(long *)(this + 0x10);
      do {
        while (puVar3 = (undefined8 *)puVar3[6], lVar2 != 0) {
          lVar2 = *(long *)(this + 8);
          lVar4 = *(long *)(lVar2 + 0x30);
          if (*(HeapManager **)(this + 0x18) == (HeapManager *)0x0) {
            puVar1 = (undefined8 *)operator_new(0x40);
            uVar5 = *puVar3;
            uVar7 = puVar3[3];
            uVar6 = puVar3[2];
            uVar9 = puVar3[5];
            uVar8 = puVar3[4];
            puVar1[1] = puVar3[1];
            *puVar1 = uVar5;
            puVar1[3] = uVar7;
            puVar1[2] = uVar6;
            *(undefined8 **)(this + 8) = puVar1;
            puVar1[5] = uVar9;
            puVar1[4] = uVar8;
          }
          else {
            puVar1 = (undefined8 *)heap_malloc(*(HeapManager **)(this + 0x18),0x40);
            *(undefined8 **)(this + 8) = puVar1;
            puVar1[3] = 0;
            puVar1[2] = 0;
            puVar1[5] = 0;
            puVar1[4] = 0;
            puVar1[1] = 0;
            *puVar1 = 0;
            uVar7 = puVar3[2];
            uVar6 = puVar3[5];
            uVar5 = puVar3[4];
            puVar1 = *(undefined8 **)(this + 8);
            uVar9 = puVar3[1];
            uVar8 = *puVar3;
            puVar1[3] = puVar3[3];
            puVar1[2] = uVar7;
            puVar1[5] = uVar6;
            puVar1[4] = uVar5;
            puVar1[1] = uVar9;
            *puVar1 = uVar8;
            puVar1 = *(undefined8 **)(this + 8);
          }
          puVar1[6] = lVar4;
          *(long *)(*(long *)(this + 8) + 0x38) = lVar2;
          *(undefined8 *)(lVar2 + 0x30) = *(undefined8 *)(this + 8);
          *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(this + 8);
          puVar1 = *(undefined8 **)(param_1 + 8);
          lVar2 = *(long *)(this + 0x10) + 1;
          *(long *)(this + 0x10) = lVar2;
          if (puVar3 == puVar1) {
            return this;
          }
        }
        if (*(HeapManager **)(this + 0x18) == (HeapManager *)0x0) {
          puVar1 = (undefined8 *)operator_new(0x40);
          uVar5 = *puVar3;
          uVar7 = puVar3[3];
          uVar6 = puVar3[2];
          uVar9 = puVar3[5];
          uVar8 = puVar3[4];
          puVar1[1] = puVar3[1];
          *puVar1 = uVar5;
          puVar1[3] = uVar7;
          puVar1[2] = uVar6;
          *(undefined8 **)(this + 8) = puVar1;
          puVar1[5] = uVar9;
          puVar1[4] = uVar8;
        }
        else {
          puVar1 = (undefined8 *)heap_malloc(*(HeapManager **)(this + 0x18),0x40);
          *(undefined8 **)(this + 8) = puVar1;
          puVar1[3] = 0;
          puVar1[2] = 0;
          puVar1[5] = 0;
          puVar1[4] = 0;
          puVar1[1] = 0;
          *puVar1 = 0;
          uVar7 = puVar3[2];
          uVar6 = puVar3[5];
          uVar5 = puVar3[4];
          puVar1 = *(undefined8 **)(this + 8);
          uVar9 = puVar3[1];
          uVar8 = *puVar3;
          puVar1[3] = puVar3[3];
          puVar1[2] = uVar7;
          puVar1[5] = uVar6;
          puVar1[4] = uVar5;
          puVar1[1] = uVar9;
          *puVar1 = uVar8;
          puVar1 = *(undefined8 **)(this + 8);
        }
        puVar1[7] = puVar1;
        *(undefined8 **)(*(long *)(this + 8) + 0x30) = puVar1;
        puVar1 = *(undefined8 **)(param_1 + 8);
        lVar2 = *(long *)(this + 0x10) + 1;
        *(long *)(this + 0x10) = lVar2;
      } while (puVar3 != puVar1);
    }
  }
  return this;
}


