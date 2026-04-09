// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findStraightPath
// Entry Point: 00dd5ed8
// Size: 2400 bytes
// Signature: undefined __thiscall findStraightPath(dtNavMeshQuery * this, float * param_1, float * param_2, uint * param_3, int param_4, float * param_5, uchar * param_6, uint * param_7, int * param_8, int param_9)


/* dtNavMeshQuery::findStraightPath(float const*, float const*, unsigned int const*, int, float*,
   unsigned char*, unsigned int*, int*, int) const */

undefined4 __thiscall
dtNavMeshQuery::findStraightPath
          (dtNavMeshQuery *this,float *param_1,float *param_2,uint *param_3,int param_4,
          float *param_5,uchar *param_6,uint *param_7,int *param_8,int param_9)

{
  uchar uVar1;
  uint uVar2;
  uint uVar3;
  dtPoly dVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  dtNavMeshQuery *this_00;
  float *pfVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  byte bVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  uint local_12c;
  int local_11c;
  uint local_118;
  int local_114;
  dtPoly *local_100;
  dtMeshTile *pdStack_f8;
  dtPoly *local_f0;
  dtMeshTile *pdStack_e8;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  long local_a0;
  
  lVar5 = tpidr_el0;
  local_a0 = *(long *)(lVar5 + 0x28);
  *param_8 = 0;
  uVar17 = 0x80000008;
  if ((param_9 == 0) || (*param_3 == 0)) {
LAB_00dd6778:
    if (*(long *)(lVar5 + 0x28) == local_a0) {
      return uVar17;
    }
    goto LAB_00dd6048;
  }
  iVar8 = closestPointOnPolyBoundary(this,*param_3,param_1,&local_ac);
  if (iVar8 < 0) {
LAB_00dd6030:
    if (*(long *)(lVar5 + 0x28) == local_a0) {
      return 0x80000008;
    }
    goto LAB_00dd6048;
  }
  *param_5 = local_ac;
  param_5[1] = fStack_a8;
  param_5[2] = local_a4;
  if (param_6 != (uchar *)0x0) {
    *param_6 = '\x01';
  }
  if (param_7 != (uint *)0x0) {
    *param_7 = *param_3;
  }
  if (param_9 < 2) {
    *param_8 = 1;
    if (*(long *)(lVar5 + 0x28) == local_a0) {
      return 0x40000010;
    }
    goto LAB_00dd6048;
  }
  iVar8 = closestPointOnPolyBoundary(this,param_3[param_4 + -1],param_2,&local_b8);
  if (iVar8 < 0) goto LAB_00dd6030;
  if (param_4 < 2) {
    iVar8 = 1;
LAB_00dd6630:
    pfVar11 = param_5 + (iVar8 * 3 + -3);
    if (((dtVequal(float_const*,float_const*)::thr & 1) == 0) &&
       (iVar10 = __cxa_guard_acquire(&dtVequal(float_const*,float_const*)::thr), iVar10 != 0)) {
      dtVequal(float_const*,float_const*)::thr = 3.72529e-09;
      __cxa_guard_release(&dtVequal(float_const*,float_const*)::thr);
    }
    uVar17 = NEON_fmadd(local_b8 - *pfVar11,local_b8 - *pfVar11,
                        (fStack_b4 - pfVar11[1]) * (fStack_b4 - pfVar11[1]));
    fVar18 = (float)NEON_fmadd(local_b0 - pfVar11[2],local_b0 - pfVar11[2],uVar17);
    iVar8 = iVar8 - (uint)(fVar18 < dtVequal(float_const*,float_const*)::thr);
  }
  else {
    iVar10 = 0;
    local_12c = *param_3;
    local_11c = 0;
    bVar6 = 0;
    bVar7 = 0;
    iVar8 = 1;
    local_114 = 0;
    local_c4 = local_ac;
    local_c0 = fStack_a8;
    local_bc = local_a4;
    fVar18 = local_ac;
    fVar23 = fStack_a8;
    fVar22 = local_a4;
    fVar19 = local_ac;
    fVar21 = fStack_a8;
    fVar20 = local_a4;
    local_118 = local_12c;
    do {
      lVar14 = (long)iVar10;
      iVar12 = (int)(lVar14 + 1);
      if (iVar12 < param_4) {
        uVar2 = param_3[lVar14];
        uVar3 = param_3[lVar14 + 1];
        local_f0 = (dtPoly *)0x0;
        pdStack_e8 = (dtMeshTile *)0x0;
        iVar9 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,uVar2,&pdStack_e8,&local_f0);
        if (-1 < iVar9) {
          local_100 = (dtPoly *)0x0;
          pdStack_f8 = (dtMeshTile *)0x0;
          this_00 = (dtNavMeshQuery *)
                    dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,uVar3,&pdStack_f8,&local_100)
          ;
          if (-1 < (int)this_00) {
            dVar4 = local_100[0x1f];
            iVar9 = getPortalPoints(this_00,uVar2,local_f0,pdStack_e8,uVar3,local_100,pdStack_f8,
                                    &local_d0,&local_dc);
            if (-1 < iVar9) {
              bVar15 = (byte)dVar4 >> 6;
              if ((iVar10 != 0) ||
                 (fVar16 = (float)dtDistancePtSegSqr2D
                                            (&local_c4,&local_d0,&local_dc,(float *)&pdStack_e8),
                 1e-06 <= fVar16)) goto LAB_00dd6130;
              iVar10 = 0;
              goto LAB_00dd605c;
            }
          }
        }
        iVar10 = closestPointOnPolyBoundary(this,param_3[lVar14],param_2,&local_b8);
        uVar17 = 0x80000008;
        if (-1 < iVar10) {
          *(ulong *)(param_5 + (long)iVar8 * 3) = CONCAT44(fStack_b4,local_b8);
          *(float *)((long)(param_5 + (long)iVar8 * 3) + 8) = local_b0;
          if (param_6 != (uchar *)0x0) {
            param_6[iVar8] = '\0';
          }
          if (param_7 != (uint *)0x0) {
            param_7[iVar8] = param_3[lVar14];
          }
          *param_8 = iVar8 + 1;
          uVar17 = 0x40000040;
          if (param_9 <= iVar8 + 1) {
            uVar17 = 0x40000050;
          }
        }
        goto LAB_00dd6778;
      }
      bVar15 = 0;
      local_d0 = local_b8;
      local_cc = fStack_b4;
      local_c8 = local_b0;
      local_dc = local_b8;
      local_d8 = fStack_b4;
      local_d4 = local_b0;
LAB_00dd6130:
      fVar16 = (float)NEON_fmadd(local_dc - local_c4,fVar22 - local_bc,
                                 (local_d4 - local_bc) * -(fVar18 - local_c4));
      if (fVar16 <= 0.0) {
        if (((dtVequal(float_const*,float_const*)::thr & 1) == 0) &&
           (iVar9 = __cxa_guard_acquire(&dtVequal(float_const*,float_const*)::thr), iVar9 != 0)) {
          dtVequal(float_const*,float_const*)::thr = 3.72529e-09;
          __cxa_guard_release(&dtVequal(float_const*,float_const*)::thr);
        }
        uVar17 = NEON_fmadd(fVar18 - local_c4,fVar18 - local_c4,
                            (fVar23 - local_c0) * (fVar23 - local_c0));
        fVar18 = (float)NEON_fmadd(fVar22 - local_bc,fVar22 - local_bc,uVar17);
        if ((fVar18 < dtVequal(float_const*,float_const*)::thr) ||
           (fVar18 = (float)NEON_fmadd(local_dc - local_c4,fVar20 - local_bc,
                                       (local_d4 - local_bc) * -(fVar19 - local_c4)), 0.0 < fVar18))
        {
          fVar18 = local_dc;
          fVar23 = local_d8;
          fVar22 = local_d4;
          local_114 = iVar10;
          bVar7 = bVar15;
          if (iVar12 < param_4) {
            local_118 = param_3[iVar12];
          }
          else {
            local_118 = 0;
          }
          goto LAB_00dd6248;
        }
        uVar1 = '\x02';
        if (local_12c != 0) {
          uVar1 = (bVar6 == 1) << 2;
        }
        lVar13 = (long)iVar8;
        lVar14 = lVar13 + -1;
        local_c4 = fVar19;
        local_c0 = fVar21;
        local_bc = fVar20;
        if (((dtVequal(float_const*,float_const*)::thr & 1) == 0) &&
           (iVar10 = __cxa_guard_acquire(&dtVequal(float_const*,float_const*)::thr), iVar10 != 0)) {
          dtVequal(float_const*,float_const*)::thr = 3.72529e-09;
          __cxa_guard_release(&dtVequal(float_const*,float_const*)::thr);
        }
        pfVar11 = param_5 + lVar14 * 3;
        uVar17 = NEON_fmadd(local_c4 - *pfVar11,local_c4 - *pfVar11,
                            (local_c0 - pfVar11[1]) * (local_c0 - pfVar11[1]));
        fVar16 = (float)NEON_fmadd(local_bc - pfVar11[2],local_bc - pfVar11[2],uVar17);
        fVar18 = local_c4;
        fVar23 = local_c0;
        fVar22 = local_bc;
        fVar19 = local_c4;
        fVar21 = local_c0;
        fVar20 = local_bc;
        iVar10 = local_11c;
        if (dtVequal(float_const*,float_const*)::thr <= fVar16) {
          pfVar11 = param_5 + lVar13 * 3;
          *pfVar11 = local_c4;
          pfVar11[1] = local_c0;
          pfVar11[2] = local_bc;
          if (param_6 != (uchar *)0x0) {
            param_6[lVar13] = uVar1;
          }
          if (param_7 != (uint *)0x0) {
            param_7[lVar13] = local_12c;
          }
          iVar12 = iVar8 + 1;
          if ((local_12c != 0) && (iVar12 < param_9)) goto LAB_00dd6490;
LAB_00dd67d0:
          uVar17 = 0x40000000;
          if (param_9 <= iVar8 + 1) {
            uVar17 = 0x40000010;
          }
          *param_8 = iVar8 + 1;
          if (*(long *)(lVar5 + 0x28) == local_a0) {
            return uVar17;
          }
          goto LAB_00dd6048;
        }
        if (param_6 != (uchar *)0x0) {
          param_6[lVar14] = uVar1;
        }
        iVar12 = iVar8;
        if (param_7 != (uint *)0x0) {
          local_114 = local_11c;
          param_7[(int)lVar14] = local_12c;
          goto LAB_00dd605c;
        }
LAB_00dd6490:
        local_114 = local_11c;
        iVar8 = iVar12;
      }
      else {
LAB_00dd6248:
        fVar16 = (float)NEON_fmadd(local_d0 - local_c4,fVar20 - local_bc,
                                   (local_c8 - local_bc) * -(fVar19 - local_c4));
        if (0.0 <= fVar16) {
          if (((dtVequal(float_const*,float_const*)::thr & 1) == 0) &&
             (iVar9 = __cxa_guard_acquire(&dtVequal(float_const*,float_const*)::thr), iVar9 != 0)) {
            dtVequal(float_const*,float_const*)::thr = 3.72529e-09;
            __cxa_guard_release(&dtVequal(float_const*,float_const*)::thr);
          }
          uVar17 = NEON_fmadd(fVar19 - local_c4,fVar19 - local_c4,
                              (fVar21 - local_c0) * (fVar21 - local_c0));
          fVar19 = (float)NEON_fmadd(fVar20 - local_bc,fVar20 - local_bc,uVar17);
          if ((fVar19 < dtVequal(float_const*,float_const*)::thr) ||
             (fVar19 = (float)NEON_fmadd(local_d0 - local_c4,fVar22 - local_bc,
                                         (local_c8 - local_bc) * -(fVar18 - local_c4)), fVar19 < 0.0
             )) {
            fVar19 = local_d0;
            fVar21 = local_cc;
            fVar20 = local_c8;
            local_11c = iVar10;
            bVar6 = bVar15;
            if (iVar12 < param_4) {
              local_12c = param_3[iVar12];
            }
            else {
              local_12c = 0;
            }
          }
          else {
            lVar14 = (long)iVar8;
            uVar1 = '\x02';
            if (local_118 != 0) {
              uVar1 = (bVar7 == 1) << 2;
            }
            lVar13 = lVar14 + -1;
            local_c4 = fVar18;
            local_c0 = fVar23;
            local_bc = fVar22;
            if (((dtVequal(float_const*,float_const*)::thr & 1) == 0) &&
               (iVar10 = __cxa_guard_acquire(&dtVequal(float_const*,float_const*)::thr), iVar10 != 0
               )) {
              dtVequal(float_const*,float_const*)::thr = 3.72529e-09;
              __cxa_guard_release(&dtVequal(float_const*,float_const*)::thr);
            }
            pfVar11 = param_5 + lVar13 * 3;
            uVar17 = NEON_fmadd(local_c4 - *pfVar11,local_c4 - *pfVar11,
                                (local_c0 - pfVar11[1]) * (local_c0 - pfVar11[1]));
            fVar16 = (float)NEON_fmadd(local_bc - pfVar11[2],local_bc - pfVar11[2],uVar17);
            fVar18 = local_c4;
            fVar23 = local_c0;
            fVar22 = local_bc;
            fVar19 = local_c4;
            fVar21 = local_c0;
            fVar20 = local_bc;
            iVar10 = local_114;
            if (dtVequal(float_const*,float_const*)::thr <= fVar16) {
              pfVar11 = param_5 + lVar14 * 3;
              *pfVar11 = local_c4;
              pfVar11[1] = local_c0;
              pfVar11[2] = local_bc;
              if (param_6 != (uchar *)0x0) {
                param_6[lVar14] = uVar1;
              }
              if (param_7 != (uint *)0x0) {
                param_7[lVar14] = local_118;
              }
              iVar12 = iVar8 + 1;
              if ((local_118 == 0) || (param_9 <= iVar12)) goto LAB_00dd67d0;
            }
            else {
              if (param_6 != (uchar *)0x0) {
                param_6[lVar13] = uVar1;
              }
              iVar12 = iVar8;
              if (param_7 != (uint *)0x0) {
                local_11c = local_114;
                param_7[(int)lVar13] = local_118;
                goto LAB_00dd605c;
              }
            }
            local_11c = local_114;
            iVar8 = iVar12;
          }
        }
      }
LAB_00dd605c:
      iVar10 = iVar10 + 1;
    } while (iVar10 < param_4);
    if (0 < iVar8) goto LAB_00dd6630;
  }
  if (iVar8 < param_9) {
    *(ulong *)(param_5 + (long)iVar8 * 3) = CONCAT44(fStack_b4,local_b8);
    *(float *)((long)(param_5 + (long)iVar8 * 3) + 8) = local_b0;
    if (param_6 != (uchar *)0x0) {
      param_6[iVar8] = '\x02';
    }
    if (param_7 != (uint *)0x0) {
      param_7[iVar8] = 0;
    }
    iVar8 = iVar8 + 1;
  }
  uVar17 = 0x40000000;
  if (param_9 <= iVar8) {
    uVar17 = 0x40000010;
  }
  *param_8 = iVar8;
  if (*(long *)(lVar5 + 0x28) == local_a0) {
    return uVar17;
  }
LAB_00dd6048:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


