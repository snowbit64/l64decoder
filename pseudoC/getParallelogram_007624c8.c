// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getParallelogram
// Entry Point: 007624c8
// Size: 1192 bytes
// Signature: undefined __thiscall getParallelogram(FieldCropsQuery * this, MethodInvocation * param_1)


/* FieldCropsQuery::getParallelogram(MethodInvocation*) */

void __thiscall FieldCropsQuery::getParallelogram(FieldCropsQuery *this,MethodInvocation *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  DensityMapModifier *this_00;
  long lVar4;
  long lVar5;
  FieldCropsQuery FVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  ulong uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  ParallelogramHelper aPStack_118 [72];
  uint local_d0;
  uint local_cc;
  uint local_c0;
  uint local_bc;
  float local_b8;
  float fStack_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  long local_a0;
  
  lVar7 = tpidr_el0;
  local_a0 = *(long *)(lVar7 + 0x28);
  fVar22 = *(float *)param_1;
  fVar23 = *(float *)(param_1 + 0x10);
  plVar1 = *(long **)(*(long *)(this + 8) + 0x50);
  this_00 = *(DensityMapModifier **)(*(long *)(this + 8) + 0x58);
  fVar24 = *(float *)(param_1 + 0x20);
  fVar25 = *(float *)(param_1 + 0x30);
  fVar26 = *(float *)(param_1 + 0x40);
  fVar27 = *(float *)(param_1 + 0x50);
  uVar8 = (**(code **)(*plVar1 + 0x48))(plVar1);
  uVar9 = (**(code **)(*plVar1 + 0x50))(plVar1);
  TerrainDataPlane::localToDensityMap
            (*(TerrainDataPlane **)(this + 8),fVar22,fVar23,&local_ac,&local_b8);
  TerrainDataPlane::localDirToDensityMap
            (*(TerrainDataPlane **)(this + 8),fVar24,fVar25,&fStack_a8,&fStack_b4);
  TerrainDataPlane::localDirToDensityMap
            (*(TerrainDataPlane **)(this + 8),fVar26,fVar27,&local_a4,&local_b0);
  lVar2 = *(long *)(this + 0x10);
  lVar4 = *(long *)(this + 0x18);
  lVar3 = *(long *)(this + 0x28);
  lVar5 = *(long *)(this + 0x30);
  uVar19 = *(uint *)(this + 0x44);
  FVar6 = this[0x40];
  ParallelogramHelper::ParallelogramHelper
            (aPStack_118,local_ac,local_b8,fStack_a8,fStack_b4,local_a4,local_b0,uVar8,uVar9,0);
  if (((uint)((ulong)(lVar5 - lVar3) >> 4) | (uint)((ulong)(lVar4 - lVar2) >> 4)) == 0) {
    if (local_d0 < local_cc) {
      iVar20 = 0;
      iVar21 = 0;
      uVar8 = local_d0;
      do {
        ParallelogramHelper::startXIteration(aPStack_118,uVar8);
        uVar9 = local_c0;
        if (local_c0 < local_bc) {
          do {
            uVar10 = DensityMapModifier::readValue(this_00,uVar9,uVar8);
            uVar10 = checkCropDensityMaps
                               (uVar9,uVar8,uVar19,(CropDensityMap *)(this + 0x48),uVar10,
                                FVar6 != (FieldCropsQuery)0x0);
            iVar20 = iVar20 + (uVar10 & 1);
            iVar21 = iVar21 + 1;
            uVar9 = uVar9 + 1;
          } while (uVar9 < local_bc);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_cc);
      goto LAB_007628e0;
    }
  }
  else {
    uVar12 = lVar5 - lVar3 >> 4;
    uVar18 = lVar4 - lVar2 >> 4;
    uVar15 = uVar18 & 0xffffffff;
    uVar13 = uVar12 & 0xffffffff;
    iVar17 = (int)uVar18;
    iVar11 = (int)uVar12;
    if (uVar19 == 0) {
      if (local_d0 < local_cc) {
        iVar20 = 0;
        iVar21 = 0;
        uVar19 = local_d0;
        do {
          ParallelogramHelper::startXIteration(aPStack_118,uVar19);
          for (uVar8 = local_c0; uVar8 < local_bc; uVar8 = uVar8 + 1) {
            uVar18 = DensityMapModifier::readValue(this_00,uVar8,uVar19);
            puVar14 = (uint *)(lVar2 + 0xc);
            uVar12 = uVar15;
            if (iVar17 == 0) {
LAB_00762888:
              puVar14 = (uint *)(lVar3 + 0xc);
              uVar12 = uVar13;
              if (iVar11 == 0) {
                iVar20 = iVar20 + 1;
              }
              else {
                do {
                  uVar12 = uVar12 - 1;
                  uVar16 = 1L << ((uVar18 & 0xffffffff) >> ((ulong)puVar14[-1] & 0x3f) &
                                  (ulong)*puVar14 & 0x3f) & *(ulong *)(puVar14 + -3);
                  puVar14 = puVar14 + 4;
                } while (uVar16 == 0 && uVar12 != 0);
                if (uVar16 == 0) {
                  iVar20 = iVar20 + 1;
                }
              }
            }
            else {
              do {
                uVar12 = uVar12 - 1;
                uVar16 = 1L << ((uVar18 & 0xffffffff) >> ((ulong)puVar14[-1] & 0x3f) &
                                (ulong)*puVar14 & 0x3f) & *(ulong *)(puVar14 + -3);
                puVar14 = puVar14 + 4;
              } while (uVar16 == 0 && uVar12 != 0);
              if (uVar16 != 0) goto LAB_00762888;
            }
            iVar21 = iVar21 + 1;
          }
          uVar19 = uVar19 + 1;
        } while (uVar19 < local_cc);
        goto LAB_007628e0;
      }
    }
    else if (local_d0 < local_cc) {
      iVar20 = 0;
      iVar21 = 0;
      uVar8 = local_d0;
      do {
        ParallelogramHelper::startXIteration(aPStack_118,uVar8);
        for (uVar9 = local_c0; uVar9 < local_bc; uVar9 = uVar9 + 1) {
          uVar10 = DensityMapModifier::readValue(this_00,uVar9,uVar8);
          puVar14 = (uint *)(lVar2 + 0xc);
          uVar12 = uVar15;
          if (iVar17 == 0) {
LAB_007626f4:
            puVar14 = (uint *)(lVar3 + 0xc);
            uVar12 = uVar13;
            if (iVar11 != 0) {
              do {
                uVar12 = uVar12 - 1;
                uVar18 = 1L << ((ulong)(uVar10 >> ((ulong)puVar14[-1] & 0x3f) & *puVar14) & 0x3f) &
                         *(ulong *)(puVar14 + -3);
                puVar14 = puVar14 + 4;
              } while (uVar18 == 0 && uVar12 != 0);
              if (uVar18 != 0) goto LAB_0076268c;
            }
            uVar10 = checkCropDensityMaps
                               (uVar9,uVar8,uVar19,(CropDensityMap *)(this + 0x48),uVar10,
                                FVar6 != (FieldCropsQuery)0x0);
            iVar20 = iVar20 + (uVar10 & 1);
          }
          else {
            do {
              uVar12 = uVar12 - 1;
              uVar18 = 1L << ((ulong)(uVar10 >> ((ulong)puVar14[-1] & 0x3f) & *puVar14) & 0x3f) &
                       *(ulong *)(puVar14 + -3);
              puVar14 = puVar14 + 4;
            } while (uVar18 == 0 && uVar12 != 0);
            if (uVar18 != 0) goto LAB_007626f4;
          }
LAB_0076268c:
          iVar21 = iVar21 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < local_cc);
      goto LAB_007628e0;
    }
  }
  iVar21 = 0;
  iVar20 = 0;
LAB_007628e0:
  *(int *)(param_1 + 0x100) = iVar20;
  *(int *)(param_1 + 0x110) = iVar21;
  *(undefined4 *)(param_1 + 0x108) = 1;
  *(undefined4 *)(param_1 + 0x118) = 1;
  if (param_1[0x60] != (MethodInvocation)0x0) {
    if (*(long *)(this + 0x18) != *(long *)(this + 0x10)) {
      *(long *)(this + 0x18) = *(long *)(this + 0x10);
    }
    if (*(long *)(this + 0x30) != *(long *)(this + 0x28)) {
      *(long *)(this + 0x30) = *(long *)(this + 0x28);
    }
    *(undefined4 *)(this + 0x44) = 0;
    this[0x40] = (FieldCropsQuery)0x0;
  }
  if (*(long *)(lVar7 + 0x28) == local_a0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


