// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadBrepFromFileBuffer
// Entry Point: 00b76464
// Size: 640 bytes
// Signature: undefined __cdecl loadBrepFromFileBuffer(BrepFileHeader * param_1, uchar * param_2)


/* BrepUtil::loadBrepFromFileBuffer(BrepUtil::BrepFileHeader const&, unsigned char const*) */

Brep * BrepUtil::loadBrepFromFileBuffer(BrepFileHeader *param_1,uchar *param_2)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  bool bVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  BrepTriangle *pBVar12;
  Brep *this;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  ushort *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  
  uVar4 = *(ushort *)param_1;
  uVar17 = (ulong)uVar4;
  uVar5 = *(ushort *)(param_1 + 2);
  uVar18 = (ulong)uVar5;
  uVar2 = *(uint *)(param_1 + 4);
  uVar19 = (ulong)uVar2;
  puVar10 = (undefined8 *)operator_new__(uVar17 * 0xc);
  puVar11 = puVar10;
  for (; uVar17 != 0; uVar17 = uVar17 - 1) {
    uVar15 = *(undefined8 *)param_2;
    uVar3 = *(undefined4 *)((long)param_2 + 8);
    param_2 = (uchar *)((long)param_2 + 0xc);
    *puVar11 = uVar15;
    *(undefined4 *)(puVar11 + 1) = uVar3;
    puVar11 = (undefined8 *)((long)puVar11 + 0xc);
  }
  if (uVar5 == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    puVar11 = (undefined8 *)operator_new__(uVar18 * 0x14);
    uVar17 = uVar18 * 0x14 - 0x14;
    memset(puVar11,0,
           (uVar17 - (uint)((int)uVar17 + (int)((uVar17 & 0xfffffffc) / 0x14) * -0x14)) + 0x14);
    puVar14 = puVar11;
    do {
      uVar18 = uVar18 - 1;
      *(undefined8 *)((long)puVar14 + 0xc) = *(undefined8 *)param_2;
      puVar1 = (undefined8 *)((long)param_2 + 0x10);
      uVar15 = *(undefined8 *)((long)param_2 + 8);
      param_2 = (uchar *)((long)param_2 + 0x14);
      *(undefined4 *)(puVar14 + 1) = *(undefined4 *)puVar1;
      *puVar14 = uVar15;
      puVar14 = (undefined8 *)((long)puVar14 + 0x14);
    } while (uVar18 != 0);
  }
  pBVar12 = (BrepTriangle *)operator_new__(uVar19 * 0x14);
  if (uVar2 != 0) {
    lVar13 = 0;
    bVar8 = true;
    do {
      puVar16 = (ushort *)(pBVar12 + lVar13 * 0x14);
      uVar6 = *(ushort *)((long)param_2 + 4);
      bVar9 = false;
      *(undefined4 *)(puVar16 + 8) = *(undefined4 *)param_2;
      puVar16[6] = uVar6;
      uVar6 = *(ushort *)((long)param_2 + 6);
      uVar7 = *(ushort *)((long)param_2 + 8);
      *puVar16 = uVar6;
      puVar16[3] = uVar7;
      if ((bVar8) && (uVar6 < uVar4)) {
        bVar9 = uVar5 == 0 || uVar7 < uVar5;
      }
      bVar8 = false;
      uVar6 = *(ushort *)((long)param_2 + 10);
      uVar7 = *(ushort *)((long)param_2 + 0xc);
      *(ushort *)(pBVar12 + lVar13 * 0x14 + 2) = uVar6;
      *(ushort *)(pBVar12 + lVar13 * 0x14 + 8) = uVar7;
      if ((bVar9) && (uVar6 < uVar4)) {
        bVar8 = uVar5 == 0 || uVar7 < uVar5;
      }
      uVar6 = *(ushort *)((long)param_2 + 0xe);
      uVar7 = *(ushort *)((long)param_2 + 0x10);
      *(ushort *)(pBVar12 + lVar13 * 0x14 + 4) = uVar6;
      *(ushort *)(pBVar12 + lVar13 * 0x14 + 10) = uVar7;
      if ((bVar8) && (uVar6 < uVar4)) {
        bVar8 = uVar5 == 0 || uVar7 < uVar5;
        if (lVar13 + 1U == uVar19) goto LAB_00b76644;
      }
      else {
        if (lVar13 + 1U == uVar19) goto LAB_00b766a4;
        bVar8 = false;
      }
      lVar13 = lVar13 + 1;
      param_2 = (uchar *)((long)param_2 + 0x12);
    } while( true );
  }
LAB_00b76648:
  this = (Brep *)operator_new(0x2fb8);
                    /* try { // try from 00b76654 to 00b76683 has its CatchHandler @ 00b766e4 */
  Brep::Brep(this,uVar4,(Vector3 *)puVar10,uVar5,(BrepWedge *)puVar11,uVar2,pBVar12,true,true,
             (Matrix4x4 *)0x0,(Matrix4x4 *)0x0,(uchar *)0x0);
  operator_delete__(puVar10);
  if (puVar11 != (undefined8 *)0x0) {
    operator_delete__(puVar11);
  }
  operator_delete__(pBVar12);
  return this;
LAB_00b76644:
  if (uVar5 != 0 && uVar7 >= uVar5) {
LAB_00b766a4:
    operator_delete__(puVar10);
    operator_delete__(pBVar12);
    if (puVar11 != (undefined8 *)0x0) {
      operator_delete__(puVar11);
    }
    return (Brep *)0x0;
  }
  goto LAB_00b76648;
}


