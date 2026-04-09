// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 00ba5e54
// Size: 516 bytes
// Signature: undefined __thiscall processCollision(Bt2ConvexHeightfieldCollisionAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* Bt2ConvexHeightfieldCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
Bt2ConvexHeightfieldCollisionAlgorithm::processCollision
          (Bt2ConvexHeightfieldCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  btCollisionObjectWrapper *pbVar1;
  long lVar2;
  long lVar3;
  btPersistentManifold *this_00;
  long lVar4;
  btCollisionObjectWrapper *pbVar5;
  undefined8 uVar6;
  Bt2HeightfieldTerrainShape *this_01;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined **local_100;
  btPersistentManifold *local_f8;
  long local_f0;
  long lStack_e8;
  btManifoldResult *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  float fStack_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined local_8c;
  long local_88;
  
  lVar2 = tpidr_el0;
  local_88 = *(long *)(lVar2 + 0x28);
  pbVar1 = param_1;
  if (this[0x10] != (Bt2ConvexHeightfieldCollisionAlgorithm)0x0) {
    pbVar1 = param_2;
    param_2 = param_1;
  }
  this_01 = *(Bt2HeightfieldTerrainShape **)(param_2 + 8);
  if (*(int *)(this_01 + 8) == 0x1d) {
    if (*(int *)(*(long *)(pbVar1 + 8) + 8) == 0x13) {
      puVar7 = *(undefined4 **)(pbVar1 + 0x18);
      uVar11 = *puVar7;
      uVar10 = puVar7[1];
      uVar13 = puVar7[4];
      fVar12 = (float)puVar7[5];
      uVar15 = puVar7[8];
      uVar14 = puVar7[9];
      btManifoldResult::btManifoldResult((btManifoldResult *)&local_100,pbVar1,param_2);
      local_b4 = 0;
      local_a4 = 0;
      uStack_98 = *(undefined8 *)(puVar7 + 0xe);
      local_a0 = *(undefined8 *)(puVar7 + 0xc);
      local_f8 = *(btPersistentManifold **)(this + 0x18);
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      pbVar5 = *(btCollisionObjectWrapper **)(param_4 + 0x10);
      local_100 = &PTR__Result_00fe1308;
      uVar8 = NEON_fmadd(uVar10,puVar7[0xc],fVar12 * (float)puVar7[0xd]);
      uVar9 = puVar7[0xe];
      *(undefined8 *)(local_f8 + 0x308) = *(undefined8 *)(pbVar1 + 0x10);
      local_8c = pbVar5 != pbVar1;
      *(undefined8 *)(local_f8 + 0x310) = uVar6;
      local_90 = NEON_fmadd(uVar14,uVar9,uVar8);
      local_c8 = param_4;
      local_c0 = uVar11;
      uStack_bc = uVar13;
      local_b8 = uVar15;
      local_b0 = uVar10;
      fStack_ac = fVar12;
      local_a8 = uVar14;
      Bt2HeightfieldTerrainShape::processConvexCollision
                (this_01,param_2,pbVar1,*(btVoronoiSimplexSolver **)(this + 0x20),
                 *(btConvexPenetrationDepthSolver **)(this + 0x28),(btManifoldResult *)&local_100,
                 (bool)param_3[0x22]);
      if (*(int *)(local_f8 + 0x318) != 0) {
        lVar4 = *(long *)(local_f8 + 0x308);
        lVar3 = *(long *)(lStack_e8 + 0x10);
        if (*(long *)(local_f8 + 0x308) != *(long *)(local_f0 + 0x10)) {
          lVar4 = *(long *)(lStack_e8 + 0x10);
          lVar3 = *(long *)(local_f0 + 0x10);
        }
        btPersistentManifold::refreshContactPoints
                  (local_f8,(btTransform *)(lVar4 + 8),(btTransform *)(lVar3 + 8));
      }
      Bt2WheelConvexCollisionAlgorithm::updateContactPoints((WheelManifoldResult *)&local_100);
    }
    else if (*(int *)(*(long *)(pbVar1 + 8) + 8) < 0x14) {
      lVar4 = *(long *)(this + 0x18);
      *(long *)(param_4 + 8) = lVar4;
      uVar6 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(lVar4 + 0x308) = *(undefined8 *)(pbVar1 + 0x10);
      *(undefined8 *)(lVar4 + 0x310) = uVar6;
      Bt2HeightfieldTerrainShape::processConvexCollision
                (this_01,param_2,pbVar1,*(btVoronoiSimplexSolver **)(this + 0x20),
                 *(btConvexPenetrationDepthSolver **)(this + 0x28),param_4,(bool)param_3[0x22]);
      this_00 = *(btPersistentManifold **)(param_4 + 8);
      if (*(int *)(this_00 + 0x318) != 0) {
        lVar4 = *(long *)(this_00 + 0x308);
        lVar3 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
        if (*(long *)(this_00 + 0x308) != *(long *)(*(long *)(param_4 + 0x10) + 0x10)) {
          lVar4 = *(long *)(*(long *)(param_4 + 0x18) + 0x10);
          lVar3 = *(long *)(*(long *)(param_4 + 0x10) + 0x10);
        }
        btPersistentManifold::refreshContactPoints
                  (this_00,(btTransform *)(lVar4 + 8),(btTransform *)(lVar3 + 8));
      }
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


