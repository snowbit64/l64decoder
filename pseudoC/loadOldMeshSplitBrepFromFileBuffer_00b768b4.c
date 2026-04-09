// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadOldMeshSplitBrepFromFileBuffer
// Entry Point: 00b768b4
// Size: 484 bytes
// Signature: undefined __cdecl loadOldMeshSplitBrepFromFileBuffer(BrepFileHeader * param_1, uchar * param_2, bool param_3)


/* BrepUtil::loadOldMeshSplitBrepFromFileBuffer(BrepUtil::BrepFileHeader const&, unsigned char
   const*, bool) */

Brep * BrepUtil::loadOldMeshSplitBrepFromFileBuffer
                 (BrepFileHeader *param_1,uchar *param_2,bool param_3)

{
  ushort *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  BrepTriangle *pBVar9;
  Brep *this;
  ushort *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ushort uVar15;
  ulong uVar16;
  
  uVar5 = *(ushort *)param_1;
  uVar13 = (ulong)uVar5;
  uVar15 = *(ushort *)(param_1 + 2);
  uVar16 = (ulong)uVar15;
  uVar3 = *(uint *)(param_1 + 4);
  uVar14 = (ulong)uVar3;
  puVar7 = (undefined8 *)operator_new__(uVar13 * 0xc);
  puVar8 = puVar7;
  for (; uVar13 != 0; uVar13 = uVar13 - 1) {
    uVar12 = *(undefined8 *)param_2;
    uVar4 = *(undefined4 *)((long)param_2 + 8);
    param_2 = (uchar *)((long)param_2 + 0xc);
    *puVar8 = uVar12;
    *(undefined4 *)(puVar8 + 1) = uVar4;
    puVar8 = (undefined8 *)((long)puVar8 + 0xc);
  }
  if (param_3) {
    puVar8 = (undefined8 *)operator_new__(uVar16 * 0x14);
    if (uVar15 != 0) {
      memset(puVar8,0,((uVar16 * 0x14 - 0x14) / 0x14) * 0x14 + 0x14);
      puVar11 = puVar8;
      do {
        uVar16 = uVar16 - 1;
        *(undefined8 *)((long)puVar11 + 0xc) = *(undefined8 *)param_2;
        puVar2 = (undefined8 *)((long)param_2 + 0x10);
        uVar12 = *(undefined8 *)((long)param_2 + 8);
        param_2 = (uchar *)((long)param_2 + 0x14);
        *(undefined4 *)(puVar11 + 1) = *(undefined4 *)puVar2;
        *puVar11 = uVar12;
        puVar11 = (undefined8 *)((long)puVar11 + 0x14);
      } while (uVar16 != 0);
    }
  }
  else {
    param_2 = (uchar *)((long)param_2 + uVar16 * 0x14);
    puVar8 = (undefined8 *)0x0;
    uVar15 = 0;
  }
  pBVar9 = (BrepTriangle *)operator_new__(uVar14 * 0x14);
  if (uVar3 != 0) {
    puVar10 = (ushort *)(pBVar9 + 8);
    do {
      uVar6 = *(ushort *)param_2;
      uVar14 = uVar14 - 1;
      puVar10[2] = *(ushort *)((long)param_2 + 2);
      *(int *)(puVar10 + 4) = 1 << (ulong)(uVar6 & 0x1f);
      uVar6 = *(ushort *)((long)param_2 + 6);
      puVar10[-4] = *(ushort *)((long)param_2 + 4);
      puVar10[-1] = uVar6;
      uVar6 = *(ushort *)((long)param_2 + 10);
      puVar10[-3] = *(ushort *)((long)param_2 + 8);
      *puVar10 = uVar6;
      puVar1 = (ushort *)((long)param_2 + 0xc);
      uVar6 = *(ushort *)((long)param_2 + 0xe);
      param_2 = (uchar *)((long)param_2 + 0x10);
      puVar10[-2] = *puVar1;
      puVar10[1] = uVar6;
      puVar10 = puVar10 + 10;
    } while (uVar14 != 0);
  }
  this = (Brep *)operator_new(0x2fb8);
                    /* try { // try from 00b76a2c to 00b76a5b has its CatchHandler @ 00b76a98 */
  Brep::Brep(this,uVar5,(Vector3 *)puVar7,uVar15,(BrepWedge *)puVar8,uVar3,pBVar9,true,true,
             (Matrix4x4 *)0x0,(Matrix4x4 *)0x0,(uchar *)0x0);
  operator_delete__(puVar7);
  if (puVar8 != (undefined8 *)0x0) {
    operator_delete__(puVar8);
  }
  operator_delete__(pBVar9);
  return this;
}


