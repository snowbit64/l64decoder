// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: processCollision
// Entry Point: 009afc1c
// Size: 300 bytes
// Signature: undefined __thiscall processCollision(Bt2WheelConvexCollisionAlgorithm * this, btCollisionObjectWrapper * param_1, btCollisionObjectWrapper * param_2, btDispatcherInfo * param_3, btManifoldResult * param_4)


/* Bt2WheelConvexCollisionAlgorithm::processCollision(btCollisionObjectWrapper const*,
   btCollisionObjectWrapper const*, btDispatcherInfo const&, btManifoldResult*) */

void __thiscall
Bt2WheelConvexCollisionAlgorithm::processCollision
          (Bt2WheelConvexCollisionAlgorithm *this,btCollisionObjectWrapper *param_1,
          btCollisionObjectWrapper *param_2,btDispatcherInfo *param_3,btManifoldResult *param_4)

{
  btCollisionObjectWrapper *pbVar1;
  long lVar2;
  btCollisionObjectWrapper *pbVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined **local_100 [7];
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
  pbVar1 = param_2;
  pbVar3 = param_1;
  if (this[0x3c] != (Bt2WheelConvexCollisionAlgorithm)0x0) {
    pbVar1 = param_1;
    pbVar3 = param_2;
  }
  puVar4 = *(undefined4 **)(pbVar3 + 0x18);
  uVar7 = *puVar4;
  uVar6 = puVar4[1];
  uVar9 = puVar4[4];
  fVar8 = (float)puVar4[5];
  uVar11 = puVar4[8];
  uVar10 = puVar4[9];
  btManifoldResult::btManifoldResult((btManifoldResult *)local_100,pbVar3,pbVar1);
  local_b4 = 0;
  local_a4 = 0;
  uStack_98 = *(undefined8 *)(puVar4 + 0xe);
  local_a0 = *(undefined8 *)(puVar4 + 0xc);
  local_100[0] = &PTR__Result_00fe1308;
  local_8c = *(btCollisionObjectWrapper **)(param_4 + 0x10) != pbVar3;
  uVar5 = NEON_fmadd(uVar6,puVar4[0xc],fVar8 * (float)puVar4[0xd]);
  local_90 = NEON_fmadd(uVar10,puVar4[0xe],uVar5);
  local_c8 = param_4;
  local_c0 = uVar7;
  uStack_bc = uVar9;
  local_b8 = uVar11;
  local_b0 = uVar6;
  fStack_ac = fVar8;
  local_a8 = uVar10;
  btConvexConvexAlgorithm::processCollision
            ((btConvexConvexAlgorithm *)this,param_1,param_2,param_3,(btManifoldResult *)local_100);
  updateContactPoints((WheelManifoldResult *)local_100);
  if (*(long *)(lVar2 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


