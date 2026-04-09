// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addFrictionConstraint
// Entry Point: 00f30bc4
// Size: 460 bytes
// Signature: undefined __cdecl addFrictionConstraint(btVector3 * param_1, int param_2, int param_3, int param_4, btManifoldPoint * param_5, btVector3 * param_6, btVector3 * param_7, btCollisionObject * param_8, btCollisionObject * param_9, float param_10, float param_11, float param_12)


/* btSequentialImpulseConstraintSolver::addFrictionConstraint(btVector3 const&, int, int, int,
   btManifoldPoint&, btVector3 const&, btVector3 const&, btCollisionObject*, btCollisionObject*,
   float, float, float) */

btVector3 *
btSequentialImpulseConstraintSolver::addFrictionConstraint
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
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  btCollisionObject *in_stack_ffffffffffffff70;
  
  uVar5 = *(uint *)(param_1 + 0x6c);
  lVar8 = (long)(int)uVar5;
  if (uVar5 == *(uint *)(param_1 + 0x70)) {
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
        uVar5 = *(uint *)(param_1 + 0x6c);
      }
      if (0 < (int)uVar5) {
        lVar6 = 0;
        do {
          puVar1 = (undefined8 *)(lVar4 + lVar6);
          puVar2 = (undefined8 *)(*(long *)(param_1 + 0x78) + lVar6);
          lVar6 = lVar6 + 0xa0;
          uVar11 = *puVar2;
          uVar10 = puVar2[3];
          uVar9 = puVar2[2];
          puVar1[1] = puVar2[1];
          *puVar1 = uVar11;
          puVar1[3] = uVar10;
          puVar1[2] = uVar9;
          uVar11 = puVar2[8];
          uVar10 = puVar2[0xb];
          uVar9 = puVar2[10];
          uVar15 = puVar2[5];
          uVar14 = puVar2[4];
          uVar13 = puVar2[7];
          uVar12 = puVar2[6];
          puVar1[9] = puVar2[9];
          puVar1[8] = uVar11;
          puVar1[0xb] = uVar10;
          puVar1[10] = uVar9;
          puVar1[5] = uVar15;
          puVar1[4] = uVar14;
          puVar1[7] = uVar13;
          puVar1[6] = uVar12;
          uVar11 = puVar2[0x10];
          uVar10 = puVar2[0x13];
          uVar9 = puVar2[0x12];
          uVar15 = puVar2[0xd];
          uVar14 = puVar2[0xc];
          uVar13 = puVar2[0xf];
          uVar12 = puVar2[0xe];
          puVar1[0x11] = puVar2[0x11];
          puVar1[0x10] = uVar11;
          puVar1[0x13] = uVar10;
          puVar1[0x12] = uVar9;
          puVar1[0xd] = uVar15;
          puVar1[0xc] = uVar14;
          puVar1[0xf] = uVar13;
          puVar1[0xe] = uVar12;
        } while ((ulong)uVar5 * 0xa0 - lVar6 != 0);
      }
      if ((*(long *)(param_1 + 0x78) != 0) && (param_1[0x80] != (btVector3)0x0)) {
        gNumAlignedFree = gNumAlignedFree + 1;
        (*(code *)PTR_FUN_01048e40)();
      }
      uVar5 = *(uint *)(param_1 + 0x6c);
      *(long *)(param_1 + 0x78) = lVar4;
      *(int *)(param_1 + 0x70) = iVar3;
      param_1[0x80] = (btVector3)0x1;
    }
  }
  pbVar7 = (btVector3 *)(*(long *)(param_1 + 0x78) + lVar8 * 0xa0);
  *(uint *)(param_1 + 0x6c) = uVar5 + 1;
  *(int *)(pbVar7 + 0x94) = (int)param_5;
  setupFrictionConstraint
            ((btSolverConstraint *)param_1,pbVar7,param_2,param_3,
             (btManifoldPoint *)(ulong)(uint)param_4,param_6,param_7,param_8,
             in_stack_ffffffffffffff70,param_10,param_11,param_12);
  return pbVar7;
}


