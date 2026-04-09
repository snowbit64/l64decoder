// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: localGetSupportingVertex
// Entry Point: 00f6b010
// Size: 204 bytes
// Signature: undefined __thiscall localGetSupportingVertex(btTriangleMeshShape * this, btVector3 * param_1)


/* btTriangleMeshShape::localGetSupportingVertex(btVector3 const&) const */

void __thiscall
btTriangleMeshShape::localGetSupportingVertex(btTriangleMeshShape *this,btVector3 *param_1)

{
  long lVar1;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined **local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_80 = 0x3f800000;
  local_3c = *(undefined4 *)param_1;
  local_98 = &PTR__btTriangleCallback_0101b388;
  local_6c = 0x3f800000;
  local_58 = 0x3f800000;
  local_38 = *(undefined8 *)(param_1 + 4);
  local_90 = 0;
  local_88 = 0;
  local_44 = 0xdd5e0b6b00000000;
  local_74 = 0;
  local_7c = 0;
  local_68 = 0;
  uStack_60 = 0;
  local_4c = 0;
  local_54 = 0;
  local_30 = 0;
  uStack_b8 = 0xdd5e0b6b;
  local_c0 = 0xdd5e0b6bdd5e0b6b;
  uStack_a8 = 0x5d5e0b6b;
  uStack_b0 = 0x5d5e0b6b5d5e0b6b;
  (**(code **)(*(long *)this + 0x80))(this,&local_98,&local_c0,&uStack_b0);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_90 & 0xffffffff,local_90._4_4_,(undefined4)local_88,local_88._4_4_);
}


