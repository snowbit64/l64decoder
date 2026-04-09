// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: queryPolygons
// Entry Point: 00dd4614
// Size: 472 bytes
// Signature: undefined __thiscall queryPolygons(dtNavMeshQuery * this, float * param_1, float * param_2, dtQueryFilter * param_3, uint * param_4, int * param_5, int param_6)


/* dtNavMeshQuery::queryPolygons(float const*, float const*, dtQueryFilter const*, unsigned int*,
   int*, int) const */

void __thiscall
dtNavMeshQuery::queryPolygons
          (dtNavMeshQuery *this,float *param_1,float *param_2,dtQueryFilter *param_3,uint *param_4,
          int *param_5,int param_6)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  dtMeshTile **ppdVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  int local_198;
  int local_194;
  int local_190;
  int local_18c;
  dtMeshTile *local_188 [32];
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float fStack_78;
  float local_74;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  local_7c = *param_1 - *param_2;
  fStack_78 = param_1[1] - param_2[1];
  local_74 = param_1[2] - param_2[2];
  local_88 = *param_1 + *param_2;
  fStack_84 = param_1[1] + param_2[1];
  local_80 = param_1[2] + param_2[2];
  dtNavMesh::calcTileLoc(*(dtNavMesh **)this,&local_7c,&local_18c,&local_190);
  dtNavMesh::calcTileLoc(*(dtNavMesh **)this,&local_88,&local_194,&local_198);
  if ((local_198 < local_190) || (local_194 < local_18c)) {
    iVar10 = 0;
  }
  else {
    iVar10 = 0;
    iVar8 = local_190;
    iVar4 = local_198;
    iVar9 = local_18c;
    iVar6 = local_194;
    if (local_18c <= local_194) goto LAB_00dd4750;
    while (iVar8 = local_190, local_190 < iVar4) {
      while (local_190 = iVar8 + 1, iVar8 = local_190, iVar9 = local_18c, local_18c <= iVar6) {
LAB_00dd4750:
        do {
          uVar3 = dtNavMesh::getTilesAt(*(dtNavMesh **)this,iVar9,iVar8,local_188,0x20);
          if (0 < (int)uVar3) {
            uVar11 = (ulong)uVar3;
            ppdVar7 = local_188;
            do {
              iVar4 = queryPolygonsInTile(this,*ppdVar7,&local_7c,&local_88,param_3,param_4 + iVar10
                                          ,param_6 - iVar10);
              iVar10 = iVar4 + iVar10;
              if (param_6 <= iVar10) {
                uVar5 = 0x40000010;
                *param_5 = iVar10;
                if (*(long *)(lVar2 + 0x28) == local_70) {
                  return;
                }
                goto LAB_00dd47e8;
              }
              ppdVar7 = ppdVar7 + 1;
              uVar11 = uVar11 - 1;
            } while (uVar11 != 0);
          }
          bVar1 = iVar9 < local_194;
          iVar9 = iVar9 + 1;
        } while (bVar1);
        iVar4 = local_198;
        iVar6 = local_194;
        if (local_198 <= iVar8) goto LAB_00dd46d8;
      }
    }
  }
LAB_00dd46d8:
  uVar5 = 0x40000000;
  *param_5 = iVar10;
  if (*(long *)(lVar2 + 0x28) == local_70) {
    return;
  }
LAB_00dd47e8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}


