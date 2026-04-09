// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: moveAlongSurface
// Entry Point: 00dd6938
// Size: 1420 bytes
// Signature: undefined __thiscall moveAlongSurface(dtNavMeshQuery * this, uint param_1, float * param_2, float * param_3, dtQueryFilter * param_4, float * param_5, uint * param_6, int * param_7, int param_8)


/* dtNavMeshQuery::moveAlongSurface(unsigned int, float const*, float const*, dtQueryFilter const*,
   float*, unsigned int*, int*, int) const */

undefined4 __thiscall
dtNavMeshQuery::moveAlongSurface
          (dtNavMeshQuery *this,uint param_1,float *param_2,float *param_3,dtQueryFilter *param_4,
          float *param_5,uint *param_6,int *param_7,int param_8)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  float *pfVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  uint *puVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 uVar24;
  float fVar26;
  undefined8 uVar25;
  float fVar27;
  ulong local_2b8;
  ulong local_2b0;
  dtPoly *local_2a8;
  dtMeshTile *local_2a0;
  uint *local_298;
  dtMeshTile *local_290;
  uint local_288 [8];
  undefined8 local_268;
  float local_260 [16];
  undefined8 local_220;
  undefined4 local_218;
  ulong local_210;
  undefined auStack_208 [376];
  long local_90;
  
  lVar3 = tpidr_el0;
  local_90 = *(long *)(lVar3 + 0x28);
  uVar18 = 0x80000008;
  *param_7 = 0;
  if ((param_1 != 0) &&
     (uVar5 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar5 & 1) != 0)) {
    dtNodePool::clear();
    local_2b0 = dtNodePool::getNode(*(dtNodePool **)(this + 0x48),param_1);
    *(undefined4 *)(local_2b0 + 0xc) = 0;
    *(undefined4 *)(local_2b0 + 0x10) = 0;
    *(undefined4 *)(local_2b0 + 0x14) = 0x80000000;
    *(uint *)(local_2b0 + 0x18) = param_1;
    uVar24 = *(undefined8 *)param_2;
    fVar27 = param_2[2];
    fVar21 = (float)*(undefined8 *)param_3 - (float)uVar24;
    fVar26 = (float)((ulong)uVar24 >> 0x20);
    fVar22 = (float)((ulong)*(undefined8 *)param_3 >> 0x20) - fVar26;
    fVar23 = param_3[2] - fVar27;
    local_220 = CONCAT44(fVar26 + fVar22 * 0.5,(float)uVar24 + fVar21 * 0.5);
    local_218 = NEON_fmadd(fVar23,0x3f000000,fVar27);
    fVar21 = (float)NEON_fmadd(fVar23,fVar23,fVar22 * fVar22 + fVar21 * fVar21);
    local_210 = local_2b0;
    fVar21 = (float)dtSqrt(fVar21);
    local_2b8 = 0;
    fVar22 = fVar21 * 0.5 + 0.001;
    fVar21 = 3.402823e+38;
    uVar5 = 0;
    while( true ) {
      iVar17 = (int)uVar5;
      local_298 = (uint *)0x0;
      local_290 = (dtMeshTile *)0x0;
      dtNavMesh::getTileAndPolyByRefUnsafe
                (*(dtNavMesh **)this,*(uint *)(local_2b0 + 0x18),&local_290,(dtPoly **)&local_298);
      bVar1 = *(byte *)((long)local_298 + 0x1e);
      uVar8 = (ulong)bVar1;
      if (bVar1 != 0) {
        lVar10 = *(long *)(local_290 + 0x18);
        puVar19 = local_298 + 1;
        pfVar11 = local_260;
        do {
          uVar8 = uVar8 - 1;
          pfVar13 = (float *)(lVar10 + (ulong)*(ushort *)puVar19 * 0xc);
          pfVar11[-2] = *pfVar13;
          pfVar11[-1] = pfVar13[1];
          *pfVar11 = pfVar13[2];
          puVar19 = (uint *)((long)puVar19 + 2);
          pfVar11 = pfVar11 + 3;
        } while (uVar8 != 0);
      }
      uVar8 = dtPointInPolygon(param_3,(float *)&local_268,(uint)bVar1);
      if ((uVar8 & 1) != 0) break;
      if (*(byte *)((long)local_298 + 0x1e) != 0) {
        uVar4 = *(byte *)((long)local_298 + 0x1e) - 1;
        uVar8 = 0;
        do {
          lVar10 = (long)(int)uVar4;
          uVar2 = *(ushort *)((long)local_298 + (long)(int)uVar4 * 2 + 0x10);
          if ((short)uVar2 < 0) {
            uVar9 = *local_298;
            if (uVar9 != 0xffffffff) {
              uVar15 = 0;
              lVar7 = *(long *)(local_290 + 0x20);
              do {
                if (uVar4 == *(byte *)(lVar7 + (ulong)uVar9 * 0xc + 8)) {
                  puVar19 = (uint *)(lVar7 + (ulong)uVar9 * 0xc);
                  if (*puVar19 != 0) {
                    local_2a8 = (dtPoly *)0x0;
                    local_2a0 = (dtMeshTile *)0x0;
                    dtNavMesh::getTileAndPolyByRefUnsafe
                              (*(dtNavMesh **)this,*puVar19,&local_2a0,&local_2a8);
                    uVar6 = (***(code ***)param_4)(param_4,*puVar19,local_2a0,local_2a8);
                    uVar16 = uVar15;
                    if (((uVar6 & 1) != 0) && ((int)uVar15 < 8)) {
                      uVar16 = uVar15 + 1;
                      local_288[(int)uVar15] = *puVar19;
                    }
                    lVar7 = *(long *)(local_290 + 0x20);
                    uVar15 = uVar16;
                  }
                }
                uVar9 = *(uint *)(lVar7 + (ulong)uVar9 * 0xc + 4);
              } while (uVar9 != 0xffffffff);
              if (uVar15 != 0) {
                if (0 < (int)uVar15) goto LAB_00dd6c44;
                goto LAB_00dd6b1c;
              }
            }
LAB_00dd6cfc:
            puVar14 = (undefined8 *)((long)&local_268 + lVar10 * 0xc);
            puVar20 = (undefined8 *)((long)&local_268 + uVar8 * 0xc);
            fVar23 = (float)dtDistancePtSegSqr2D
                                      (param_3,(float *)puVar14,(float *)puVar20,(float *)&local_2a0
                                      );
            if (fVar23 < fVar21) {
              uVar25 = *puVar14;
              uVar24 = *puVar20;
              fVar27 = (float)uVar25;
              fVar21 = (float)((ulong)uVar25 >> 0x20);
              local_2b8 = local_2b0;
              uVar24 = CONCAT44(fVar21 + ((float)((ulong)uVar24 >> 0x20) - fVar21) * local_2a0._0_4_
                                ,fVar27 + ((float)uVar24 - fVar27) * local_2a0._0_4_);
              fVar27 = (float)NEON_fmadd(local_260[uVar8 * 3] - local_260[lVar10 * 3],
                                         local_2a0._0_4_,local_260[lVar10 * 3]);
              fVar21 = fVar23;
            }
          }
          else {
            if (uVar2 == 0) goto LAB_00dd6cfc;
            uVar4 = dtNavMesh::getPolyRefBase(*(dtNavMesh **)this,local_290);
            uVar4 = uVar4 | uVar2 - 1;
            uVar6 = (***(code ***)param_4)
                              (param_4,uVar4,local_290,
                               *(long *)(local_290 + 0x10) + (ulong)(uVar2 - 1) * 0x20);
            if ((uVar6 & 1) == 0) goto LAB_00dd6cfc;
            uVar15 = 1;
            local_288[0] = uVar4;
LAB_00dd6c44:
            uVar6 = (ulong)uVar15;
            puVar19 = local_288;
            do {
              lVar7 = dtNodePool::getNode(*(dtNodePool **)(this + 0x48),*puVar19);
              if ((((lVar7 != 0) && (-1 < *(int *)(lVar7 + 0x14))) &&
                  (fVar23 = (float)dtDistancePtSegSqr2D
                                             ((float *)&local_220,
                                              (float *)((long)&local_268 + lVar10 * 0xc),
                                              (float *)((long)&local_268 + uVar8 * 0xc),
                                              (float *)&local_2a0), fVar23 <= fVar22 * fVar22)) &&
                 (iVar17 = (int)uVar5, iVar17 < 0x30)) {
                if (local_2b0 == 0) {
                  uVar4 = 0;
                }
                else {
                  uVar4 = (int)(local_2b0 - **(long **)(this + 0x48) >> 2) * -0x49249249 + 1;
                }
                uVar9 = *(uint *)(lVar7 + 0x14);
                *(long *)(auStack_208 + (long)iVar17 * 8 + -8) = lVar7;
                uVar5 = (ulong)(iVar17 + 1);
                *(uint *)(lVar7 + 0x14) = uVar9 & 0x40000000 | uVar4 & 0x3fffffff | 0x80000000;
              }
              puVar19 = puVar19 + 1;
              uVar6 = uVar6 - 1;
            } while (uVar6 != 0);
          }
LAB_00dd6b1c:
          iVar17 = (int)uVar5;
          uVar6 = uVar8 + 1;
          uVar4 = (uint)uVar8;
          uVar8 = uVar6;
        } while (uVar6 < *(byte *)((long)local_298 + 0x1e));
      }
      local_2b0 = local_2b8;
      if (iVar17 == 0) goto joined_r0x00dd6d8c;
      uVar5 = (ulong)(iVar17 - 1);
      local_2b0 = local_210;
      if (1 < iVar17) {
        memmove(&local_210,auStack_208,uVar5 << 3);
      }
    }
    uVar24 = *(undefined8 *)param_3;
    fVar27 = param_3[2];
joined_r0x00dd6d8c:
    if (local_2b0 == 0) {
      param_8 = 0;
      uVar18 = 0x40000000;
    }
    else {
      uVar5 = 0;
      do {
        uVar8 = local_2b0;
        uVar4 = *(uint *)(uVar8 + 0x14);
        local_2b0 = 0;
        if ((uVar4 & 0x3fffffff) != 0) {
          local_2b0 = **(long **)(this + 0x48) + (ulong)((uVar4 & 0x3fffffff) - 1) * 0x1c;
        }
        if (uVar5 != 0) {
          uVar5 = (ulong)((int)(uVar5 - **(long **)(this + 0x48) >> 2) * -0x49249249 + 1);
        }
        *(uint *)(uVar8 + 0x14) = uVar4 & 0xc0000000 | (uint)uVar5 & 0x3fffffff;
        uVar5 = uVar8;
      } while (local_2b0 != 0);
      uVar5 = 0;
      plVar12 = *(long **)(this + 0x48);
      if (param_8 < 2) {
        param_8 = 1;
      }
      do {
        param_6[uVar5] = *(uint *)(uVar8 + 0x18);
        if (param_8 - 1 == uVar5) {
          uVar18 = 0x40000010;
          goto LAB_00dd6e78;
        }
        puVar19 = (uint *)(uVar8 + 0x14);
        uVar5 = uVar5 + 1;
        uVar8 = 0;
        if ((*puVar19 & 0x3fffffff) != 0) {
          uVar8 = *plVar12 + (ulong)((*puVar19 & 0x3fffffff) - 1) * 0x1c;
        }
      } while (uVar8 != 0);
      uVar18 = 0x40000000;
      param_8 = (int)uVar5;
    }
LAB_00dd6e78:
    *(undefined8 *)param_5 = uVar24;
    param_5[2] = fVar27;
    *param_7 = param_8;
  }
  if (*(long *)(lVar3 + 0x28) != local_90) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar18;
}


