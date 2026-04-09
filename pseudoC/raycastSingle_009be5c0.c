// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: raycastSingle
// Entry Point: 009be5c0
// Size: 276 bytes
// Signature: undefined __cdecl raycastSingle(Bt2World * param_1, Vector3 * param_2, Vector3 * param_3, float param_4, btCollisionObject * param_5, Vector3 * param_6)


/* Bt2SceneQueryUtil::raycastSingle(Bt2World*, Vector3 const&, Vector3 const&, float,
   btCollisionObject const*, Vector3*) */

float Bt2SceneQueryUtil::raycastSingle
                (Bt2World *param_1,Vector3 *param_2,Vector3 *param_3,float param_4,
                btCollisionObject *param_5,Vector3 *param_6)

{
  long lVar1;
  float fVar2;
  undefined **local_e0;
  undefined4 local_d8;
  long local_d0;
  undefined8 uStack_c8;
  float *local_c0;
  Vector3 *pVStack_b8;
  float local_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined4 local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  float local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined8 local_64;
  undefined8 local_5c;
  undefined4 local_54;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  float local_30;
  undefined4 local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_38 = *(undefined8 *)param_2;
  local_68 = 0x3f800000;
  local_5c = 0;
  local_30 = *(float *)(param_2 + 8);
  local_64 = 0;
  local_54 = 0x3f800000;
  local_50 = 0;
  uStack_48 = 0;
  local_40 = 0x3f800000;
  local_70 = local_30 + *(float *)(param_3 + 8) * param_4;
  local_2c = 0;
  local_a8 = 0x3f800000;
  local_9c = 0;
  local_a4 = 0;
  local_94 = 0x3f800000;
  local_90 = 0;
  uStack_88 = 0;
  local_80 = 0x3f800000;
  local_78 = CONCAT44((float)((ulong)local_38 >> 0x20) +
                      (float)((ulong)*(undefined8 *)param_3 >> 0x20) * param_4,
                      (float)local_38 + (float)*(undefined8 *)param_3 * param_4);
  local_d8 = 0x3f800000;
  local_c0 = &local_ac;
  local_e0 = &PTR__RayResultCallback_00fe1e20;
  local_6c = 0;
  local_d0 = 0;
  uStack_c8 = 0xffff0001;
  pVStack_b8 = param_6;
  btCollisionWorld::rayTestSingle
            ((btTransform *)&local_68,(btTransform *)&local_a8,param_5,
             *(btCollisionShape **)(param_5 + 200),(btTransform *)(param_5 + 8),
             (RayResultCallback *)&local_e0);
  fVar2 = 1.0;
  if (local_d0 != 0) {
    fVar2 = local_ac;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return fVar2 * param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


