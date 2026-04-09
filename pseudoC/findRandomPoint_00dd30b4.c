// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findRandomPoint
// Entry Point: 00dd30b4
// Size: 848 bytes
// Signature: undefined __thiscall findRandomPoint(dtNavMeshQuery * this, dtQueryFilter * param_1, _func_float * param_2, uint * param_3, float * param_4)


/* dtNavMeshQuery::findRandomPoint(dtQueryFilter const*, float (*)(), unsigned int*, float*) const
    */

void __thiscall
dtNavMeshQuery::findRandomPoint
          (dtNavMeshQuery *this,dtQueryFilter *param_1,_func_float *param_2,uint *param_3,
          float *param_4)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  dtMeshTile *pdVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  ushort *puVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  undefined4 *puVar17;
  long lVar18;
  long lVar19;
  dtMeshTile *pdVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  uint local_f4;
  float local_f0;
  float afStack_ec [2];
  float local_e4;
  float afStack_e0 [6];
  float local_c8;
  float local_c4;
  float local_c0;
  undefined4 auStack_b4 [13];
  long local_80;
  
  lVar3 = tpidr_el0;
  local_80 = *(long *)(lVar3 + 0x28);
  iVar4 = dtNavMesh::getMaxTiles();
  if (0 < iVar4) {
    fVar26 = 0.0;
    pdVar20 = (dtMeshTile *)0x0;
    iVar4 = 0;
    do {
      pdVar7 = (dtMeshTile *)dtNavMesh::getTile(*(dtNavMesh **)this,iVar4);
      if ((pdVar7 != (dtMeshTile *)0x0) && (*(long *)(pdVar7 + 8) != 0)) {
        fVar26 = fVar26 + 1.0;
        fVar22 = (*param_2)();
        if (fVar26 * fVar22 <= 1.0) {
          pdVar20 = pdVar7;
        }
      }
      iVar4 = iVar4 + 1;
      iVar5 = dtNavMesh::getMaxTiles();
    } while (iVar4 < iVar5);
    if (pdVar20 != (dtMeshTile *)0x0) {
      uVar6 = dtNavMesh::getPolyRefBase(*(dtNavMesh **)this,pdVar20);
      if (*(int *)(*(long *)(pdVar20 + 8) + 0x18) < 1) {
        uVar9 = 0x80000000;
      }
      else {
        fVar26 = 0.0;
        lVar19 = 0;
        lVar21 = 0;
        local_f4 = 0;
        do {
          lVar18 = *(long *)(pdVar20 + 0x10);
          lVar14 = lVar18 + lVar19 * 0x20;
          if (*(byte *)(lVar14 + 0x1f) < 0x40) {
            uVar2 = uVar6 | (uint)lVar19;
            uVar8 = (***(code ***)param_1)(param_1,uVar2,pdVar20,lVar14);
            if ((uVar8 & 1) != 0) {
              lVar18 = lVar18 + lVar19 * 0x20;
              fVar22 = 0.0;
              if (2 < (ulong)*(byte *)(lVar18 + 0x1e)) {
                lVar10 = *(long *)(pdVar20 + 0x18);
                fVar22 = 0.0;
                lVar12 = (ulong)*(byte *)(lVar18 + 0x1e) - 2;
                pfVar15 = (float *)(lVar10 + (ulong)*(ushort *)(lVar18 + 4) * 0xc);
                fVar23 = *pfVar15;
                fVar24 = pfVar15[2];
                puVar11 = (ushort *)(lVar18 + 8);
                uVar8 = (ulong)*(ushort *)(lVar18 + 6);
                do {
                  lVar12 = lVar12 + -1;
                  uVar1 = *puVar11;
                  pfVar15 = (float *)(lVar10 + uVar8 * 0xc);
                  pfVar16 = (float *)(lVar10 + (ulong)uVar1 * 0xc);
                  fVar25 = (float)NEON_fmadd(*pfVar16 - fVar23,pfVar15[2] - fVar24,
                                             (pfVar16[2] - fVar24) * -(*pfVar15 - fVar23));
                  fVar22 = fVar22 + fVar25;
                  puVar11 = puVar11 + 1;
                  uVar8 = (ulong)uVar1;
                } while (lVar12 != 0);
              }
              fVar26 = fVar26 + fVar22;
              fVar23 = (*param_2)();
              if (fVar26 * fVar23 <= fVar22) {
                lVar21 = lVar14;
                local_f4 = uVar2;
              }
            }
          }
          lVar19 = lVar19 + 1;
        } while (lVar19 < *(int *)(*(long *)(pdVar20 + 8) + 0x18));
        if (lVar21 == 0) {
          uVar9 = 0x80000000;
          if (*(long *)(lVar3 + 0x28) == local_80) {
            return;
          }
          goto LAB_00dd32b8;
        }
        lVar19 = *(long *)(pdVar20 + 0x18);
        pfVar15 = (float *)(lVar19 + (ulong)*(ushort *)(lVar21 + 4) * 0xc);
        local_c8 = *pfVar15;
        local_c4 = pfVar15[1];
        local_c0 = pfVar15[2];
        if (1 < (ulong)*(byte *)(lVar21 + 0x1e)) {
          lVar14 = (ulong)*(byte *)(lVar21 + 0x1e) - 1;
          puVar11 = (ushort *)(lVar21 + 6);
          puVar13 = auStack_b4;
          do {
            lVar14 = lVar14 + -1;
            puVar17 = (undefined4 *)(lVar19 + (ulong)*puVar11 * 0xc);
            puVar13[-2] = *puVar17;
            puVar13[-1] = puVar17[1];
            *puVar13 = puVar17[2];
            puVar11 = puVar11 + 1;
            puVar13 = puVar13 + 3;
          } while (lVar14 != 0);
        }
        fVar26 = (*param_2)();
        fVar22 = (*param_2)();
        dtRandomPointInConvexPoly
                  (&local_c8,(uint)*(byte *)(lVar21 + 0x1e),afStack_e0,fVar26,fVar22,afStack_ec);
        local_f0 = 0.0;
        uVar9 = getPolyHeight(this,local_f4,afStack_ec,&local_f0);
        if (-1 < (int)uVar9) {
          uVar9 = 0x40000000;
          *param_4 = afStack_ec[0];
          param_4[1] = local_f0;
          param_4[2] = local_e4;
          *param_3 = local_f4;
          if (*(long *)(lVar3 + 0x28) == local_80) {
            return;
          }
          goto LAB_00dd32b8;
        }
      }
      if (*(long *)(lVar3 + 0x28) == local_80) {
        return;
      }
      goto LAB_00dd32b8;
    }
  }
  uVar9 = 0x80000000;
  if (*(long *)(lVar3 + 0x28) == local_80) {
    return;
  }
LAB_00dd32b8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar9);
}


