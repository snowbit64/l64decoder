// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: refitTree
// Entry Point: 00f58f54
// Size: 336 bytes
// Signature: undefined __cdecl refitTree(btVector3 * param_1, btVector3 * param_2)


/* btBvhTriangleMeshShape::refitTree(btVector3 const&, btVector3 const&) */

void btBvhTriangleMeshShape::refitTree(btVector3 *param_1,btVector3 *param_2)

{
  long lVar1;
  btVector3 *in_x2;
  float fVar2;
  float fVar3;
  float in_s2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  btOptimizedBvh::refit
            (*(btOptimizedBvh **)(param_1 + 0x48),*(btStridingMeshInterface **)(param_1 + 0x40),
             param_2,in_x2);
  local_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_48 = 0x3f800000;
  fVar2 = (float)(**(code **)(*(long *)param_1 + 0x88))(param_1,&local_48);
  local_48 = 0xbf800000;
  *(float *)(param_1 + 0x30) = *(float *)(param_1 + 0x1c) + fVar2;
  fVar2 = (float)(**(code **)(*(long *)param_1 + 0x88))(param_1,&local_48);
  fVar3 = *(float *)(param_1 + 0x1c);
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  uStack_44 = 0x3f800000;
  *(float *)(param_1 + 0x20) = fVar2 - fVar3;
  (**(code **)(*(long *)param_1 + 0x88))(param_1,&local_48);
  uStack_44 = 0xbf800000;
  *(float *)(param_1 + 0x34) = *(float *)(param_1 + 0x1c) + fVar3;
  (**(code **)(*(long *)param_1 + 0x88))(param_1,&local_48);
  local_48 = 0;
  uStack_44 = 0;
  local_3c = 0;
  uStack_40 = 0x3f800000;
  *(float *)(param_1 + 0x24) = fVar3 - *(float *)(param_1 + 0x1c);
  (**(code **)(*(long *)param_1 + 0x88))(param_1,&local_48);
  uStack_40 = 0xbf800000;
  *(float *)(param_1 + 0x38) = *(float *)(param_1 + 0x1c) + in_s2;
  (**(code **)(*(long *)param_1 + 0x88))(param_1,&local_48);
  *(float *)(param_1 + 0x28) = in_s2 - *(float *)(param_1 + 0x1c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


