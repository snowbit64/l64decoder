// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCollisionDistance
// Entry Point: 00723578
// Size: 680 bytes
// Signature: undefined __cdecl getCollisionDistance(uint param_1, float * param_2, float * param_3, float param_4, float param_5, Bt2ScenegraphPhysicsContext * param_6, PhysicsReport * param_7, uint param_8, bool param_9, bool param_10, bool param_11, bool param_12)


/* VehicleCollisionDistanceUtil::getCollisionDistance(unsigned int, float*, float*, float, float,
   Bt2ScenegraphPhysicsContext*, VehicleCollisionDistanceUtil::PhysicsReport*, unsigned int, bool,
   bool, bool, bool) */

void VehicleCollisionDistanceUtil::getCollisionDistance
               (uint param_1,float *param_2,float *param_3,float param_4,float param_5,
               Bt2ScenegraphPhysicsContext *param_6,PhysicsReport *param_7,uint param_8,bool param_9
               ,bool param_10,bool param_11,bool param_12)

{
  long lVar1;
  undefined8 local_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined4 local_dc;
  undefined8 local_d8;
  undefined4 local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  uint local_c0 [4];
  Vector3 *local_b0 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uStack_98 = 0;
  local_a0 = 0x3f800000;
  uStack_88 = 0;
  uStack_90 = 0x3f80000000000000;
  uStack_78 = 0x3f800000;
  local_80 = 0;
  uStack_68 = 0x3f80000000000000;
  uStack_70 = 0;
  if (param_12) {
    getCollisionGeometryStraight
              (param_1,param_2,param_3,param_4,param_5,(Matrix4x4 *)&local_a0,(Vector3 *)local_b0,
               (Vector3 *)local_c0,(Vector3 *)&local_f0);
    *(undefined8 *)(param_7 + 0x88) = local_f0;
    *(undefined4 *)(param_7 + 0x90) = local_e8;
    *(undefined8 *)(param_7 + 0x10) = uStack_98;
    *(undefined8 *)(param_7 + 8) = local_a0;
    *(undefined8 *)(param_7 + 0x20) = uStack_88;
    *(undefined8 *)(param_7 + 0x18) = uStack_90;
    *(undefined8 *)(param_7 + 0x30) = uStack_78;
    *(undefined8 *)(param_7 + 0x28) = local_80;
    *(undefined8 *)(param_7 + 0x40) = uStack_68;
    *(undefined8 *)(param_7 + 0x38) = uStack_70;
    *(undefined8 *)(param_7 + 0x94) = local_e4;
    *(undefined4 *)(param_7 + 0x9c) = local_dc;
    *(undefined4 *)(param_7 + 0xa8) = local_d0;
    *(undefined8 *)(param_7 + 0xa0) = local_d8;
    *(undefined8 *)(param_7 + 0xac) = local_cc;
    *(undefined4 *)(param_7 + 0xb4) = local_c4;
    if (param_11) {
      Bt2ScenegraphPhysicsContext::overlapBoxShapes
                (param_6,(Matrix4x4 *)&local_a0,(Vector3 *)local_c0,(IPhysicsEntityReport *)param_7,
                 param_8,param_9,param_10,true,0,(TransformGroup **)0x0,2);
    }
    else {
      (**(code **)(*(long *)param_7 + 0x10))(param_7);
      Bt2ScenegraphPhysicsContext::overlapBoxShapes
                (param_6,(Matrix4x4 *)&local_a0,(Vector3 *)local_c0,(IPhysicsEntityReport *)param_7,
                 param_8,param_9,param_10,true,0,(TransformGroup **)0x0,0);
      (**(code **)(*(long *)param_7 + 0x18))(param_7);
    }
  }
  else {
    getCollisionGeometryNonStraight
              (param_1,param_2,param_3,param_4,param_5,local_c0,local_b0,(Vector3 *)&local_f0);
    *(undefined8 *)(param_7 + 0x88) = local_f0;
    *(undefined4 *)(param_7 + 0x90) = local_e8;
    *(undefined8 *)(param_7 + 0x10) = uStack_98;
    *(undefined8 *)(param_7 + 8) = local_a0;
    *(undefined8 *)(param_7 + 0x20) = uStack_88;
    *(undefined8 *)(param_7 + 0x18) = uStack_90;
    *(undefined8 *)(param_7 + 0x30) = uStack_78;
    *(undefined8 *)(param_7 + 0x28) = local_80;
    *(undefined8 *)(param_7 + 0x40) = uStack_68;
    *(undefined8 *)(param_7 + 0x38) = uStack_70;
    *(undefined8 *)(param_7 + 0x94) = local_e4;
    *(undefined4 *)(param_7 + 0x9c) = local_dc;
    *(undefined4 *)(param_7 + 0xa8) = local_d0;
    *(undefined8 *)(param_7 + 0xa0) = local_d8;
    *(undefined8 *)(param_7 + 0xac) = local_cc;
    *(undefined4 *)(param_7 + 0xb4) = local_c4;
    if (param_11) {
      Bt2ScenegraphPhysicsContext::overlapPointCloudShapes
                (param_6,(Matrix4x4 *)&local_a0,local_b0[0],local_c0[0],
                 (IPhysicsEntityReport *)param_7,param_8,param_9,param_10,0,(TransformGroup **)0x0,2
                );
    }
    else {
      (**(code **)(*(long *)param_7 + 0x10))(param_7);
      Bt2ScenegraphPhysicsContext::overlapPointCloudShapes
                (param_6,(Matrix4x4 *)&local_a0,local_b0[0],local_c0[0],
                 (IPhysicsEntityReport *)param_7,param_8,param_9,param_10,0,(TransformGroup **)0x0,0
                );
      (**(code **)(*(long *)param_7 + 0x18))(param_7);
    }
    if (local_b0[0] != (Vector3 *)0x0) {
      operator_delete__(local_b0[0]);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


