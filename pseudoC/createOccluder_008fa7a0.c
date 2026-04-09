// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createOccluder
// Entry Point: 008fa7a0
// Size: 1944 bytes
// Signature: undefined __thiscall createOccluder(Decimator * this, int param_1, int param_2, int param_3, int param_4, uint param_5, float param_6, float param_7, float param_8, float param_9, uint param_10, bool param_11)


/* Decimator::createOccluder(int, int, int, int, unsigned int, float, float, float, float, unsigned
   int, bool) */

undefined8 __thiscall
Decimator::createOccluder
          (Decimator *this,int param_1,int param_2,int param_3,int param_4,uint param_5,
          float param_6,float param_7,float param_8,float param_9,uint param_10,bool param_11)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  undefined8 *puVar5;
  uint uVar6;
  void *pvVar7;
  Decimator DVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  short sVar13;
  long lVar14;
  short sVar15;
  short sVar16;
  short sVar17;
  float fVar18;
  bool bVar19;
  bool bVar20;
  int iVar21;
  Vector3 *pVVar22;
  Matrix4x4 *pMVar23;
  Matrix4x4 *pMVar24;
  uchar *puVar25;
  BrepTriangle *pBVar26;
  long *this_00;
  undefined8 uVar27;
  void *pvVar28;
  undefined4 *puVar29;
  int iVar30;
  uint uVar31;
  void *pvVar32;
  long lVar33;
  byte bVar34;
  int iVar35;
  ulong uVar36;
  long lVar37;
  byte bVar38;
  byte bVar39;
  undefined4 *puVar40;
  ulong uVar41;
  ushort uVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  undefined4 uVar51;
  float fVar52;
  float fVar53;
  void *local_d8;
  undefined8 local_d0;
  void *pvStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long local_90;
  
  uVar36 = (ulong)(uint)param_8;
  pvVar28 = (void *)(ulong)(uint)param_7;
  lVar14 = tpidr_el0;
  local_90 = *(long *)(lVar14 + 0x28);
  iVar21 = *(int *)(*(long *)this + 8) + -1 >> (param_4 & 0x1fU);
  iVar46 = *(int *)(*(long *)this + 0xc) + -1 >> (param_4 & 0x1fU);
  iVar43 = 0;
  if (*(int *)(this + 0x10) != 0) {
    iVar43 = iVar21 / *(int *)(this + 0x10);
  }
  iVar11 = iVar43 * param_1;
  iVar44 = 0;
  if (*(int *)(this + 0x14) != 0) {
    iVar44 = iVar46 / *(int *)(this + 0x14);
  }
  iVar2 = iVar11 + iVar43;
  iVar12 = iVar44 * param_2;
  iVar3 = iVar12 + iVar44;
  iVar35 = iVar2;
  iVar47 = iVar12;
  iVar45 = iVar3;
  iVar30 = iVar11;
  if (param_11) {
    if (iVar11 < 2) {
      iVar30 = 1;
    }
    if (iVar2 + 1 < iVar21) {
      iVar21 = iVar2 + 1;
    }
    if (iVar12 < 2) {
      iVar47 = 1;
    }
    if (iVar3 + 1 < iVar46) {
      iVar46 = iVar3 + 1;
    }
    iVar43 = iVar21 - (iVar30 + -1);
    iVar44 = iVar46 - (iVar47 + -1);
    iVar35 = iVar21;
    iVar47 = iVar47 + -1;
    iVar45 = iVar46;
    iVar30 = iVar30 + -1;
  }
  iVar21 = iVar43 + 1;
  uVar10 = iVar21 + iVar21 * iVar44;
  uVar41 = (ulong)uVar10;
  pVVar22 = (Vector3 *)operator_new__(uVar41 * 0xc);
  pMVar23 = (Matrix4x4 *)operator_new__(uVar41 << 6);
  pMVar24 = (Matrix4x4 *)operator_new__(uVar41 << 6);
  puVar25 = (uchar *)operator_new__(uVar41);
  uVar31 = iVar44 * iVar43 * 2;
  pBVar26 = (BrepTriangle *)operator_new__((ulong)uVar31 * 0x14);
  if (iVar47 != iVar45 + 1) {
    uVar41 = 0;
    do {
      if (iVar30 != iVar35 + 1) {
        iVar46 = iVar30;
        do {
          uVar51 = (undefined4)uVar36;
          uVar50 = SUB84(pvVar28,0);
          iVar9 = iVar46 << (ulong)(param_4 & 0x1f);
          uVar49 = HeightMap::position(*(HeightMap **)this,iVar9,iVar47 << (ulong)(param_4 & 0x1f));
          uVar36 = uVar41 & 0xffff;
          uVar27 = *(undefined8 *)this;
          puVar29 = (undefined4 *)(pVVar22 + uVar36 * 0xc);
          *puVar29 = uVar49;
          puVar29[1] = uVar50;
          puVar29[2] = uVar51;
          HeightMap::qem((int)uVar27,iVar9,param_9 * param_9);
          puVar5 = (undefined8 *)(pMVar23 + uVar36 * 0x40);
          puVar5[1] = pvStack_c8;
          *puVar5 = local_d0;
          puVar5[3] = uStack_b8;
          puVar5[2] = local_c0;
          uVar27 = *(undefined8 *)this;
          puVar5[5] = uStack_a8;
          puVar5[4] = local_b0;
          puVar5[7] = uStack_98;
          puVar5[6] = uStack_a0;
          HeightMap::qem((int)uVar27,iVar9,0.0);
          puVar5 = (undefined8 *)(pMVar24 + uVar36 * 0x40);
          uVar41 = (ulong)((int)uVar41 + 1);
          bVar20 = iVar2 == iVar46;
          bVar19 = iVar46 < iVar11;
          bVar38 = 2;
          if ((iVar11 != iVar46 || iVar12 > iVar47) || iVar47 > iVar3) {
            bVar38 = 0;
          }
          bVar1 = iVar2 < iVar46;
          puVar5[1] = pvStack_c8;
          *puVar5 = local_d0;
          puVar5[3] = uStack_b8;
          puVar5[2] = local_c0;
          iVar46 = iVar46 + 1;
          bVar39 = 4;
          if ((iVar47 != iVar3 || bVar19) || bVar1) {
            bVar39 = 0;
          }
          bVar34 = 8;
          if ((iVar47 != iVar12 || bVar19) || bVar1) {
            bVar34 = 0;
          }
          puVar5[5] = uStack_a8;
          puVar5[4] = local_b0;
          puVar5[7] = uStack_98;
          puVar5[6] = uStack_a0;
          puVar25[uVar36] =
               bVar38 | ((bVar20 && iVar12 <= iVar47) && iVar47 <= iVar3) | bVar39 | bVar34;
          pvVar28 = local_c0;
          uVar36 = local_b0;
        } while (iVar35 + 1 != iVar46);
      }
      bVar19 = iVar47 != iVar45;
      iVar47 = iVar47 + 1;
    } while (bVar19);
  }
  if (iVar44 != 0) {
    iVar30 = 0;
    iVar46 = 0;
    uVar36 = 0;
    DVar8 = this[0x20];
    do {
      if (iVar43 != 0) {
        iVar47 = 0;
        do {
          sVar13 = (short)iVar30 + (short)iVar47;
          sVar15 = (short)iVar43 + (short)iVar30 + (short)iVar47;
          sVar16 = sVar15;
          sVar17 = sVar13;
          if (DVar8 != (Decimator)0x0) {
            sVar16 = sVar13;
            sVar17 = sVar15;
          }
          iVar47 = iVar47 + 1;
          puVar40 = (undefined4 *)(pBVar26 + (uVar36 & 0xffff) * 0x14);
          local_d0._0_4_ = CONCAT22(sVar17 + 1,sVar13);
          uVar49 = (undefined4)local_d0;
          iVar35 = (int)uVar36;
          local_d0._0_4_ = CONCAT22(sVar15 + 2,sVar13);
          uVar36 = (ulong)(iVar35 + 2);
          puVar29 = (undefined4 *)(pBVar26 + ((ulong)(iVar35 + 1) & 0xffff) * 0x14);
          puVar40[4] = 0;
          *puVar40 = uVar49;
          *(short *)(puVar40 + 1) = sVar15 + 2;
          *(undefined8 *)((long)puVar40 + 6) = 0xffffffffffffffff;
          puVar29[4] = 0;
          *(short *)(puVar29 + 1) = sVar16 + 1;
          *puVar29 = (undefined4)local_d0;
          *(undefined8 *)((long)puVar29 + 6) = 0xffffffffffffffff;
        } while (iVar43 != iVar47);
      }
      iVar46 = iVar46 + 1;
      iVar30 = iVar30 + iVar21;
    } while (iVar46 != iVar44);
  }
  this_00 = (long *)operator_new(0x2fb8);
                    /* try { // try from 008fa9e0 to 008faa0b has its CatchHandler @ 008faf38 */
  Brep::Brep((Brep *)this_00,(ushort)uVar10,pVVar22,0,(BrepWedge *)0x0,uVar31,pBVar26,false,false,
             pMVar23,pMVar24,puVar25);
  operator_delete__(pBVar26);
  operator_delete__(puVar25);
  operator_delete__(pMVar24);
  operator_delete__(pMVar23);
  operator_delete__(pVVar22);
  if (uVar10 != 0) {
    uVar42 = 0;
    do {
      uVar36 = Brep::isOuterCone((Brep *)this_00,uVar42);
      if (((uVar36 & 1) != 0) && (*(char *)(this_00[0x5e7] + (ulong)uVar42) == '\0')) {
        lVar33 = this_00[0x5ed];
        uVar31 = *(uint *)(this_00[0x5ea] + (ulong)uVar42 * 0xc + 4);
        do {
          lVar37 = (ulong)(uVar31 >> 2) * 0x20;
          *(undefined2 *)(lVar33 + (ulong)uVar31 * 8 + 2) = 0x8000;
          *(ushort *)(lVar33 + lVar37) = *(ushort *)(lVar33 + lVar37) | 0x8000;
          uVar6 = uVar31 + 2;
          if ((uVar31 - 1 & 3) != 0) {
            uVar6 = uVar31 - 1;
          }
          *(undefined2 *)(this_00[0x5ed] + (ulong)uVar6 * 8 + 2) = 0x8000;
          lVar33 = this_00[0x5ed];
          uVar31 = *(uint *)(lVar33 + (ulong)uVar6 * 8 + 4);
        } while (uVar31 != 0xffffffff);
      }
      uVar42 = uVar42 + 1;
    } while (uVar10 != uVar42);
  }
  Brep::decimate((Brep *)this_00,param_5,param_6,param_7,param_8,param_10);
  Brep::stripIncontractibleOuter();
  local_d8 = (void *)NEON_fmov(0x3f800000,4);
  local_d0 = local_d8;
  uVar27 = BrepUtil::createIndexedTriangleSetFromBrep
                     ((Brep *)this_00,0,(Vector2 *)&local_d0,(Vector2 *)&local_d8,(ushort **)0x0);
  lVar33 = *(long *)(this + 8);
  lVar37 = (long)(param_1 + (param_2 + *(int *)(this + 0x14) * param_3) * *(int *)(this + 0x10));
  Brep::extractBoundary();
  ppvVar4 = (void **)(lVar33 + lVar37 * 0x20);
  pvVar28 = *ppvVar4;
  if (pvVar28 != (void *)0x0) {
    ppvVar4[1] = pvVar28;
    operator_delete(pvVar28);
    *ppvVar4 = (void *)0x0;
    ppvVar4[1] = (void *)0x0;
    ppvVar4[2] = (void *)0x0;
  }
  *ppvVar4 = local_d0;
  ppvVar4[1] = pvStack_c8;
  ppvVar4[2] = local_c0;
  (**(code **)(*this_00 + 8))(this_00);
  pvVar28 = *ppvVar4;
  pvVar7 = ppvVar4[1];
  fVar53 = *(float *)(this + 0x1c);
  fVar52 = fVar53 * (float)(iVar12 << (ulong)(param_4 & 0x1f));
  if (((DAT_0107e248 & 1) == 0) && (iVar21 = __cxa_guard_acquire(&DAT_0107e248), iVar21 != 0)) {
    DAT_0107e240 = param_8 * 0.7071068;
    __cxa_guard_release(&DAT_0107e248);
  }
  fVar18 = DAT_0107e240;
  pvVar32 = *ppvVar4;
  uVar31 = (int)((ulong)((long)pvVar7 - (long)pvVar28) >> 2) * 0xaaab;
  uVar36 = 0;
  fVar48 = *(float *)((long)pvVar32 + 4);
  while (ABS(fVar52 - fVar48) <= DAT_0107e240) {
    uVar10 = uVar31;
    if ((uVar36 & 0xffff) != 0) {
      uVar10 = (uint)uVar36;
    }
    uVar36 = (ulong)(uVar10 - 1);
    fVar48 = *(float *)((long)pvVar32 + (uVar36 & 0xffff) * 0xc + 4);
  }
  do {
    uVar10 = 0;
    if (((int)uVar36 + 1U & 0xffff) != (uVar31 & 0xffff)) {
      uVar10 = (int)uVar36 + 1;
    }
    uVar36 = (ulong)uVar10;
  } while (DAT_0107e240 < ABS(fVar52 - *(float *)((long)pvVar32 + (uVar36 & 0xffff) * 0xc + 4)));
  *(short *)(lVar33 + lVar37 * 0x20 + 0x18) = (short)uVar10;
  do {
    uVar10 = 0;
    if (((int)uVar36 + 1U & 0xffff) != (uVar31 & 0xffff)) {
      uVar10 = (int)uVar36 + 1;
    }
    uVar36 = (ulong)uVar10;
  } while (fVar18 < ABS(fVar53 * (float)(iVar2 << (ulong)(param_4 & 0x1f)) -
                        *(float *)((long)pvVar32 + (uVar36 & 0xffff) * 0xc)));
  *(short *)(lVar33 + lVar37 * 0x20 + 0x1a) = (short)uVar10;
  do {
    uVar10 = 0;
    if (((int)uVar36 + 1U & 0xffff) != (uVar31 & 0xffff)) {
      uVar10 = (int)uVar36 + 1;
    }
    uVar36 = (ulong)uVar10;
  } while (fVar18 < ABS(fVar53 * (float)(iVar3 << (ulong)(param_4 & 0x1f)) -
                        *(float *)((long)pvVar32 + (uVar36 & 0xffff) * 0xc + 4)));
  *(short *)(lVar33 + lVar37 * 0x20 + 0x1c) = (short)uVar10;
  do {
    uVar10 = 0;
    if (((int)uVar36 + 1U & 0xffff) != (uVar31 & 0xffff)) {
      uVar10 = (int)uVar36 + 1;
    }
    uVar36 = (ulong)uVar10;
  } while (fVar18 < ABS(fVar53 * (float)(iVar11 << (ulong)(param_4 & 0x1f)) -
                        *(float *)((long)pvVar32 + (uVar36 & 0xffff) * 0xc)));
  *(short *)(lVar33 + lVar37 * 0x20 + 0x1e) = (short)uVar10;
  if (*(long *)(lVar14 + 0x28) == local_90) {
    return uVar27;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


