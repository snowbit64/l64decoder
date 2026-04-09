// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: rayTest
// Entry Point: 00f49a08
// Size: 404 bytes
// Signature: undefined __cdecl rayTest(btVector3 * param_1, btVector3 * param_2, RayResultCallback * param_3)


/* btCollisionWorld::rayTest(btVector3 const&, btVector3 const&,
   btCollisionWorld::RayResultCallback&) const */

void btCollisionWorld::rayTest(btVector3 *param_1,btVector3 *param_2,RayResultCallback *param_3)

{
  long lVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  fVar3 = *(float *)param_3 - *(float *)param_2;
  fVar5 = *(float *)(param_3 + 4) - *(float *)(param_2 + 4);
  fVar4 = *(float *)(param_3 + 8) - *(float *)(param_2 + 8);
  fStack_e0 = (float)*(undefined8 *)(param_2 + 8);
  local_e8 = (float)*(undefined8 *)param_2;
  fStack_e4 = (float)((ulong)*(undefined8 *)param_2 >> 0x20);
  uVar6 = NEON_fmadd(fVar5,fVar5,fVar3 * fVar3);
  local_d8 = (float)*(undefined8 *)param_3;
  fStack_d4 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar7 = (float)NEON_fmadd(fVar4,fVar4,uVar6);
  fVar7 = 1.0 / SQRT(fVar7);
  fStack_d0 = (float)*(undefined8 *)(param_3 + 8);
  uVar6 = NEON_fmadd(fStack_d4 - fStack_e4,fVar7 * fVar5,(local_d8 - local_e8) * fVar7 * fVar3);
  NEON_fmadd(fStack_d0 - fStack_e0,fVar7 * fVar4,uVar6);
  (**(code **)(**(long **)(param_1 + 0x60) + 0x30))();
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


