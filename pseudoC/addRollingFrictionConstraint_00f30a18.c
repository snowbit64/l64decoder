// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addRollingFrictionConstraint
// Entry Point: 00f30a18
// Size: 428 bytes
// Signature: undefined __cdecl addRollingFrictionConstraint(btVector3 * param_1, int param_2, int param_3, int param_4, btManifoldPoint * param_5, btVector3 * param_6, btVector3 * param_7, btCollisionObject * param_8, btCollisionObject * param_9, float param_10, float param_11, float param_12)


/* btSequentialImpulseConstraintSolver::addRollingFrictionConstraint(btVector3 const&, int, int,
   int, btManifoldPoint&, btVector3 const&, btVector3 const&, btCollisionObject*,
   btCollisionObject*, float, float, float) */

btVector3 *
btSequentialImpulseConstraintSolver::addRollingFrictionConstraint
          (btVector3 *param_1,int param_2,int param_3,int param_4,btManifoldPoint *param_5,
          btVector3 *param_6,btVector3 *param_7,btCollisionObject *param_8,
          btCollisionObject *param_9,float param_10,float param_11,float param_12)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  btVector3 *pbVar7;
  long lVar8;
  ulong extraout_d0;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  btCollisionObject *in_stack_ffffffffffffff80;
  
  uVar10 = (ulong)(uint)param_10;
  uVar5 = *(uint *)(param_1 + 0x8c);
  lVar8 = (long)(int)uVar5;
  if (uVar5 == *(uint *)(param_1 + 0x90)) {
    iVar3 = uVar5 << 1;
    if (uVar5 == 0) {
      iVar3 = 1;
    }
    if ((int)uVar5 < iVar3) {
      if (iVar3 == 0) {
        lVar4 = 0;
      }
      else {
        gNumAlignedAllocs = gNumAlignedAllocs + 1;
        lVar4 = (*(code *)PTR_FUN_01048e38)((long)iVar3 * 0xa0,0x10);
        uVar5 = *(uint *)(param_1 + 0x8c);
        uVar10 = extraout_d0;
      }
      if (0 < (int)uVar5) {
        lVar6 = 0;
        do {
          puVar1 = (undefined8 *)(lVar4 + lVar6);
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x98) + lVar6);
          lVar6 = lVar6 + 0xa0;
          uVar12 = *puVar2;
          uVar11 = puVar2[3];
          uVar9 = puVar2[2];
          puVar1[1] = puVar2[1];
          *puVar1 = uVar12;
          puVar1[3] = uVar11;
          puVar1[2] = uVar9;
          uVar12 = puVar2[8];
          uVar11 = puVar2[0xb];
          uVar9 = puVar2[10];
          uVar16 = puVar2[5];
          uVar15 = puVar2[4];
          uVar14 = puVar2[7];
          uVar13 = puVar2[6];
          puVar1[9] = puVar2[9];
          puVar1[8] = uVar12;
          puVar1[0xb] = uVar11;
          puVar1[10] = uVar9;
          puVar1[5] = uVar16;
          puVar1[4] = uVar15;
          puVar1[7] = uVar14;
          puVar1[6] = uVar13;
          uVar11 = puVar2[0x10];
          uVar9 = puVar2[0x13];
          uVar10 = puVar2[0x12];
          uVar15 = puVar2[0xd];
          uVar14 = puVar2[0xc];
          uVar13 = puVar2[0xf];
          uVar12 = puVar2[0xe];
          puVar1[0x11] = puVar2[0x11];
          puVar1[0x10] = uVar11;
          puVar1[0x13] = uVar9;
          puVar1[0x12] = uVar10;
          puVar1[0xd] = uVar15;
          puVar1[0xc] = uVar14;
          puVar1[0xf] = uVar13;
          puVar1[0xe] = uVar12;
        } while ((ulong)uVar5 * 0xa0 - lVar6 != 0);
      }
      param_10 = (float)uVar10;
      if ((*(long *)(param_1 + 0x98) != 0) && (param_1[0xa0] != (btVector3)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        param_10 = (float)(*(code *)PTR_FUN_01048e40)();
      }
      uVar5 = *(uint *)(param_1 + 0x8c);
      *(long *)(param_1 + 0x98) = lVar4;
      *(int *)(param_1 + 0x90) = iVar3;
      param_1[0xa0] = (btVector3)0x1;
    }
  }
  pbVar7 = (btVector3 *)(*(long *)(param_1 + 0x98) + lVar8 * 0xa0);
  *(uint *)(param_1 + 0x8c) = uVar5 + 1;
  *(int *)(pbVar7 + 0x94) = (int)param_5;
  setupRollingFrictionConstraint
            ((btSolverConstraint *)param_1,pbVar7,param_2,param_3,
             (btManifoldPoint *)(ulong)(uint)param_4,param_6,param_7,param_8,
             in_stack_ffffffffffffff80,param_10,param_11,param_12);
  return pbVar7;
}


