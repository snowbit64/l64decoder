// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetIFS
// Entry Point: 00eafa0c
// Size: 140 bytes
// Signature: undefined __thiscall GetIFS(TMMesh * this, Vec3 * param_1, Vec3 * param_2)


/* VHACD::TMMesh::GetIFS(VHACD::Vec3<double>*, VHACD::Vec3<int>*) */

void __thiscall VHACD::TMMesh::GetIFS(TMMesh *this,Vec3 *param_1,Vec3 *param_2)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar6 = *(long *)(this + 0x10);
  lVar5 = *(long *)(this + 0x30);
  if (lVar6 != 0) {
    lVar7 = 0;
    puVar9 = *(undefined8 **)(this + 8);
    puVar11 = (undefined8 *)(param_1 + 8);
    do {
      puVar9[4] = lVar7;
      lVar7 = lVar7 + 1;
      puVar11[-1] = *puVar9;
      *puVar11 = puVar9[1];
      puVar1 = puVar9 + 2;
      puVar9 = (undefined8 *)puVar9[7];
      puVar11[1] = *puVar1;
      puVar11 = puVar11 + 3;
      *(undefined8 **)(this + 8) = puVar9;
    } while (lVar6 != lVar7);
  }
  if (lVar5 != 0) {
    lVar6 = *(long *)(this + 0x28);
    puVar8 = (undefined4 *)(param_2 + 4);
    do {
      plVar3 = (long *)(lVar6 + 0x20);
      plVar4 = (long *)(lVar6 + 0x28);
      lVar5 = lVar5 + -1;
      plVar2 = (long *)(lVar6 + 0x30);
      lVar6 = *(long *)(lVar6 + 0x40);
      uVar10 = *(undefined8 *)(*plVar3 + 0x20);
      uVar12 = *(undefined8 *)(*plVar4 + 0x20);
      uVar13 = *(undefined8 *)(*plVar2 + 0x20);
      *(long *)(this + 0x28) = lVar6;
      puVar8[-1] = (int)uVar10;
      *puVar8 = (int)uVar12;
      puVar8[1] = (int)uVar13;
      puVar8 = puVar8 + 3;
    } while (lVar5 != 0);
  }
  return;
}


