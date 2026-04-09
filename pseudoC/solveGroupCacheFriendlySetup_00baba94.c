// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: solveGroupCacheFriendlySetup
// Entry Point: 00baba94
// Size: 312 bytes
// Signature: undefined __cdecl solveGroupCacheFriendlySetup(btCollisionObject * * param_1, int param_2, btPersistentManifold * * param_3, int param_4, btTypedConstraint * * param_5, int param_6, btContactSolverInfo * param_7, btIDebugDraw * param_8, undefined8 param_9)


/* Bt2Solver::solveGroupCacheFriendlySetup(btCollisionObject**, int, btPersistentManifold**, int,
   btTypedConstraint**, int, btContactSolverInfo const&, btIDebugDraw*) */

undefined4
Bt2Solver::solveGroupCacheFriendlySetup
          (btCollisionObject **param_1,int param_2,btPersistentManifold **param_3,int param_4,
          btTypedConstraint **param_5,int param_6,btContactSolverInfo *param_7,btIDebugDraw *param_8
          ,undefined8 param_9)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long **pplVar13;
  undefined4 uVar14;
  
  uVar14 = btSequentialImpulseConstraintSolver::solveGroupCacheFriendlySetup
                     (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  *(undefined4 *)((long)param_1 + 0x15c) = 0;
  if (0 < (int)param_3) {
    uVar2 = *(uint *)(param_1[0x29] + 4);
    if (0 < (int)uVar2) {
      lVar9 = ((long *)(ulong)(uint)param_2)[(int)param_3 - 1];
      uVar11 = 0;
      lVar10 = *(long *)(ulong)(uint)param_2;
      *(uint *)(param_1 + 0x2b) = uVar2;
      lVar12 = *(long *)(param_1[0x29] + 0x10);
      iVar3 = *(int *)(lVar10 + 0xe4);
      iVar4 = *(int *)(lVar9 + 0xe4);
      do {
        iVar6 = (**(code **)(**(long **)(lVar12 + uVar11 * 8) + 0x10))();
        bVar1 = iVar3 <= iVar6;
        bVar5 = false;
        if (bVar1) {
          bVar5 = iVar6 - iVar4 < 0;
        }
        if (bVar1 && iVar6 == iVar4 || bVar5 != (bVar1 && SBORROW4(iVar6,iVar4))) {
          *(int *)(param_1 + 0x2b) = (int)uVar11;
          if ((int)uVar2 <= (int)uVar11) {
            return uVar14;
          }
          goto LAB_00babb50;
        }
        uVar11 = uVar11 + 1;
      } while (uVar2 != uVar11);
      uVar11 = (ulong)*(uint *)(param_1 + 0x2b);
      if ((int)*(uint *)(param_1 + 0x2b) < (int)uVar2) {
LAB_00babb50:
        iVar6 = uVar2 - (int)uVar11;
        pplVar13 = (long **)(lVar12 + (long)(int)uVar11 * 8);
        do {
          iVar7 = (**(code **)(**pplVar13 + 0x10))();
          bVar1 = iVar7 < iVar3;
          bVar5 = false;
          if (!bVar1) {
            bVar5 = iVar7 - iVar4 < 0;
          }
          if ((bVar1 || iVar7 != iVar4) && bVar5 == (!bVar1 && SBORROW4(iVar7,iVar4))) {
            return uVar14;
          }
          plVar8 = *pplVar13;
          lVar9 = *plVar8;
          *(int *)((long)param_1 + 0x15c) = *(int *)((long)param_1 + 0x15c) + 1;
          (**(code **)(lVar9 + 0x20))(plVar8,param_1[0x2a],param_1 + 1,param_8);
          iVar6 = iVar6 + -1;
          pplVar13 = pplVar13 + 1;
        } while (iVar6 != 0);
      }
    }
  }
  return uVar14;
}


