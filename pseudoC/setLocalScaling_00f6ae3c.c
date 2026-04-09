// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLocalScaling
// Entry Point: 00f6ae3c
// Size: 324 bytes
// Signature: undefined __cdecl setLocalScaling(btVector3 * param_1)


/* btTriangleMeshShape::setLocalScaling(btVector3 const&) */

void btTriangleMeshShape::setLocalScaling(btVector3 *param_1)

{
  long lVar1;
  undefined8 *in_x1;
  long lVar2;
  float fVar3;
  undefined8 uVar4;
  float fVar5;
  float in_s2;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x40);
  local_48 = 0x3f800000;
  uVar4 = *in_x1;
  *(undefined8 *)(lVar2 + 0x10) = in_x1[1];
  *(undefined8 *)(lVar2 + 8) = uVar4;
  local_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  fVar3 = (float)(**(code **)(*(long *)param_1 + 0x88))(param_1,&local_48);
  local_48 = 0xbf800000;
  *(float *)(param_1 + 0x30) = fVar3 + *(float *)(param_1 + 0x1c);
  fVar3 = (float)(**(code **)(*(long *)param_1 + 0x88))(param_1,&local_48);
  fVar5 = *(float *)(param_1 + 0x1c);
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  uStack_44 = 0x3f800000;
  *(float *)(param_1 + 0x20) = fVar3 - fVar5;
  (**(code **)(*(long *)param_1 + 0x88))(param_1,&local_48);
  uStack_44 = 0xbf800000;
  *(float *)(param_1 + 0x34) = fVar5 + *(float *)(param_1 + 0x1c);
  (**(code **)(*(long *)param_1 + 0x88))(param_1,&local_48);
  local_48 = 0;
  uStack_44 = 0;
  local_3c = 0;
  uStack_40 = 0x3f800000;
  *(float *)(param_1 + 0x24) = fVar5 - *(float *)(param_1 + 0x1c);
  (**(code **)(*(long *)param_1 + 0x88))(param_1,&local_48);
  uStack_40 = 0xbf800000;
  *(float *)(param_1 + 0x38) = in_s2 + *(float *)(param_1 + 0x1c);
  (**(code **)(*(long *)param_1 + 0x88))(param_1,&local_48);
  *(float *)(param_1 + 0x28) = in_s2 - *(float *)(param_1 + 0x1c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


