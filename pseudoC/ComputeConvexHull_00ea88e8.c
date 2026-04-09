// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ComputeConvexHull
// Entry Point: 00ea88e8
// Size: 924 bytes
// Signature: undefined __cdecl ComputeConvexHull(Mesh * param_1, Mesh * param_2, SArray * param_3, Mesh * param_4)


/* VHACD::ComputeConvexHull(VHACD::Mesh const*, VHACD::Mesh const*,
   VHACD::SArray<VHACD::Vec3<double>, 64ul>&, VHACD::Mesh*) */

void VHACD::ComputeConvexHull(Mesh *param_1,Mesh *param_2,SArray *param_3,Mesh *param_4)

{
  Mesh *__src;
  undefined auVar1 [16];
  undefined auVar2 [16];
  long lVar3;
  int iVar4;
  ulong *puVar5;
  int iVar6;
  double *pdVar7;
  int *piVar8;
  int *piVar9;
  ulong *puVar10;
  long lVar11;
  int iVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  int iVar16;
  ulong *puVar17;
  ulong uVar18;
  ulong uVar19;
  Mesh *pMVar20;
  ulong uVar21;
  undefined8 uVar22;
  float fVar23;
  undefined auStack_d8 [4];
  undefined8 local_d4;
  void *local_c8;
  char local_c0;
  undefined8 local_b4;
  void *local_a8;
  char local_a0;
  ulong local_94;
  void *local_88;
  char local_80;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  *(undefined8 *)(param_3 + 0x608) = 0;
  AddPoints(param_1,param_3);
  AddPoints(param_2,param_3);
  local_c0 = '\x01';
  local_a0 = '\x01';
  local_80 = '\x01';
  local_d4 = 0;
  local_b4 = 0;
  if (*(long *)(param_3 + 0x610) != 0x40) {
    param_3 = *(SArray **)(param_3 + 0x600);
  }
  local_94 = 0;
  local_c8 = (void *)0x0;
  local_a8 = (void *)0x0;
  local_88 = (void *)0x0;
  btConvexHullComputer::compute(auStack_d8,SUB81(param_3,0),1,0x18,-1.0,-1.0);
  *(undefined8 *)(param_4 + 0x608) = 0;
  *(undefined8 *)(param_4 + 0x920) = 0;
  if (0 < (int)local_d4) {
    lVar11 = 0;
    lVar14 = 0;
    uVar18 = *(ulong *)(param_4 + 0x610);
    uVar19 = 0;
    iVar16 = (int)local_d4;
    do {
      uVar22 = *(undefined8 *)((long)local_c8 + lVar11);
      fVar23 = *(float *)((undefined8 *)((long)local_c8 + lVar11) + 1);
      if (uVar19 == uVar18) {
        uVar13 = uVar18 * 2;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = uVar13;
        uVar19 = uVar18 * 0x30 | 8;
        if (SUB168(auVar1 * ZEXT816(0x18),8) != 0) {
          uVar19 = 0xffffffffffffffff;
        }
        puVar5 = (ulong *)operator_new__(uVar19);
        pMVar20 = *(Mesh **)(param_4 + 0x600);
        __src = param_4;
        if (uVar18 != 0x40) {
          __src = pMVar20;
        }
        puVar10 = puVar5 + 1;
        *puVar5 = uVar13;
        memcpy(puVar10,__src,uVar18 * 0x18);
        uVar19 = uVar18;
        if (pMVar20 != (Mesh *)0x0) {
          operator_delete__(pMVar20 + -8);
          uVar19 = *(ulong *)(param_4 + 0x608);
          iVar16 = (int)local_d4;
        }
        *(ulong **)(param_4 + 0x600) = puVar10;
        *(ulong *)(param_4 + 0x610) = uVar13;
        uVar18 = uVar13;
      }
      else {
        puVar10 = *(ulong **)(param_4 + 0x600);
      }
      puVar5 = (ulong *)param_4;
      if (uVar18 != 0x40) {
        puVar5 = puVar10;
      }
      pdVar7 = (double *)(puVar5 + uVar19 * 3);
      lVar14 = lVar14 + 1;
      lVar11 = lVar11 + 0x10;
      *(ulong *)(param_4 + 0x608) = uVar19 + 1;
      pdVar7[1] = (double)(float)((ulong)uVar22 >> 0x20);
      *pdVar7 = (double)(float)uVar22;
      pdVar7[2] = (double)fVar23;
      uVar19 = uVar19 + 1;
    } while (lVar14 < iVar16);
  }
  uVar19 = local_94 & 0xffffffff;
  if (0 < (int)local_94) {
    uVar18 = 0;
    do {
      lVar14 = (long)*(int *)((long)local_88 + uVar18 * 4);
      piVar8 = (int *)((long)local_a8 +
                      (long)*(int *)((long)local_a8 + lVar14 * 0xc + 4) * 0xc + lVar14 * 0xc);
      iVar16 = piVar8[2];
      piVar8 = piVar8 + (long)*piVar8 * 3;
      if (piVar8[2] != iVar16) {
        uVar13 = *(ulong *)(param_4 + 0x920);
        uVar21 = *(ulong *)(param_4 + 0x928);
        iVar4 = piVar8[2];
        iVar12 = *(int *)((long)local_a8 + lVar14 * 0xc + 8);
        do {
          iVar6 = iVar4;
          if (uVar13 == uVar21) {
            uVar15 = uVar21 * 2;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar15;
            uVar13 = uVar21 * 0x18 + 8;
            if (SUB168(auVar2 * ZEXT816(0xc),8) != 0 || 0xfffffffffffffff7 < uVar21 * 0x18) {
              uVar13 = 0xffffffffffffffff;
            }
            puVar5 = (ulong *)operator_new__(uVar13);
            puVar17 = *(ulong **)(param_4 + 0x918);
            puVar10 = puVar5 + 1;
            *puVar5 = uVar15;
            puVar5 = (ulong *)(param_4 + 0x618);
            if (uVar21 != 0x40) {
              puVar5 = puVar17;
            }
            memcpy(puVar10,puVar5,uVar21 * 0xc);
            uVar13 = uVar21;
            if (puVar17 != (ulong *)0x0) {
              operator_delete__(puVar17 + -1);
              uVar13 = *(ulong *)(param_4 + 0x920);
            }
            *(ulong **)(param_4 + 0x918) = puVar10;
            *(ulong *)(param_4 + 0x928) = uVar15;
            uVar21 = uVar15;
          }
          else {
            puVar10 = *(ulong **)(param_4 + 0x918);
          }
          puVar5 = (ulong *)(param_4 + 0x618);
          if (uVar21 != 0x40) {
            puVar5 = puVar10;
          }
          piVar9 = (int *)((long)puVar5 + uVar13 * 0xc);
          uVar13 = uVar13 + 1;
          *(ulong *)(param_4 + 0x920) = uVar13;
          *piVar9 = iVar16;
          piVar9[1] = iVar12;
          piVar9[2] = iVar6;
          piVar8 = piVar8 + (long)piVar8[1] * 3 + (long)piVar8[(long)piVar8[1] * 3] * 3;
          iVar4 = piVar8[2];
          iVar12 = iVar6;
        } while (piVar8[2] != iVar16);
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != uVar19);
  }
  if ((local_88 != (void *)0x0) && (local_80 != '\0')) {
    btAlignedFreeInternal(local_88);
  }
  local_88 = (void *)0x0;
  local_94 = 0;
  local_80 = 1;
  if ((local_a8 != (void *)0x0) && (local_a0 != '\0')) {
    btAlignedFreeInternal(local_a8);
  }
  local_a0 = 1;
  local_a8 = (void *)0x0;
  local_b4 = 0;
  if ((local_c8 != (void *)0x0) && (local_c0 != '\0')) {
    btAlignedFreeInternal(local_c8);
  }
  if (*(long *)(lVar3 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


