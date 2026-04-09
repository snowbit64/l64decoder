// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findPath
// Entry Point: 00dd4e40
// Size: 1628 bytes
// Signature: undefined __thiscall findPath(dtNavMeshQuery * this, uint param_1, uint param_2, float * param_3, float * param_4, dtQueryFilter * param_5, uint * param_6, int * param_7, int param_8)


/* dtNavMeshQuery::findPath(unsigned int, unsigned int, float const*, float const*, dtQueryFilter
   const*, unsigned int*, int*, int) const */

uint __thiscall
dtNavMeshQuery::findPath
          (dtNavMeshQuery *this,uint param_1,uint param_2,float *param_3,float *param_4,
          dtQueryFilter *param_5,uint *param_6,int *param_7,int param_8)

{
  float *pfVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  dtNodeQueue *this_00;
  undefined8 *puVar8;
  undefined8 *this_01;
  long lVar9;
  long *plVar10;
  ulong uVar11;
  uint uVar12;
  undefined8 *puVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  uint local_10c;
  undefined8 *local_108;
  dtPoly *local_f0;
  dtMeshTile *local_e8;
  dtPoly *local_e0;
  dtMeshTile *pdStack_d8;
  uint *local_d0;
  dtMeshTile *local_c8;
  undefined8 local_c0;
  float local_b8;
  undefined8 local_b0;
  float local_a8;
  long local_a0;
  
  lVar5 = tpidr_el0;
  local_a0 = *(long *)(lVar5 + 0x28);
  local_10c = 0x80000008;
  *param_7 = 0;
  if ((((param_1 != 0) && (param_2 != 0)) && (param_8 != 0)) &&
     ((uVar7 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_1), local_10c = 0x80000008,
      (uVar7 & 1) != 0 &&
      (uVar7 = dtNavMesh::isValidPolyRef(*(dtNavMesh **)this,param_2), (uVar7 & 1) != 0)))) {
    if (param_1 == param_2) {
      local_10c = 0x40000000;
      iVar6 = 1;
      *param_6 = param_1;
    }
    else {
      dtNodePool::clear();
      *(undefined4 *)(*(long *)(this + 0x58) + 0xc) = 0;
      local_108 = (undefined8 *)dtNodePool::getNode(*(dtNodePool **)(this + 0x50),param_1);
      *(float *)local_108 = *param_3;
      *(float *)((long)local_108 + 4) = param_3[1];
      fVar15 = param_3[2];
      *(uint *)((long)local_108 + 0x14) = (uint)*(float *)((long)local_108 + 0x14) & 0xc0000000;
      *(float *)((long)local_108 + 0xc) = 0.0;
      *(float *)(local_108 + 1) = fVar15;
      uVar16 = NEON_fmadd(*param_4 - *param_3,*param_4 - *param_3,
                          (param_4[1] - param_3[1]) * (param_4[1] - param_3[1]));
      fVar15 = (float)NEON_fmadd(param_4[2] - param_3[2],param_4[2] - param_3[2],uVar16);
      fVar15 = (float)dtSqrt(fVar15);
      *(uint *)((long)local_108 + 0x14) =
           (uint)*(float *)((long)local_108 + 0x14) & 0x3fffffff | 0x40000000;
      *(uint *)(local_108 + 3) = param_1;
      *(float *)(local_108 + 2) = fVar15 * 0.999;
      this_00 = *(dtNodeQueue **)(this + 0x58);
      iVar6 = *(int *)(this_00 + 0xc);
      *(int *)(this_00 + 0xc) = iVar6 + 1;
      dtNodeQueue::bubbleUp(this_00,iVar6,(dtNode *)local_108);
      puVar8 = *(undefined8 **)(this + 0x58);
      iVar6 = *(int *)((long)puVar8 + 0xc);
      if (iVar6 == 0) {
        local_10c = 0x40000000;
        puVar13 = local_108;
      }
      else {
        fVar15 = *(float *)(local_108 + 2);
        local_10c = 0x40000000;
        do {
          puVar13 = *(undefined8 **)(float **)*puVar8;
          *(int *)((long)puVar8 + 0xc) = iVar6 + -1;
          dtNodeQueue::trickleDown
                    ((dtNodeQueue *)puVar8,0,(dtNode *)((float **)*puVar8)[iVar6 + -1]);
          fVar3 = *(float *)(puVar13 + 3);
          *(uint *)((long)puVar13 + 0x14) =
               (uint)*(float *)((long)puVar13 + 0x14) & 0x3fffffff | 0x80000000;
          if (fVar3 == (float)param_2) break;
          local_d0 = (uint *)0x0;
          local_c8 = (dtMeshTile *)0x0;
          dtNavMesh::getTileAndPolyByRefUnsafe
                    (*(dtNavMesh **)this,(uint)fVar3,&local_c8,(dtPoly **)&local_d0);
          local_e0 = (dtPoly *)0x0;
          pdStack_d8 = (dtMeshTile *)0x0;
          uVar12 = (uint)*(float *)((long)puVar13 + 0x14) & 0x3fffffff;
          if (uVar12 == 0) {
            fVar14 = 0.0;
            uVar12 = *local_d0;
          }
          else {
            fVar14 = *(float *)(**(long **)(this + 0x50) + (ulong)(uVar12 - 1) * 0x1c + 0x18);
            if (fVar14 != 0.0) {
              dtNavMesh::getTileAndPolyByRefUnsafe
                        (*(dtNavMesh **)this,(uint)fVar14,&pdStack_d8,&local_e0);
            }
            uVar12 = *local_d0;
          }
          if (uVar12 != 0xffffffff) {
            lVar9 = *(long *)(local_c8 + 0x20);
            do {
              fVar4 = *(float *)(lVar9 + (ulong)uVar12 * 0xc);
              if (fVar4 != 0.0 && fVar4 != fVar14) {
                local_f0 = (dtPoly *)0x0;
                local_e8 = (dtMeshTile *)0x0;
                dtNavMesh::getTileAndPolyByRefUnsafe
                          (*(dtNavMesh **)this,(uint)fVar4,&local_e8,&local_f0);
                uVar7 = (***(code ***)param_5)(param_5,fVar4,local_e8,local_f0);
                fVar21 = fVar15;
                puVar8 = local_108;
                if ((uVar7 & 1) != 0) {
                  this_01 = (undefined8 *)
                            dtNodePool::getNode(*(dtNodePool **)(this + 0x50),(uint)fVar4);
                  if (this_01 == (undefined8 *)0x0) {
                    local_10c = local_10c | 0x20;
                  }
                  else {
                    if (((uint)*(float *)((long)this_01 + 0x14) >> 0x1e == 0) &&
                       (iVar6 = getPortalPoints((dtNavMeshQuery *)this_01,(uint)fVar3,
                                                (dtPoly *)local_d0,local_c8,(uint)fVar4,local_f0,
                                                local_e8,(float *)&local_b0,(float *)&local_c0),
                       -1 < iVar6)) {
                      *this_01 = CONCAT44(((float)((ulong)local_b0 >> 0x20) +
                                          (float)((ulong)local_c0 >> 0x20)) * 0.5,
                                          ((float)local_b0 + (float)local_c0) * 0.5);
                      *(float *)(this_01 + 1) = (local_a8 + local_b8) * 0.5;
                    }
                    if (fVar4 == (float)param_2) {
                      fVar17 = (float)(**(code **)(*(long *)param_5 + 8))
                                                (param_5,puVar13,this_01,fVar14,pdStack_d8,local_e0,
                                                 fVar3,local_c8,local_d0,param_2,local_e8,local_f0);
                      fVar18 = (float)(**(code **)(*(long *)param_5 + 8))
                                                (param_5,this_01,param_4,fVar3,local_c8,local_d0,
                                                 param_2,local_e8,local_f0,0,0,0);
                      fVar20 = 0.0;
                      fVar18 = fVar18 + fVar17 + *(float *)((long)puVar13 + 0xc);
                      fVar19 = fVar18 + 0.0;
                      fVar17 = *(float *)((long)this_01 + 0x14);
                    }
                    else {
                      fVar18 = (float)(**(code **)(*(long *)param_5 + 8))
                                                (param_5,puVar13,this_01,fVar14,pdStack_d8,local_e0,
                                                 fVar3,local_c8,local_d0,fVar4,local_e8,local_f0);
                      fVar17 = param_4[1] - *(float *)((long)this_01 + 4);
                      uVar16 = NEON_fmadd(*param_4 - *(float *)this_01,*param_4 - *(float *)this_01,
                                          fVar17 * fVar17);
                      fVar18 = fVar18 + *(float *)((long)puVar13 + 0xc);
                      fVar17 = (float)NEON_fmadd(param_4[2] - *(float *)(this_01 + 1),
                                                 param_4[2] - *(float *)(this_01 + 1),uVar16);
                      fVar20 = (float)dtSqrt(fVar17);
                      fVar20 = fVar20 * 0.999;
                      fVar19 = fVar18 + fVar20;
                      fVar17 = *(float *)((long)this_01 + 0x14);
                    }
                    if (((((uint)fVar17 >> 0x1e & 1) == 0) || (fVar19 < *(float *)(this_01 + 2))) &&
                       ((-1 < (int)fVar17 || (fVar19 < *(float *)(this_01 + 2))))) {
                      iVar6 = **(int **)(this + 0x50);
                      *(float *)((long)this_01 + 0xc) = fVar18;
                      *(float *)(this_01 + 2) = fVar19;
                      uVar2 = ((uint)((int)puVar13 - iVar6) >> 2) * -0x49249249 + 1 & 0x3fffffff;
                      *(uint *)((long)this_01 + 0x14) = uVar2 | (uint)fVar17 & 0x40000000;
                      *(float *)(this_01 + 3) = fVar4;
                      if (((uint)fVar17 & 0x40000000) == 0) {
                        *(uint *)((long)this_01 + 0x14) = uVar2 | 0x40000000;
                        plVar10 = *(long **)(this + 0x58);
                        uVar7 = (ulong)*(uint *)((long)plVar10 + 0xc);
                        *(uint *)((long)plVar10 + 0xc) = *(uint *)((long)plVar10 + 0xc) + 1;
LAB_00dd5344:
                        dtNodeQueue::bubbleUp((dtNodeQueue *)plVar10,(int)uVar7,(dtNode *)this_01);
                      }
                      else {
                        plVar10 = *(long **)(this + 0x58);
                        if (0 < (int)*(uint *)((long)plVar10 + 0xc)) {
                          uVar7 = 0;
                          do {
                            if (*(undefined8 **)(*plVar10 + uVar7 * 8) == this_01)
                            goto LAB_00dd5344;
                            uVar7 = uVar7 + 1;
                          } while (*(uint *)((long)plVar10 + 0xc) != uVar7);
                        }
                      }
                      fVar21 = fVar20;
                      puVar8 = this_01;
                      if (fVar15 <= fVar20) {
                        fVar21 = fVar15;
                        puVar8 = local_108;
                      }
                    }
                  }
                }
                local_108 = puVar8;
                lVar9 = *(long *)(local_c8 + 0x20);
                fVar15 = fVar21;
              }
              uVar12 = *(uint *)(lVar9 + (ulong)uVar12 * 0xc + 4);
            } while (uVar12 != 0xffffffff);
          }
          puVar8 = *(undefined8 **)(this + 0x58);
          iVar6 = *(int *)((long)puVar8 + 0xc);
          puVar13 = local_108;
        } while (iVar6 != 0);
      }
      local_108 = puVar13;
      fVar15 = *(float *)(local_108 + 3);
      puVar8 = (undefined8 *)0x0;
      do {
        puVar13 = local_108;
        fVar3 = *(float *)((long)puVar13 + 0x14);
        local_108 = (undefined8 *)0x0;
        if (((uint)fVar3 & 0x3fffffff) != 0) {
          local_108 = (undefined8 *)
                      (**(long **)(this + 0x50) + (ulong)(((uint)fVar3 & 0x3fffffff) - 1) * 0x1c);
        }
        if (puVar8 != (undefined8 *)0x0) {
          puVar8 = (undefined8 *)
                   (ulong)((int)((ulong)((long)puVar8 - **(long **)(this + 0x50)) >> 2) *
                           -0x49249249 + 1);
        }
        *(uint *)((long)puVar13 + 0x14) = (uint)fVar3 & 0xc0000000 | (uint)puVar8 & 0x3fffffff;
        puVar8 = puVar13;
      } while (local_108 != (undefined8 *)0x0);
      if (fVar15 != (float)param_2) {
        local_10c = local_10c | 0x40;
      }
      if (param_8 < 2) {
        param_8 = 1;
      }
      plVar10 = *(long **)(this + 0x50);
      uVar7 = 0;
      do {
        uVar11 = uVar7;
        param_6[uVar11] = (uint)*(float *)(puVar13 + 3);
        if (param_8 - 1 == uVar11) {
          local_10c = local_10c | 0x10;
          break;
        }
        pfVar1 = (float *)((long)puVar13 + 0x14);
        puVar13 = (undefined8 *)0x0;
        if (((uint)*pfVar1 & 0x3fffffff) != 0) {
          puVar13 = (undefined8 *)(*plVar10 + (ulong)(((uint)*pfVar1 & 0x3fffffff) - 1) * 0x1c);
        }
        uVar7 = uVar11 + 1;
      } while (puVar13 != (undefined8 *)0x0);
      iVar6 = (int)uVar11 + 1;
    }
    *param_7 = iVar6;
  }
  if (*(long *)(lVar5 + 0x28) != local_a0) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_10c;
}


