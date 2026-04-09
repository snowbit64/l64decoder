// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createPath
// Entry Point: 00af9490
// Size: 2340 bytes
// Signature: undefined __thiscall createPath(DetourNavigationMeshQuery * this, PathRequestDesc * param_1)


/* WARNING: Removing unreachable block (ram,0x00af97c8) */
/* WARNING: Removing unreachable block (ram,0x00af97dc) */
/* WARNING: Removing unreachable block (ram,0x00af97c0) */
/* WARNING: Removing unreachable block (ram,0x00af99e0) */
/* WARNING: Removing unreachable block (ram,0x00af9cc4) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* DetourNavigationMeshQuery::createPath(PathRequestDesc const&) */

NavigationMeshPath * __thiscall
DetourNavigationMeshQuery::createPath(DetourNavigationMeshQuery *this,PathRequestDesc *param_1)

{
  bool bVar1;
  undefined8 *puVar2;
  uint uVar3;
  long lVar4;
  byte bVar5;
  bool bVar6;
  uint uVar7;
  dtNavMeshQuery *this_00;
  NavigationMeshPath *this_01;
  int iVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined (*pauVar18) [16];
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  float *pfVar22;
  uint uVar23;
  uint uVar24;
  ulong uVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  undefined auVar29 [16];
  float fVar30;
  undefined auVar31 [16];
  undefined4 uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  ulong local_6988;
  float local_6980;
  float local_697c;
  uint local_6978;
  uint local_6974;
  undefined8 local_6970;
  float local_6968;
  undefined8 local_6964;
  float local_695c;
  undefined4 uStack_6958;
  undefined4 local_6954;
  undefined8 local_6950;
  undefined8 uStack_6948;
  undefined8 uStack_6940;
  undefined8 uStack_6938;
  undefined4 local_6930;
  float local_6904;
  float local_6900;
  float local_68fc;
  undefined8 local_68f8;
  float local_68f0;
  undefined local_68ec [256];
  float local_67ec;
  float local_67e8;
  undefined4 local_67e4;
  undefined8 local_8f8;
  undefined4 local_8f0;
  float local_8e8;
  float fStack_8e4;
  float local_8e0;
  uint local_8d8 [4];
  undefined8 auStack_8c8 [126];
  uint auStack_4d8 [256];
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  long local_b8;
  
  lVar4 = tpidr_el0;
  local_b8 = *(long *)(lVar4 + 0x28);
  local_d8 = 0x4080000040000000;
  local_d0 = 0x40000000;
  memset(auStack_4d8,0,0x400);
  puVar2 = (undefined8 *)(this + 0x10);
  local_6970 = 0;
  dtNavMeshQuery::findNearestPoly
            (*(dtNavMeshQuery **)(this + 8),(float *)param_1,(float *)&local_d8,
             (dtQueryFilter *)puVar2,(uint *)((long)&local_6970 + 4),(float *)0x0);
  pfVar22 = (float *)(param_1 + 0xc);
  dtNavMeshQuery::findNearestPoly
            (*(dtNavMeshQuery **)(this + 8),pfVar22,(float *)&local_d8,(dtQueryFilter *)puVar2,
             (uint *)&local_6970,(float *)0x0);
  local_6974 = 0;
  if ((-1.570796 < *(float *)(param_1 + 0x1c)) || (*(float *)(param_1 + 0x1c) < 1.570796)) {
    dtQueryFilter::dtQueryFilter((dtQueryFilter *)&local_68f8);
    fVar35 = *(float *)(param_1 + 0x20);
    fVar34 = 1.57079 - *(float *)(param_1 + 0x1c);
    uVar26 = *(undefined4 *)(param_1 + 0x24);
    local_68f8 = &PTR_passFilter_00fe7050;
    if (fVar34 <= 0.0) {
      fVar34 = 0.0;
    }
    local_67ec = cosf(fVar34);
    fVar35 = 1.57079 - fVar35;
    if (fVar35 <= 0.0) {
      fVar35 = 0.0;
    }
    local_67e8 = cosf(fVar35);
    this_00 = *(dtNavMeshQuery **)(this + 8);
    puVar9 = &local_68f8;
    local_67e4 = uVar26;
  }
  else {
    this_00 = *(dtNavMeshQuery **)(this + 8);
    puVar9 = puVar2;
  }
  dtNavMeshQuery::findPath
            (this_00,local_6970._4_4_,(uint)local_6970,(float *)param_1,pfVar22,
             (dtQueryFilter *)puVar9,auStack_4d8,(int *)&local_6974,0x100);
  uVar25 = (ulong)local_6974;
  uVar7 = local_6974 - 1;
  if ((int)local_6974 < 1) {
    this_01 = (NavigationMeshPath *)operator_new(0x30);
                    /* try { // try from 00af9ca4 to 00af9cb7 has its CatchHandler @ 00af9db4 */
    NavigationMeshPath::NavigationMeshPath(this_01,1,(float *)param_1,pfVar22,0);
  }
  else {
    memset(local_8d8,0,0x400);
    __memcpy_chk(local_8d8,auStack_4d8,uVar25 << 2,0x400);
    local_8e0 = 0.0;
    local_8e8 = 0.0;
    fStack_8e4 = 0.0;
    local_8f0 = 0;
    local_8f8 = 0;
    dtNavMeshQuery::closestPointOnPolyBoundary
              (*(dtNavMeshQuery **)(this + 8),local_6970._4_4_,(float *)param_1,&local_8e8);
    dtNavMeshQuery::closestPointOnPolyBoundary
              (*(dtNavMeshQuery **)(this + 8),local_8d8[uVar7],pfVar22,(float *)&local_8f8);
    memset(local_68ec,0,0x5ff4);
    local_68f8 = (undefined **)CONCAT44(fStack_8e4,local_8e8);
    local_6988 = 1;
    local_68f0 = local_8e0;
    while( true ) {
      local_6930 = 0;
      uStack_6948 = 0;
      local_6950 = 0;
      uStack_6938 = 0;
      uStack_6940 = 0;
      local_695c = (float)((uint)local_695c & 0xff000000);
      local_c0 = 0;
      local_c8 = 0;
      local_6904 = 0.0;
      iVar8 = (int)uVar25;
      dtNavMeshQuery::findStraightPath
                (*(dtNavMeshQuery **)(this + 8),&local_8e8,(float *)&local_8f8,local_8d8,iVar8,
                 (float *)&local_6950,(uchar *)&local_695c,(uint *)&local_c8,(int *)&local_6904,3);
      fVar35 = fStack_8e4;
      fVar34 = local_695c;
      if ((int)local_6904 < 1) break;
      bVar5 = local_695c._0_1_;
      fVar30 = (float)local_6950;
      fVar33 = (float)uStack_6948;
      if ((local_695c._0_1_ >> 2 & 1) == 0) {
        NEON_fmadd(local_8e8 - (float)local_6950,local_8e8 - (float)local_6950,
                   (local_8e0 - (float)uStack_6948) * (local_8e0 - (float)uStack_6948));
      }
      fVar36 = fStack_8e4 - fStack_8e4;
      fVar37 = (float)local_6950 - local_8e8;
      fVar38 = (float)uStack_6948 - local_8e0;
      uVar7 = (uint)local_c8;
      uVar26 = NEON_fmadd(fVar37,fVar37,fVar36 * fVar36);
      fVar27 = (float)NEON_fmadd(fVar38,fVar38,uVar26);
      fVar28 = (float)dtSqrt(fVar27);
      local_6978 = 0;
      fVar27 = 1.0;
      if (*(float *)(param_1 + 0x18) <= fVar28 || ((uint)fVar34 & 6) == 0) {
        fVar27 = *(float *)(param_1 + 0x18) / fVar28;
      }
      uVar26 = NEON_fmadd(fVar37,fVar27,local_8e8);
      uVar32 = NEON_fmadd(fVar36,fVar27,fStack_8e4);
      local_c0 = NEON_fmadd(fVar38,fVar27,local_8e0);
      local_c8 = CONCAT44(uVar32,uVar26);
      dtNavMeshQuery::moveAlongSurface
                (*(dtNavMeshQuery **)(this + 8),local_8d8[0],&local_8e8,(float *)&local_c8,
                 (dtQueryFilter *)puVar2,&local_6904,(uint *)&local_6950,(int *)&local_6978,0x10);
      uVar24 = local_6978;
      uVar10 = 0xffffffff;
      iVar15 = -1;
      uVar23 = local_6978 - 1;
      lVar20 = (long)iVar8;
      do {
        lVar14 = lVar20 + -1;
        if (lVar20 < 1) break;
        if ((int)local_6978 < 1) {
          bVar1 = false;
        }
        else {
          bVar1 = false;
          lVar20 = (ulong)local_6978 + 1;
          uVar3 = uVar23;
          uVar11 = uVar10;
          iVar16 = iVar15;
          do {
            lVar20 = lVar20 + -1;
            bVar6 = local_8d8[lVar14] == *(uint *)((long)&local_6950 + (ulong)uVar3 * 4);
            uVar10 = uVar3;
            if (!bVar6) {
              uVar10 = uVar11;
            }
            iVar15 = (int)lVar14;
            if (!bVar6) {
              iVar15 = iVar16;
            }
            bVar1 = (bool)(bVar6 | bVar1);
            uVar3 = uVar3 - 1;
            uVar11 = uVar10;
            iVar16 = iVar15;
          } while (1 < lVar20);
        }
        lVar20 = lVar14;
      } while (!bVar1);
      if ((iVar15 != -1) && (uVar10 != 0xffffffff)) {
        iVar16 = iVar8;
        if (iVar15 + 1 < iVar8) {
          iVar16 = iVar15 + 1;
        }
        uVar10 = local_6978 - uVar10;
        uVar25 = (ulong)uVar10;
        uVar3 = iVar8 - iVar16 & (iVar8 - iVar16 >> 0x1f ^ 0xffffffffU);
        uVar11 = 0x100 - uVar10;
        if ((int)(uVar3 + uVar10) < 0x101) {
          uVar11 = uVar3;
        }
        if (uVar11 != 0) {
          memmove(local_8d8 + (int)uVar10,local_8d8 + iVar16,
                  -(ulong)(uVar11 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar11 << 2);
        }
        if (0 < (int)uVar10) {
          if (uVar10 < 8) {
            uVar12 = 0;
          }
          else {
            uVar12 = 0;
            if (((int)(uVar23 - (int)(uVar25 - 1)) <= (int)uVar23) && (uVar25 - 1 >> 0x20 == 0)) {
              uVar12 = uVar25 & 0xfffffff8;
              uVar13 = uVar12;
              puVar9 = auStack_8c8;
              do {
                lVar20 = (long)(int)uVar23;
                uVar13 = uVar13 - 8;
                uVar23 = uVar23 - 8;
                auVar29 = NEON_rev64(*(undefined (*) [16])(&local_695c + lVar20),4);
                auVar31 = NEON_rev64(*(undefined (*) [16])((long)&local_6970 + lVar20 * 4 + 4),4);
                auVar29 = NEON_ext(auVar29,auVar29,8,1);
                auVar31 = NEON_ext(auVar31,auVar31,8,1);
                puVar9[-1] = auVar29._8_8_;
                puVar9[-2] = auVar29._0_8_;
                puVar9[1] = auVar31._8_8_;
                *puVar9 = auVar31._0_8_;
                puVar9 = puVar9 + 4;
              } while (uVar13 != 0);
              if (uVar12 == uVar25) goto LAB_00af9984;
            }
          }
          lVar20 = uVar25 - uVar12;
          iVar8 = ~(uint)uVar12 + uVar24;
          puVar17 = local_8d8 + uVar12;
          do {
            lVar14 = (long)iVar8;
            lVar20 = lVar20 + -1;
            iVar8 = iVar8 + -1;
            *puVar17 = *(uint *)((long)&local_6950 + lVar14 * 4);
            puVar17 = puVar17 + 1;
          } while (lVar20 != 0);
        }
LAB_00af9984:
        uVar25 = (ulong)(uVar11 + uVar10);
      }
      local_697c = 0.0;
      dtNavMeshQuery::getPolyHeight
                (*(dtNavMeshQuery **)(this + 8),local_8d8[0],&local_6904,&local_697c);
      local_6900 = local_697c;
      local_8e8 = local_6904;
      fStack_8e4 = local_697c;
      local_8e0 = local_68fc;
      if ((bVar5 >> 1 & 1) != 0) {
        fVar34 = fVar33 - local_68fc;
        fVar27 = fVar30 - local_6904;
        NEON_fmadd(fVar27,fVar27,fVar34 * fVar34);
      }
      if ((((bVar5 >> 2 & 1) != 0) &&
          (fVar33 = fVar33 - local_68fc, fVar30 = fVar30 - local_6904,
          fVar34 = (float)NEON_fmadd(fVar30,fVar30,fVar33 * fVar33), fVar34 < 0.0001)) &&
         (ABS(fVar35 - local_697c) < 1.0)) {
        uVar23 = 0;
        uVar24 = (uint)uVar25;
        uVar10 = local_8d8[0];
        if ((int)uVar24 < 1) {
          uVar12 = 0;
          if (0 < (int)uVar24) goto LAB_00af9b08;
        }
        else {
          if (local_8d8[0] == uVar7) {
            uVar12 = 0;
          }
          else {
            if (uVar24 < 2) {
              uVar12 = 1;
              uVar7 = uVar24 - 1;
              bVar1 = 0 < (int)uVar24;
              uVar23 = local_8d8[0];
              uVar24 = uVar7;
              if (uVar7 != 0 && bVar1) goto LAB_00af9b08;
              goto LAB_00af9bac;
            }
            uVar12 = 1;
            do {
              uVar23 = uVar10;
              uVar10 = local_8d8[uVar12];
              uVar12 = uVar12 + 1;
              if (uVar25 <= uVar12) break;
            } while (uVar10 != uVar7);
          }
          uVar7 = uVar24 - (int)uVar12;
          bVar1 = (int)uVar12 <= (int)uVar24;
          uVar24 = uVar7;
          if (uVar7 != 0 && bVar1) {
LAB_00af9b08:
            uVar13 = uVar12 & 0xffffffff;
            lVar20 = (long)(int)uVar12;
            uVar12 = uVar25 - uVar13;
            if ((7 < uVar12) &&
               ((pauVar18 = (undefined (*) [16])(local_8d8 + uVar13),
                local_8d8 + uVar25 <= local_8d8 + (uVar13 - lVar20) ||
                ((undefined (*) [16])(local_8d8 + (uVar25 - lVar20)) <= pauVar18)))) {
              uVar19 = uVar12 & 0xfffffffffffffff8;
              uVar13 = uVar19 + uVar13;
              uVar21 = uVar19;
              do {
                puVar9 = (undefined8 *)((long)pauVar18 + lVar20 * -4);
                uVar21 = uVar21 - 8;
                auVar29 = *pauVar18;
                auVar31 = pauVar18[1];
                puVar9[1] = auVar29._8_8_;
                *puVar9 = auVar29._0_8_;
                puVar9[3] = auVar31._8_8_;
                puVar9[2] = auVar31._0_8_;
                pauVar18 = pauVar18 + 2;
              } while (uVar21 != 0);
              if (uVar12 == uVar19) goto LAB_00af9bac;
            }
            puVar17 = local_8d8 + uVar13;
            lVar14 = uVar25 - uVar13;
            do {
              lVar14 = lVar14 + -1;
              puVar17[-lVar20] = *puVar17;
              puVar17 = puVar17 + 1;
            } while (lVar14 != 0);
          }
        }
LAB_00af9bac:
        uVar7 = dtNavMesh::getOffMeshConnectionPolyEndPoints
                          (*(dtNavMesh **)this,uVar23,uVar10,&local_695c,&local_6968);
        if ((uVar7 >> 0x1e & 1) != 0) {
          iVar8 = (int)local_6988;
          lVar20 = (long)iVar8 * 0xc;
          local_6988 = (long)iVar8 + 1;
          *(float *)((long)&local_68f8 + lVar20) = local_695c;
          *(undefined4 *)((long)&local_68f8 + lVar20 + 4) = uStack_6958;
          *(undefined4 *)(local_68ec + lVar20 + -4) = local_6954;
          if ((local_6988 & 1) != 0) {
            lVar20 = local_6988 * 0xc;
            local_6988 = (ulong)(iVar8 + 2);
            *(float *)((long)&local_68f8 + lVar20) = local_695c;
            *(undefined4 *)((long)&local_68f8 + lVar20 + 4) = uStack_6958;
            *(undefined4 *)(local_68ec + lVar20 + -4) = local_6954;
          }
          local_8e8 = local_6968;
          fStack_8e4 = (float)local_6964;
          local_8e0 = (float)((ulong)local_6964 >> 0x20);
          dtNavMeshQuery::getPolyHeight
                    (*(dtNavMeshQuery **)(this + 8),local_8d8[0],&local_8e8,&local_6980);
          local_6988 = local_6988 & 0xffffffff;
          fStack_8e4 = local_6980;
        }
        uVar25 = (ulong)uVar24;
      }
      iVar8 = (int)local_6988;
      if (0x7ff < iVar8) break;
      local_6988 = (ulong)(iVar8 + 1);
      *(ulong *)((long)&local_68f8 + (long)iVar8 * 0xc) = CONCAT44(fStack_8e4,local_8e8);
      *(float *)(local_68ec + (long)iVar8 * 0xc + -4) = local_8e0;
      if (((int)uVar25 == 0) || (iVar8 == 0x7ff)) break;
    }
    this_01 = (NavigationMeshPath *)operator_new(0x30);
                    /* try { // try from 00af9d0c to 00af9d23 has its CatchHandler @ 00af9db8 */
    NavigationMeshPath::NavigationMeshPath(this_01,0,(float *)param_1,pfVar22,(uint)local_6988);
    if (0 < (int)(uint)local_6988) {
      uVar25 = 0;
      pfVar22 = &local_68f0;
      do {
        local_6950 = *(undefined8 *)(pfVar22 + -2);
        uStack_6948 = CONCAT44(uStack_6948._4_4_,*pfVar22);
        NavigationMeshPath::setWaypoint(this_01,(uint)uVar25,(float *)&local_6950);
        uVar25 = uVar25 + 1;
        pfVar22 = pfVar22 + 3;
      } while (local_6988 != uVar25);
    }
  }
  if (*(long *)(lVar4 + 0x28) != local_b8) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this_01;
}


