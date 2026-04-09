// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayTestInternal
// Entry Point: 00f4577c
// Size: 1048 bytes
// Signature: undefined __thiscall rayTestInternal(btDbvt * this, btDbvtNode * param_1, btVector3 * param_2, btVector3 * param_3, btVector3 * param_4, uint * param_5, float param_6, btVector3 * param_7, btVector3 * param_8, ICollide * param_9)


/* btDbvt::rayTestInternal(btDbvtNode const*, btVector3 const&, btVector3 const&, btVector3 const&,
   unsigned int*, float, btVector3 const&, btVector3 const&, btDbvt::ICollide&) const */

void __thiscall
btDbvt::rayTestInternal
          (btDbvt *this,btDbvtNode *param_1,btVector3 *param_2,btVector3 *param_3,btVector3 *param_4
          ,uint *param_5,float param_6,btVector3 *param_7,btVector3 *param_8,ICollide *param_9)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_98;
  float local_90 [2];
  undefined8 local_88;
  float local_80;
  long local_78;
  
  lVar2 = tpidr_el0;
  local_78 = *(long *)(lVar2 + 0x28);
  if (param_1 != (btDbvtNode *)0x0) {
    lVar8 = (long)*(int *)(this + 0x44);
    if (*(int *)(this + 0x44) < 0x80) {
      if (*(int *)(this + 0x48) < 0x80) {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar3 = (*(code *)PTR_FUN_01048e38)(0x400,0x10);
        uVar1 = *(uint *)(this + 0x44);
        if (0 < (int)uVar1) {
          lVar5 = 0;
          do {
            *(undefined8 *)(lVar3 + lVar5) = *(undefined8 *)(*(long *)(this + 0x50) + lVar5);
            lVar5 = lVar5 + 8;
          } while ((ulong)uVar1 * 8 - lVar5 != 0);
        }
        if ((*(long *)(this + 0x50) != 0) && (this[0x58] != (btDbvt)0x0)) {
          gNumAlignedFree = gNumAlignedFree + 1;
          (*(code *)PTR_FUN_01048e40)();
        }
        *(long *)(this + 0x50) = lVar3;
        this[0x58] = (btDbvt)0x1;
        *(undefined4 *)(this + 0x48) = 0x80;
      }
      do {
        *(undefined8 *)(*(long *)(this + 0x50) + lVar8 * 8) = 0;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 0x80);
    }
    iVar7 = 0x7e;
    uVar11 = 1;
    *(undefined4 *)(this + 0x44) = 0x80;
    **(btDbvtNode ***)(this + 0x50) = param_1;
    do {
      iVar10 = (int)uVar11;
      lVar8 = *(long *)(this + 0x50);
      uVar11 = (long)iVar10 - 1;
      local_90[1] = 0.0;
      puVar9 = *(undefined8 **)(lVar8 + uVar11 * 8);
      local_98 = CONCAT44((float)((ulong)*puVar9 >> 0x20) -
                          (float)((ulong)*(undefined8 *)param_8 >> 0x20),
                          (float)*puVar9 - (float)*(undefined8 *)param_8);
      local_88 = CONCAT44((float)((ulong)puVar9[2] >> 0x20) -
                          (float)((ulong)*(undefined8 *)param_7 >> 0x20),
                          (float)puVar9[2] - (float)*(undefined8 *)param_7);
      local_90[0] = *(float *)(puVar9 + 1) - *(float *)(param_8 + 8);
      local_80 = *(float *)(puVar9 + 3) - *(float *)(param_7 + 8);
      fVar13 = (*(float *)(&local_98 + (ulong)*param_5 * 2) - *(float *)param_2) * *(float *)param_4
      ;
      fVar12 = (*(float *)((long)&local_98 + (ulong)(1 - param_5[1]) * 0x10 + 4) -
               *(float *)(param_2 + 4)) * *(float *)(param_4 + 4);
      if (fVar13 <= fVar12) {
        fVar15 = (*(float *)((long)&local_98 + (ulong)param_5[1] * 0x10 + 4) -
                 *(float *)(param_2 + 4)) * *(float *)(param_4 + 4);
        fVar14 = (*(float *)(&local_98 + (ulong)(1 - *param_5) * 2) - *(float *)param_2) *
                 *(float *)param_4;
        if (fVar15 <= fVar14) {
          if (fVar15 <= fVar13) {
            fVar15 = fVar13;
          }
          fVar13 = (local_90[(ulong)(1 - param_5[2]) * 4] - *(float *)(param_2 + 8)) *
                   *(float *)(param_4 + 8);
          if (fVar15 <= fVar13) {
            fVar14 = (float)NEON_fminnm(fVar12,fVar14);
            fVar12 = (local_90[(ulong)param_5[2] * 4] - *(float *)(param_2 + 8)) *
                     *(float *)(param_4 + 8);
            if (fVar12 <= fVar14) {
              if (fVar12 <= fVar15) {
                fVar12 = fVar15;
              }
              if ((fVar12 < param_6) && (fVar12 = (float)NEON_fminnm(fVar13,fVar14), 0.0 < fVar12))
              {
                if (puVar9[6] == 0) {
                  uVar4 = (**(code **)(*(long *)param_9 + 0x18))(param_9,puVar9);
                  if ((uVar4 & 1) == 0) break;
                }
                else {
                  if (iVar7 < (int)uVar11) {
                    iVar7 = *(int *)(this + 0x44);
                    lVar3 = (long)iVar7;
                    iVar6 = (int)(lVar3 << 1);
                    if (iVar7 < iVar6) {
                      if (*(int *)(this + 0x48) < iVar6) {
                        if (iVar7 == 0) {
                          lVar8 = 0;
                          lVar5 = *(long *)(this + 0x50);
                        }
                        else {
                          gNumAlignedAllocs = gNumAlignedAllocs + 1;
                          lVar8 = (*(code *)PTR_FUN_01048e38)(lVar3 << 4,0x10);
                          uVar1 = *(uint *)(this + 0x44);
                          if (0 < (int)uVar1) {
                            lVar5 = 0;
                            do {
                              *(undefined8 *)(lVar8 + lVar5) =
                                   *(undefined8 *)(*(long *)(this + 0x50) + lVar5);
                              lVar5 = lVar5 + 8;
                            } while ((ulong)uVar1 * 8 - lVar5 != 0);
                          }
                          lVar5 = *(long *)(this + 0x50);
                        }
                        if ((lVar5 != 0) && (this[0x58] != (btDbvt)0x0)) {
                          gNumAlignedFree = gNumAlignedFree + 1;
                          (*(code *)PTR_FUN_01048e40)();
                        }
                        this[0x58] = (btDbvt)0x1;
                        *(long *)(this + 0x50) = lVar8;
                        *(int *)(this + 0x48) = iVar6;
                      }
                      do {
                        *(undefined8 *)(lVar8 + lVar3 * 8) = 0;
                        lVar3 = lVar3 + 1;
                        lVar8 = *(long *)(this + 0x50);
                      } while (iVar6 != lVar3);
                    }
                    iVar7 = iVar6 + -2;
                    *(int *)(this + 0x44) = iVar6;
                  }
                  *(undefined8 *)(lVar8 + uVar11 * 8) = puVar9[5];
                  uVar11 = (ulong)(iVar10 + 1);
                  *(undefined8 *)(*(long *)(this + 0x50) + (long)iVar10 * 8) = puVar9[6];
                }
              }
            }
          }
        }
      }
    } while ((int)uVar11 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


