// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateSlicedFindPath
// Entry Point: 00dd56dc
// Size: 1288 bytes
// Signature: undefined __thiscall updateSlicedFindPath(dtNavMeshQuery * this, int param_1, int * param_2)


/* dtNavMeshQuery::updateSlicedFindPath(int, int*) */

void __thiscall dtNavMeshQuery::updateSlicedFindPath(dtNavMeshQuery *this,int param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  long **this_00;
  undefined8 *this_01;
  long *this_02;
  long lVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  dtPoly *local_e0;
  dtMeshTile *local_d8;
  dtPoly *local_d0;
  dtMeshTile *pdStack_c8;
  uint *local_c0;
  dtMeshTile *local_b8;
  undefined8 local_b0;
  float local_a8;
  undefined8 local_a0;
  float local_98;
  long local_90;
  
  lVar4 = tpidr_el0;
  local_90 = *(long *)(lVar4 + 0x28);
  uVar6 = *(uint *)(this + 8);
  if ((uVar6 >> 0x1d & 1) != 0) {
    uVar7 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,*(uint *)(this + 0x1c));
    if (((uVar7 & 1) == 0) ||
       (uVar7 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,*(uint *)(this + 0x20)),
       (uVar7 & 1) == 0)) {
      uVar6 = 0x80000000;
      *(undefined4 *)(this + 8) = 0x80000000;
    }
    else {
      if (param_1 < 1) {
        iVar5 = *(int *)(*(long *)(this + 0x58) + 0xc);
        iVar9 = 0;
      }
      else {
        iVar9 = 0;
        do {
          this_00 = *(long ***)(this + 0x58);
          iVar10 = iVar9;
          if (*(int *)((long)this_00 + 0xc) == 0) break;
          iVar5 = *(int *)((long)this_00 + 0xc) + -1;
          iVar9 = iVar9 + 1;
          lVar12 = **this_00;
          *(int *)((long)this_00 + 0xc) = iVar5;
          dtNodeQueue::trickleDown((dtNodeQueue *)this_00,0,(dtNode *)(*this_00)[iVar5]);
          uVar6 = *(uint *)(lVar12 + 0x18);
          *(uint *)(lVar12 + 0x14) = *(uint *)(lVar12 + 0x14) & 0x3fffffff | 0x80000000;
          if (uVar6 == *(uint *)(this + 0x20)) {
            *(long *)(this + 0x10) = lVar12;
            uVar6 = *(uint *)(this + 8) & 0xffffff | 0x40000000;
            *(uint *)(this + 8) = uVar6;
            if (param_2 != (int *)0x0) {
              *param_2 = iVar9;
              uVar6 = *(uint *)(this + 8);
            }
            goto LAB_00dd5b04;
          }
          local_b8 = (dtMeshTile *)0x0;
          local_c0 = (uint *)0x0;
          iVar5 = dtNavMesh::getTileAndPolyByRef
                            (*(dtNavMesh **)this,uVar6,&local_b8,(dtPoly **)&local_c0);
          if (iVar5 < 0) {
            uVar6 = 0x80000000;
            *(undefined4 *)(this + 8) = 0x80000000;
            if (param_2 != (int *)0x0) goto LAB_00dd5b5c;
            goto LAB_00dd5b04;
          }
          local_d0 = (dtPoly *)0x0;
          pdStack_c8 = (dtMeshTile *)0x0;
          uVar13 = *(uint *)(lVar12 + 0x14) & 0x3fffffff;
          if (uVar13 == 0) {
            uVar13 = 0;
            uVar11 = *local_c0;
          }
          else {
            uVar13 = *(uint *)(**(long **)(this + 0x50) + (ulong)(uVar13 - 1) * 0x1c + 0x18);
            if ((uVar13 != 0) &&
               (iVar5 = dtNavMesh::getTileAndPolyByRef
                                  (*(dtNavMesh **)this,uVar13,&pdStack_c8,&local_d0), iVar5 < 0)) {
              uVar6 = 0x80000000;
              *(undefined4 *)(this + 8) = 0x80000000;
              if (param_2 != (int *)0x0) {
                *param_2 = iVar9;
                uVar6 = *(uint *)(this + 8);
              }
              goto LAB_00dd5b04;
            }
            uVar11 = *local_c0;
          }
          if (uVar11 != 0xffffffff) {
            lVar8 = *(long *)(local_b8 + 0x20);
            do {
              uVar3 = *(uint *)(lVar8 + (ulong)uVar11 * 0xc);
              if (uVar3 != 0 && uVar3 != uVar13) {
                local_e0 = (dtPoly *)0x0;
                local_d8 = (dtMeshTile *)0x0;
                dtNavMesh::getTileAndPolyByRefUnsafe(*(dtNavMesh **)this,uVar3,&local_d8,&local_e0);
                uVar7 = (**(code **)**(undefined8 **)(this + 0x40))
                                  (*(undefined8 **)(this + 0x40),uVar3,local_d8,local_e0);
                if ((uVar7 & 1) != 0) {
                  this_01 = (undefined8 *)dtNodePool::getNode(*(dtNodePool **)(this + 0x50),uVar3);
                  if (this_01 == (undefined8 *)0x0) {
                    *(uint *)(this + 8) = *(uint *)(this + 8) | 0x20;
                  }
                  else {
                    if ((*(uint *)((long)this_01 + 0x14) >> 0x1e == 0) &&
                       (iVar5 = getPortalPoints((dtNavMeshQuery *)this_01,uVar6,(dtPoly *)local_c0,
                                                local_b8,uVar3,local_e0,local_d8,(float *)&local_a0,
                                                (float *)&local_b0), -1 < iVar5)) {
                      *this_01 = CONCAT44(((float)((ulong)local_a0 >> 0x20) +
                                          (float)((ulong)local_b0 >> 0x20)) * 0.5,
                                          ((float)local_a0 + (float)local_b0) * 0.5);
                      *(float *)(this_01 + 1) = (local_98 + local_a8) * 0.5;
                    }
                    uVar2 = *(uint *)(this + 0x20);
                    fVar14 = (float)(**(code **)(**(long **)(this + 0x40) + 8))
                                              (*(long **)(this + 0x40),lVar12,this_01,uVar13,
                                               pdStack_c8,local_d0,uVar6,local_b8,local_c0,uVar3,
                                               local_d8,local_e0);
                    if (uVar3 == uVar2) {
                      fVar15 = (float)(**(code **)(**(long **)(this + 0x40) + 8))
                                                (*(long **)(this + 0x40),this_01,this + 0x30,uVar6,
                                                 local_b8,local_c0,uVar3,local_d8,local_e0,0,0,0);
                      fVar17 = 0.0;
                      fVar15 = fVar15 + fVar14 + *(float *)(lVar12 + 0xc);
                      fVar14 = fVar15 + 0.0;
                      uVar2 = *(uint *)((long)this_01 + 0x14);
                    }
                    else {
                      fVar15 = *(float *)(this + 0x34) - *(float *)((long)this_01 + 4);
                      uVar16 = NEON_fmadd(*(float *)(this + 0x30) - *(float *)this_01,
                                          *(float *)(this + 0x30) - *(float *)this_01,
                                          fVar15 * fVar15);
                      fVar15 = fVar14 + *(float *)(lVar12 + 0xc);
                      fVar14 = (float)NEON_fmadd(*(float *)(this + 0x38) - *(float *)(this_01 + 1),
                                                 *(float *)(this + 0x38) - *(float *)(this_01 + 1),
                                                 uVar16);
                      fVar17 = (float)dtSqrt(fVar14);
                      fVar17 = fVar17 * 0.999;
                      fVar14 = fVar15 + fVar17;
                      uVar2 = *(uint *)((long)this_01 + 0x14);
                    }
                    if ((((uVar2 >> 0x1e & 1) == 0) || (fVar14 < *(float *)(this_01 + 2))) &&
                       ((-1 < (int)uVar2 || (fVar14 < *(float *)(this_01 + 2))))) {
                      iVar5 = **(int **)(this + 0x50);
                      *(float *)((long)this_01 + 0xc) = fVar15;
                      *(float *)(this_01 + 2) = fVar14;
                      uVar1 = ((uint)((int)lVar12 - iVar5) >> 2) * -0x49249249 + 1 & 0x3fffffff;
                      *(uint *)((long)this_01 + 0x14) = uVar1 | uVar2 & 0x40000000;
                      *(uint *)(this_01 + 3) = uVar3;
                      if ((uVar2 & 0x40000000) == 0) {
                        *(uint *)((long)this_01 + 0x14) = uVar1 | 0x40000000;
                        this_02 = *(long **)(this + 0x58);
                        uVar7 = (ulong)*(uint *)((long)this_02 + 0xc);
                        *(uint *)((long)this_02 + 0xc) = *(uint *)((long)this_02 + 0xc) + 1;
LAB_00dd5adc:
                        dtNodeQueue::bubbleUp((dtNodeQueue *)this_02,(int)uVar7,(dtNode *)this_01);
                      }
                      else {
                        this_02 = *(long **)(this + 0x58);
                        if (0 < (int)*(uint *)((long)this_02 + 0xc)) {
                          uVar7 = 0;
                          do {
                            if (*(undefined8 **)(*this_02 + uVar7 * 8) == this_01)
                            goto LAB_00dd5adc;
                            uVar7 = uVar7 + 1;
                          } while (*(uint *)((long)this_02 + 0xc) != uVar7);
                        }
                      }
                      if (fVar17 < *(float *)(this + 0x18)) {
                        *(float *)(this + 0x18) = fVar17;
                        *(undefined8 **)(this + 0x10) = this_01;
                      }
                    }
                  }
                }
                lVar8 = *(long *)(local_b8 + 0x20);
              }
              uVar11 = *(uint *)(lVar8 + (ulong)uVar11 * 0xc + 4);
            } while (uVar11 != 0xffffffff);
          }
          iVar10 = param_1;
        } while (iVar9 != param_1);
        iVar5 = *(int *)(*(long *)(this + 0x58) + 0xc);
        iVar9 = iVar10;
      }
      if (iVar5 == 0) {
        this[0xb] = (dtNavMeshQuery)0x40;
      }
      if (param_2 != (int *)0x0) {
LAB_00dd5b5c:
        *param_2 = iVar9;
      }
      uVar6 = *(uint *)(this + 8);
    }
  }
LAB_00dd5b04:
  if (*(long *)(lVar4 + 0x28) == local_90) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}


