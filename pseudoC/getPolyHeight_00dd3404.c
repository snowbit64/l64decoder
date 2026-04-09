// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPolyHeight
// Entry Point: 00dd3404
// Size: 668 bytes
// Signature: undefined __thiscall getPolyHeight(dtNavMeshQuery * this, uint param_1, float * param_2, float * param_3)


/* dtNavMeshQuery::getPolyHeight(unsigned int, float const*, float*) const */

undefined4 __thiscall
dtNavMeshQuery::getPolyHeight(dtNavMeshQuery *this,uint param_1,float *param_2,float *param_3)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  float *pfVar9;
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  float fVar13;
  float fVar14;
  float local_7c;
  dtPoly *local_78;
  dtMeshTile *local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  uVar12 = 0x80000008;
  local_78 = (dtPoly *)0x0;
  local_70 = (dtMeshTile *)0x0;
  iVar4 = dtNavMesh::getTileAndPolyByRef(*(dtNavMesh **)this,param_1,&local_70,&local_78);
  if (-1 < iVar4) {
    if (((byte)local_78[0x1f] & 0xc0) == 0x40) {
      pfVar8 = (float *)(*(long *)(local_70 + 0x18) + (ulong)*(ushort *)(local_78 + 4) * 0xc);
      pfVar9 = (float *)(*(long *)(local_70 + 0x18) + (ulong)*(ushort *)(local_78 + 6) * 0xc);
      uVar12 = NEON_fmadd(*pfVar8 - *param_2,*pfVar8 - *param_2,
                          (pfVar8[1] - param_2[1]) * (pfVar8[1] - param_2[1]));
      fVar13 = (float)NEON_fmadd(pfVar8[2] - param_2[2],pfVar8[2] - param_2[2],uVar12);
      fVar13 = (float)dtSqrt(fVar13);
      uVar12 = NEON_fmadd(*pfVar9 - *param_2,*pfVar9 - *param_2,
                          (pfVar9[1] - param_2[1]) * (pfVar9[1] - param_2[1]));
      fVar14 = (float)NEON_fmadd(pfVar9[2] - param_2[2],pfVar9[2] - param_2[2],uVar12);
      fVar14 = (float)dtSqrt(fVar14);
      if (param_3 == (float *)0x0) {
LAB_00dd3660:
        uVar12 = 0x40000000;
      }
      else {
        uVar12 = 0x40000000;
        fVar13 = (float)NEON_fmadd(pfVar9[1] - pfVar8[1],fVar13 / (fVar13 + fVar14),pfVar8[1]);
        *param_3 = fVar13;
      }
    }
    else {
      piVar10 = (int *)(*(long *)(local_70 + 0x28) +
                       ((ulong)((long)local_78 - *(long *)(local_70 + 0x10)) >> 5 & 0xffffffff) *
                       0xc);
      if (*(byte *)((long)piVar10 + 9) != 0) {
        uVar11 = 1;
        do {
          pbVar1 = (byte *)(*(long *)(local_70 + 0x38) + (ulong)((uVar11 + piVar10[1]) * 4 - 4));
          bVar2 = *pbVar1;
          uVar6 = (uint)(byte)local_78[0x1e];
          uVar7 = (uint)(byte)local_78[0x1e];
          if (bVar2 < uVar6) {
            pfVar8 = (float *)(*(long *)(local_70 + 0x18) +
                              (ulong)*(ushort *)(local_78 + (ulong)bVar2 * 2 + 4) * 0xc);
            bVar2 = pbVar1[1];
            iVar4 = bVar2 - uVar7;
            if (uVar7 <= bVar2) goto LAB_00dd3590;
LAB_00dd35f8:
            pfVar9 = (float *)(*(long *)(local_70 + 0x18) +
                              (ulong)*(ushort *)(local_78 + (ulong)bVar2 * 2 + 4) * 0xc);
            bVar2 = pbVar1[2];
            iVar4 = bVar2 - uVar7;
            if (bVar2 < uVar7) goto LAB_00dd3618;
LAB_00dd35b0:
            uVar5 = dtClosestHeightPointTriangle
                              (param_2,pfVar8,pfVar9,
                               (float *)(*(long *)(local_70 + 0x30) +
                                        (ulong)(uint)((iVar4 + *piVar10) * 3) * 4),&local_7c);
          }
          else {
            pfVar8 = (float *)(*(long *)(local_70 + 0x30) +
                              (ulong)(((bVar2 - uVar6) + *piVar10) * 3) * 4);
            bVar2 = pbVar1[1];
            iVar4 = bVar2 - uVar6;
            if (bVar2 < uVar6) goto LAB_00dd35f8;
LAB_00dd3590:
            pfVar9 = (float *)(*(long *)(local_70 + 0x30) +
                              (ulong)(uint)((iVar4 + *piVar10) * 3) * 4);
            bVar2 = pbVar1[2];
            iVar4 = bVar2 - uVar7;
            if (uVar7 <= bVar2) goto LAB_00dd35b0;
LAB_00dd3618:
            uVar5 = dtClosestHeightPointTriangle
                              (param_2,pfVar8,pfVar9,
                               (float *)(*(long *)(local_70 + 0x18) +
                                        (ulong)*(ushort *)(local_78 + (ulong)bVar2 * 2 + 4) * 0xc),
                               &local_7c);
          }
          if ((uVar5 & 1) != 0) {
            if (param_3 != (float *)0x0) {
              *param_3 = local_7c;
            }
            goto LAB_00dd3660;
          }
          if (*(byte *)((long)piVar10 + 9) <= uVar11) break;
          uVar11 = uVar11 + 1;
        } while( true );
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


