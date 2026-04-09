// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findLocalNeighbourhood
// Entry Point: 00dd8348
// Size: 1164 bytes
// Signature: undefined __thiscall findLocalNeighbourhood(dtNavMeshQuery * this, uint param_1, float * param_2, float param_3, dtQueryFilter * param_4, uint * param_5, uint * param_6, int * param_7, int param_8)


/* dtNavMeshQuery::findLocalNeighbourhood(unsigned int, float const*, float, dtQueryFilter const*,
   unsigned int*, unsigned int*, int*, int) const */

uint __thiscall
dtNavMeshQuery::findLocalNeighbourhood
          (dtNavMeshQuery *this,uint param_1,float *param_2,float param_3,dtQueryFilter *param_4,
          uint *param_5,uint *param_6,int *param_7,int param_8)

{
  uint uVar1;
  uint uVar2;
  dtPoly dVar3;
  dtPoly dVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  dtNavMeshQuery *this_00;
  ulong uVar8;
  uint uVar9;
  long lVar10;
  ushort *puVar11;
  uint uVar12;
  long lVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  float fVar20;
  uint local_324;
  dtPoly *local_2e0;
  dtMeshTile *local_2d8;
  float fStack_2cc;
  dtPoly *local_2c8;
  dtMeshTile *local_2c0;
  uint *local_2b8;
  dtMeshTile *local_2b0;
  float afStack_2a8 [3];
  float afStack_29c [3];
  float local_290 [2];
  undefined4 auStack_288 [16];
  float local_248 [2];
  undefined4 auStack_240 [16];
  long local_200;
  undefined auStack_1f8 [376];
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  local_324 = 0x80000008;
  *param_7 = 0;
  if ((param_1 != 0) &&
     (uVar6 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), (uVar6 & 1) != 0)) {
    dtNodePool::clear();
    lVar7 = dtNodePool::getNode(*(dtNodePool **)(this + 0x48),param_1);
    *(undefined4 *)(lVar7 + 0x14) = 0x80000000;
    *(uint *)(lVar7 + 0x18) = param_1;
    if (param_8 < 1) {
      uVar16 = 0;
      local_324 = 0x40000010;
    }
    else {
      *param_5 = param_1;
      if (param_6 != (uint *)0x0) {
        *param_6 = 0;
      }
      local_324 = 0x40000000;
      uVar16 = 1;
    }
    uVar6 = 0;
    local_200 = lVar7;
LAB_00dd847c:
    iVar18 = (int)uVar6;
    uVar1 = *(uint *)(lVar7 + 0x18);
    local_2b8 = (uint *)0x0;
    local_2b0 = (dtMeshTile *)0x0;
    dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar1,&local_2b0,(dtPoly **)&local_2b8)
    ;
    uVar17 = *local_2b8;
    if (uVar17 != 0xffffffff) {
      lVar10 = *(long *)(local_2b0 + 0x20);
      do {
        uVar2 = *(uint *)(lVar10 + (ulong)uVar17 * 0xc);
        if (((uVar2 != 0) &&
            (lVar10 = dtNodePool::getNode(*(dtNodePool **)(this + 0x48),uVar2), lVar10 != 0)) &&
           (-1 < *(int *)(lVar10 + 0x14))) {
          local_2c8 = (dtPoly *)0x0;
          local_2c0 = (dtMeshTile *)0x0;
          dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar2,&local_2c0,&local_2c8);
          if ((((byte)local_2c8[0x1f] & 0xc0) != 0x40) &&
             (this_00 = (dtNavMeshQuery *)(***(code ***)param_4)(param_4,uVar2,local_2c0),
             ((ulong)this_00 & 1) != 0)) {
            getPortalPoints(this_00,uVar1,(dtPoly *)local_2b8,local_2b0,uVar2,local_2c8,local_2c0,
                            afStack_29c,afStack_2a8);
            fVar20 = (float)dtDistancePtSegSqr2D(param_2,afStack_29c,afStack_2a8,&fStack_2cc);
            if (fVar20 <= param_3 * param_3) {
              uVar9 = *(uint *)(lVar10 + 0x14) & 0x40000000 | 0x80000000;
              *(uint *)(lVar10 + 0x14) = uVar9 | *(uint *)(lVar10 + 0x14) & 0x3fffffff;
              if (lVar7 == 0) {
                uVar12 = 0;
              }
              else {
                uVar12 = (int)((ulong)(lVar7 - **(long **)(this + 0x48)) >> 2) * -0x49249249 + 1;
              }
              *(uint *)(lVar10 + 0x14) = uVar12 & 0x3fffffff | uVar9;
              dVar3 = local_2c8[0x1e];
              uVar19 = (ulong)(byte)dVar3;
              if ((byte)dVar3 != 0) {
                lVar13 = *(long *)(local_2c0 + 0x18);
                puVar11 = (ushort *)(local_2c8 + 4);
                puVar14 = auStack_240;
                do {
                  uVar19 = uVar19 - 1;
                  puVar15 = (undefined4 *)(lVar13 + (ulong)*puVar11 * 0xc);
                  puVar14[-2] = *puVar15;
                  puVar14[-1] = puVar15[1];
                  *puVar14 = puVar15[2];
                  puVar11 = puVar11 + 1;
                  puVar14 = puVar14 + 3;
                } while (uVar19 != 0);
              }
              if (0 < (int)uVar16) {
                uVar19 = 0;
                do {
                  uVar9 = *local_2b8;
                  if (uVar9 != 0xffffffff) {
                    do {
                      if (*(uint *)(*(long *)(local_2b0 + 0x20) + (ulong)uVar9 * 0xc) ==
                          param_5[uVar19]) goto LAB_00dd8654;
                      uVar9 = *(uint *)(*(long *)(local_2b0 + 0x20) + (ulong)uVar9 * 0xc + 4);
                    } while (uVar9 != 0xffffffff);
                  }
                  local_2e0 = (dtPoly *)0x0;
                  local_2d8 = (dtMeshTile *)0x0;
                  dtNavMesh::getTileAndPolyByRefUnsafe
                            (*(dtNavMesh **)this,param_5[uVar19],&local_2d8,&local_2e0);
                  dVar4 = local_2e0[0x1e];
                  uVar8 = (ulong)(byte)dVar4;
                  if ((byte)dVar4 != 0) {
                    lVar13 = *(long *)(local_2d8 + 0x18);
                    puVar11 = (ushort *)(local_2e0 + 4);
                    puVar14 = auStack_288;
                    do {
                      uVar8 = uVar8 - 1;
                      puVar15 = (undefined4 *)(lVar13 + (ulong)*puVar11 * 0xc);
                      puVar14[-2] = *puVar15;
                      puVar14[-1] = puVar15[1];
                      *puVar14 = puVar15[2];
                      puVar11 = puVar11 + 1;
                      puVar14 = puVar14 + 3;
                    } while (uVar8 != 0);
                  }
                  uVar8 = dtOverlapPolyPoly2D(local_248,(uint)(byte)dVar3,local_290,
                                              (uint)(byte)dVar4);
                  if ((uVar8 & 1) != 0) goto LAB_00dd84c0;
LAB_00dd8654:
                  uVar19 = uVar19 + 1;
                } while (uVar19 != uVar16);
              }
              iVar18 = (int)uVar6;
              if ((int)uVar16 < param_8) {
                param_5[(int)uVar16] = uVar2;
                if (param_6 != (uint *)0x0) {
                  param_6[(int)uVar16] = uVar1;
                }
                uVar16 = uVar16 + 1;
              }
              else {
                local_324 = local_324 | 0x10;
              }
              if (iVar18 < 0x30) {
                *(long *)(auStack_1f8 + (long)iVar18 * 8 + -8) = lVar10;
                uVar6 = (ulong)(iVar18 + 1);
              }
            }
          }
        }
LAB_00dd84c0:
        iVar18 = (int)uVar6;
        lVar10 = *(long *)(local_2b0 + 0x20);
        uVar17 = *(uint *)(lVar10 + (ulong)uVar17 * 0xc + 4);
      } while (uVar17 != 0xffffffff);
    }
    lVar7 = local_200;
    if (iVar18 != 0) {
      uVar6 = (ulong)(iVar18 - 1);
      if (1 < iVar18) {
        memmove(&local_200,auStack_1f8,uVar6 << 3);
      }
      goto LAB_00dd847c;
    }
    *param_7 = uVar16;
  }
  if (*(long *)(lVar5 + 0x28) != local_80) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_324;
}


