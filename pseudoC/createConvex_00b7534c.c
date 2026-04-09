// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createConvex
// Entry Point: 00b7534c
// Size: 840 bytes
// Signature: undefined __cdecl createConvex(Brep * param_1)


/* BrepUtil::createConvex(Brep const*) */

Brep * BrepUtil::createConvex(Brep *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  float *pfVar6;
  undefined8 *puVar7;
  BrepTriangle *pBVar8;
  Brep *this;
  long lVar9;
  float *pfVar10;
  ulong uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  undefined4 *puVar16;
  ulong uVar17;
  uint uVar18;
  float *pfVar19;
  undefined8 *puVar20;
  ulong uVar21;
  float *pfVar22;
  ulong uVar23;
  undefined8 uVar24;
  float fVar26;
  undefined8 uVar25;
  float fVar27;
  float fVar28;
  float fVar30;
  undefined8 uVar29;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar36;
  undefined8 uVar35;
  float fVar37;
  float fVar39;
  undefined8 uVar38;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  uint local_6c;
  uint *local_68;
  float *local_60;
  uint local_54;
  undefined4 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  pfVar22 = *(float **)(param_1 + 0x2ef0);
  uVar3 = *(int *)(param_1 + 0x2ef8) - (int)pfVar22;
  uVar12 = uVar3 >> 4;
  uVar18 = uVar12 & 0xffff;
  uVar21 = (ulong)uVar18;
  local_54 = uVar18;
  pfVar6 = (float *)operator_new__((ulong)((uVar18 + (uVar3 >> 4 & 0xffff) * 2) * 4));
  if (uVar18 != 0) {
    if ((uVar18 < 9) || ((pfVar6 < pfVar22 + uVar21 * 4 + -1 && (pfVar22 < pfVar6 + uVar21 * 3)))) {
      lVar9 = 0;
    }
    else {
      uVar23 = 8;
      if ((uVar12 & 7) != 0) {
        uVar23 = uVar21 & 7;
      }
      lVar9 = uVar21 - uVar23;
      lVar14 = uVar23 - uVar21;
      pfVar10 = pfVar22 + 0x10;
      pfVar19 = pfVar6;
      do {
        fVar40 = *pfVar10;
        fVar44 = pfVar10[1];
        fVar48 = pfVar10[2];
        fVar41 = pfVar10[4];
        fVar45 = pfVar10[5];
        fVar49 = pfVar10[6];
        fVar42 = pfVar10[8];
        fVar46 = pfVar10[9];
        fVar50 = pfVar10[10];
        fVar43 = pfVar10[0xc];
        fVar47 = pfVar10[0xd];
        fVar51 = pfVar10[0xe];
        lVar14 = lVar14 + 8;
        fVar27 = pfVar10[-0xf];
        fVar33 = pfVar10[-0xe];
        fVar28 = pfVar10[-0xc];
        fVar30 = pfVar10[-0xb];
        fVar36 = pfVar10[-10];
        fVar34 = pfVar10[-8];
        fVar31 = pfVar10[-7];
        fVar37 = pfVar10[-6];
        fVar26 = pfVar10[-4];
        fVar32 = pfVar10[-3];
        fVar39 = pfVar10[-2];
        *pfVar19 = pfVar10[-0x10];
        pfVar19[1] = fVar27;
        pfVar19[2] = fVar33;
        pfVar19[3] = fVar28;
        pfVar19[4] = fVar30;
        pfVar19[5] = fVar36;
        pfVar19[6] = fVar34;
        pfVar19[7] = fVar31;
        pfVar19[8] = fVar37;
        pfVar19[9] = fVar26;
        pfVar19[10] = fVar32;
        pfVar19[0xb] = fVar39;
        pfVar19[0xc] = fVar40;
        pfVar19[0xd] = fVar44;
        pfVar19[0xe] = fVar48;
        pfVar19[0xf] = fVar41;
        pfVar19[0x10] = fVar45;
        pfVar19[0x11] = fVar49;
        pfVar19[0x12] = fVar42;
        pfVar19[0x13] = fVar46;
        pfVar19[0x14] = fVar50;
        pfVar19[0x15] = fVar43;
        pfVar19[0x16] = fVar47;
        pfVar19[0x17] = fVar51;
        pfVar10 = pfVar10 + 0x20;
        pfVar19 = pfVar19 + 0x18;
      } while (lVar14 != 0);
    }
    lVar14 = lVar9 - uVar21;
    pfVar10 = pfVar6 + lVar9 * 3 + 2;
    pfVar22 = pfVar22 + lVar9 * 4 + 2;
    do {
      bVar5 = lVar14 != -1;
      lVar14 = lVar14 + 1;
      pfVar10[-2] = pfVar22[-2];
      pfVar10[-1] = pfVar22[-1];
      *pfVar10 = *pfVar22;
      pfVar10 = pfVar10 + 3;
      pfVar22 = pfVar22 + 4;
    } while (bVar5);
  }
  local_60 = (float *)0x0;
  local_68 = (uint *)0x0;
  ConvexHull3DUtil::createHull(pfVar6,uVar18,&local_60,&local_54,&local_68,&local_6c);
  operator_delete__(pfVar6);
  uVar12 = local_54;
  uVar23 = (ulong)local_54;
  puVar7 = (undefined8 *)operator_new__(uVar23 * 0xc);
  uVar3 = local_6c;
  uVar21 = (ulong)local_6c;
  pBVar8 = (BrepTriangle *)operator_new__(uVar21 * 0x14);
  if (uVar12 == 0) goto LAB_00b754fc;
  if (uVar12 < 4) {
LAB_00b754b4:
    uVar11 = 0;
  }
  else {
    uVar17 = uVar23 - 1;
    uVar11 = 0;
    uVar15 = (uVar17 & 0xffffffff) + (uVar17 & 0xffffffff) * 2;
    bVar5 = (uVar15 & 0xffffffff00000000) == 0;
    uVar18 = (uint)uVar15;
    if ((((uVar18 != 0xffffffff) && (bVar5)) && (uVar17 >> 0x20 == 0)) &&
       ((uVar18 < 0xfffffffe && (bVar5)))) {
      if ((puVar7 < local_60 + uVar23 * 3) && (local_60 < (float *)((long)puVar7 + uVar23 * 0xc)))
      goto LAB_00b754b4;
      uVar15 = 0;
      uVar11 = uVar23 & 0xfffffffc;
      puVar20 = puVar7;
      do {
        uVar17 = uVar15 & 0xfffffffc;
        uVar15 = uVar15 + 0xc;
        puVar2 = (undefined8 *)(local_60 + uVar17);
        uVar29 = puVar2[2];
        uVar25 = puVar2[5];
        uVar24 = puVar2[4];
        uVar38 = puVar2[1];
        uVar35 = *puVar2;
        puVar20[3] = puVar2[3];
        puVar20[2] = uVar29;
        puVar20[5] = uVar25;
        puVar20[4] = uVar24;
        puVar20[1] = uVar38;
        *puVar20 = uVar35;
        puVar20 = puVar20 + 6;
      } while ((ulong)(uVar12 >> 2) * 0xc - uVar15 != 0);
      if (uVar11 == uVar23) goto LAB_00b754fc;
    }
  }
  uVar12 = (int)uVar11 * 3;
  lVar9 = uVar23 - uVar11;
  pfVar6 = (float *)((long)puVar7 + uVar11 * 0xc + 4);
  do {
    uVar18 = uVar12 + 1;
    uVar1 = uVar12 + 2;
    uVar23 = (ulong)uVar12;
    uVar12 = uVar12 + 3;
    lVar9 = lVar9 + -1;
    fVar28 = local_60[uVar18];
    fVar34 = local_60[uVar1];
    pfVar6[-1] = local_60[uVar23];
    *pfVar6 = fVar28;
    pfVar6[1] = fVar34;
    pfVar6 = pfVar6 + 3;
  } while (lVar9 != 0);
LAB_00b754fc:
  if (uVar3 != 0) {
    uVar23 = 0;
    puVar16 = (undefined4 *)(pBVar8 + 0x10);
    do {
      iVar13 = (int)uVar23;
      uVar3 = local_68[uVar23 & 0xffffffff];
      uVar23 = uVar23 + 3;
      uVar12 = local_68[iVar13 + 1];
      uVar18 = local_68[iVar13 + 2];
      *(undefined2 *)(puVar16 + -1) = 0;
      *puVar16 = 0;
      local_50 = CONCAT22((short)uVar12,(short)uVar3);
      *(short *)(puVar16 + -3) = (short)uVar18;
      *(undefined4 *)((long)puVar16 + -10) = 0xffffffff;
      *(undefined2 *)((long)puVar16 + -6) = 0xffff;
      puVar16[-4] = local_50;
      puVar16 = puVar16 + 5;
    } while (uVar21 * 3 != uVar23);
  }
  if (local_60 != (float *)0x0) {
    operator_delete__(local_60);
  }
  if (local_68 != (uint *)0x0) {
    operator_delete__(local_68);
  }
  this = (Brep *)operator_new(0x2fb8);
                    /* try { // try from 00b75588 to 00b755af has its CatchHandler @ 00b75694 */
  Brep::Brep(this,(ushort)local_54,(Vector3 *)puVar7,0,(BrepWedge *)0x0,local_6c,pBVar8,true,true,
             (Matrix4x4 *)0x0,(Matrix4x4 *)0x0,(uchar *)0x0);
  operator_delete__(puVar7);
  operator_delete__(pBVar8);
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


