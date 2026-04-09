// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Bt2PhysicsMeshInterface
// Entry Point: 0098e554
// Size: 1208 bytes
// Signature: undefined __thiscall Bt2PhysicsMeshInterface(Bt2PhysicsMeshInterface * this, uint param_1, float * param_2, uint param_3, ushort * param_4, bool param_5, bool param_6)


/* Bt2PhysicsMeshInterface::Bt2PhysicsMeshInterface(unsigned int, float*, unsigned int, unsigned
   short*, bool, bool) */

void __thiscall
Bt2PhysicsMeshInterface::Bt2PhysicsMeshInterface
          (Bt2PhysicsMeshInterface *this,uint param_1,float *param_2,uint param_3,ushort *param_4,
          bool param_5,bool param_6)

{
  float fVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  long lVar6;
  ushort *puVar7;
  void *__dest;
  ushort *puVar8;
  void *pvVar9;
  ushort *puVar10;
  float **ppfVar11;
  ulong uVar12;
  ushort *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  float *pfVar17;
  float *pfVar18;
  undefined8 uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  short sVar26;
  short sVar27;
  short sVar28;
  short sVar30;
  short sVar31;
  undefined8 uVar29;
  short sVar32;
  float *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  *(undefined ***)this = &PTR__Bt2PhysicsMeshInterface_00fe0bd8;
  *(undefined8 *)(this + 0x10) = 0x3f800000;
  *(undefined8 *)(this + 8) = 0x3f8000003f800000;
  *(uint *)(this + 0x18) = param_1;
  *(uint *)(this + 0x1c) = param_3 / 3;
  if (!param_5) {
    *(ushort **)(this + 0x20) = param_4;
    *(float **)(this + 0x28) = param_2;
    goto LAB_0098e824;
  }
  uVar24 = (ulong)param_1;
  if (!param_6) {
                    /* try { // try from 0098e608 to 0098e623 has its CatchHandler @ 0098ea1c */
    pvVar9 = operator_new__((ulong)(param_1 * 3) << 2);
    *(void **)(this + 0x28) = pvVar9;
    __dest = operator_new__((ulong)param_3 << 1);
    *(void **)(this + 0x20) = __dest;
    memcpy(pvVar9,param_2,uVar24 * 0xc);
    memcpy(__dest,param_4,(ulong)param_3 << 1);
    goto LAB_0098e824;
  }
                    /* try { // try from 0098e5d8 to 0098e5df has its CatchHandler @ 0098ea18 */
  puVar7 = (ushort *)operator_new__(uVar24 << 1);
  if (param_1 != 0) {
    if (param_1 < 0x10) {
      uVar12 = 0;
    }
    else {
      uVar12 = uVar24 & 0xfffffff0;
      uVar29 = 0x7000600050004;
      uVar19 = 0x3000200010000;
      puVar14 = (undefined8 *)(puVar7 + 8);
      uVar16 = uVar12;
      do {
        sVar26 = (short)((ulong)uVar19 >> 0x10);
        sVar27 = (short)((ulong)uVar19 >> 0x20);
        sVar28 = (short)((ulong)uVar19 >> 0x30);
        sVar30 = (short)((ulong)uVar29 >> 0x10);
        sVar31 = (short)((ulong)uVar29 >> 0x20);
        sVar32 = (short)((ulong)uVar29 >> 0x30);
        uVar16 = uVar16 - 0x10;
        puVar14[-1] = uVar29;
        puVar14[-2] = uVar19;
        puVar14[1] = CONCAT26(sVar32 + 8,CONCAT24(sVar31 + 8,CONCAT22(sVar30 + 8,(short)uVar29 + 8))
                             );
        *puVar14 = CONCAT26(sVar28 + 8,CONCAT24(sVar27 + 8,CONCAT22(sVar26 + 8,(short)uVar19 + 8)));
        puVar14 = puVar14 + 4;
        uVar19 = CONCAT26(sVar28 + 0x10,
                          CONCAT24(sVar27 + 0x10,CONCAT22(sVar26 + 0x10,(short)uVar19 + 0x10)));
        uVar29 = CONCAT26(sVar32 + 0x10,
                          CONCAT24(sVar31 + 0x10,CONCAT22(sVar30 + 0x10,(short)uVar29 + 0x10)));
      } while (uVar16 != 0);
      if (uVar12 == uVar24) goto LAB_0098e6a0;
    }
    do {
      puVar7[uVar12] = (ushort)uVar12;
      uVar12 = uVar12 + 1;
    } while (uVar24 != uVar12);
  }
LAB_0098e6a0:
  puVar10 = puVar7 + uVar24;
                    /* try { // try from 0098e6a8 to 0098e6b3 has its CatchHandler @ 0098ea18 */
  ppfVar11 = &local_70;
  local_70 = param_2;
  std::__ndk1::__sort<Bt2PhysicsMeshInterface::VertexSorter&,unsigned_short*>
            (puVar7,puVar10,(VertexSorter *)ppfVar11);
                    /* try { // try from 0098e6b4 to 0098e6bb has its CatchHandler @ 0098ea14 */
  puVar8 = (ushort *)operator_new__(uVar24 << 1);
  uVar2 = *puVar7;
  puVar8[uVar2] = 0;
  if (param_1 < 2) {
    iVar22 = 1;
  }
  else {
    lVar15 = uVar24 - 1;
    iVar22 = 1;
    uVar12 = (ulong)uVar2;
    puVar13 = puVar7;
    do {
      puVar13 = puVar13 + 1;
      uVar16 = (ulong)*puVar13;
      pfVar17 = param_2 + uVar12 * 3;
      pfVar18 = param_2 + uVar16 * 3;
      if (((0.0001 < ABS(*pfVar17 - *pfVar18)) || (0.0001 < ABS(pfVar17[1] - pfVar18[1]))) ||
         (0.0001 < ABS(pfVar17[2] - pfVar18[2]))) {
        iVar22 = iVar22 + 1;
      }
      lVar15 = lVar15 + -1;
      puVar8[uVar16] = (short)iVar22 - 1;
      uVar12 = uVar16;
    } while (lVar15 != 0);
  }
  operator_delete__(puVar7);
                    /* try { // try from 0098e77c to 0098e77f has its CatchHandler @ 0098ea10 */
  pvVar9 = operator_new__((ulong)(uint)(iVar22 * 3) << 2);
  *(void **)(this + 0x28) = pvVar9;
  if (param_1 != 0) {
    fVar1 = param_2[2];
    puVar14 = (undefined8 *)((long)pvVar9 + (ulong)*puVar8 * 0xc);
    *puVar14 = *(undefined8 *)param_2;
    *(float *)(puVar14 + 1) = fVar1;
    if (param_1 != 1) {
      lVar15 = uVar24 - 1;
      uVar24 = 3;
      puVar7 = puVar8;
      do {
        puVar7 = puVar7 + 1;
        uVar12 = uVar24 & 0xffffffff;
        lVar15 = lVar15 + -1;
        uVar24 = uVar24 + 3;
        puVar14 = (undefined8 *)(*(long *)(this + 0x28) + (ulong)*puVar7 * 0xc);
        uVar19 = *(undefined8 *)(param_2 + uVar12);
        *(float *)(puVar14 + 1) = *(float *)((long)(param_2 + uVar12) + 8);
        *puVar14 = uVar19;
      } while (lVar15 != 0);
    }
  }
  *(int *)(this + 0x18) = iVar22;
  uVar25 = param_3 / 3;
  if (param_3 < 3) {
    iVar23 = 0;
  }
  else {
    uVar20 = uVar25;
    if (param_3 / 3 < 2) {
      uVar20 = 1;
    }
    uVar24 = (ulong)uVar20;
    if (uVar20 < 2) {
      uVar16 = 0;
      iVar23 = 0;
    }
    else {
      uVar16 = uVar24 & 0x7ffffffe;
      iVar22 = 0;
      iVar23 = 0;
      puVar7 = param_4 + 3;
      uVar12 = uVar16;
      do {
        uVar2 = puVar8[puVar7[-3]];
        uVar3 = puVar8[puVar7[-2]];
        if (uVar2 != uVar3) {
          pvVar9 = (void *)(ulong)puVar7[-1];
        }
        uVar4 = puVar8[*puVar7];
        uVar5 = puVar8[puVar7[1]];
        if (uVar4 != uVar5) {
          ppfVar11 = (float **)(ulong)puVar7[2];
        }
        if (uVar2 != uVar3) {
          pvVar9 = (void *)((ulong)pvVar9 & 0xffff);
          puVar10 = (ushort *)(ulong)puVar8[(long)pvVar9];
        }
        if (uVar4 != uVar5) {
          pvVar9 = (void *)(ulong)puVar8[(ulong)ppfVar11 & 0xffff];
        }
        uVar20 = (uint)uVar4;
        uVar21 = (uint)uVar5;
        puVar7 = puVar7 + 6;
        ppfVar11 = (float **)(ulong)(uVar20 != uVar21);
        iVar22 = iVar22 + (uint)(((uint)uVar2 != (uint)uVar3 && (uint)uVar3 != (uint)puVar10) &&
                                (uint)puVar10 != (uint)uVar2);
        iVar23 = iVar23 + (uint)((uVar20 != uVar21 && uVar21 != (uint)pvVar9) &&
                                (uint)pvVar9 != uVar20);
        uVar12 = uVar12 - 2;
      } while (uVar12 != 0);
      iVar23 = iVar23 + iVar22;
      if (uVar16 == uVar24) goto LAB_0098e7fc;
    }
    lVar15 = uVar24 - uVar16;
    puVar7 = param_4 + uVar16 * 3 + 2;
    do {
      if (puVar8[puVar7[-2]] != puVar8[puVar7[-1]]) {
        iVar23 = iVar23 + (uint)(puVar8[puVar7[-1]] != puVar8[*puVar7] &&
                                puVar8[*puVar7] != puVar8[puVar7[-2]]);
      }
      puVar7 = puVar7 + 3;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
LAB_0098e7fc:
                    /* try { // try from 0098e804 to 0098e807 has its CatchHandler @ 0098ea0c */
  pvVar9 = operator_new__((ulong)(uint)(iVar23 * 3) << 1);
  *(void **)(this + 0x20) = pvVar9;
  *(int *)(this + 0x1c) = iVar23;
  if (2 < param_3) {
    uVar20 = 0;
    if (uVar25 < 2) {
      uVar25 = 1;
    }
    uVar24 = (ulong)uVar25;
    puVar7 = param_4 + 2;
    do {
      uVar2 = puVar8[puVar7[-2]];
      uVar3 = puVar8[puVar7[-1]];
      uVar4 = puVar8[*puVar7];
      if ((uVar2 != uVar3 && uVar3 != uVar4) && uVar4 != uVar2) {
        uVar25 = uVar20 + 1;
        uVar21 = uVar20 + 2;
        *(ushort *)((long)pvVar9 + (ulong)uVar20 * 2) = uVar2;
        uVar20 = uVar20 + 3;
        *(ushort *)((long)pvVar9 + (ulong)uVar25 * 2) = uVar3;
        *(ushort *)((long)pvVar9 + (ulong)uVar21 * 2) = uVar4;
      }
      puVar7 = puVar7 + 3;
      uVar24 = uVar24 - 1;
    } while (uVar24 != 0);
  }
  operator_delete__(puVar8);
LAB_0098e824:
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


