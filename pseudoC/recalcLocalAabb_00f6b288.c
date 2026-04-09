// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: recalcLocalAabb
// Entry Point: 00f6b288
// Size: 312 bytes
// Signature: undefined recalcLocalAabb(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btTriangleMeshShape::recalcLocalAabb() */

void btTriangleMeshShape::recalcLocalAabb(void)

{
  long lVar1;
  long *in_x0;
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
  local_3c = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  local_48 = 0x3f800000;
  fVar2 = (float)(**(code **)(*in_x0 + 0x88))(in_x0,&local_48);
  local_48 = 0xbf800000;
  *(float *)(in_x0 + 6) = *(float *)((long)in_x0 + 0x1c) + fVar2;
  fVar2 = (float)(**(code **)(*in_x0 + 0x88))();
  fVar3 = *(float *)((long)in_x0 + 0x1c);
  local_48 = 0;
  uStack_40 = 0;
  local_3c = 0;
  uStack_44 = 0x3f800000;
  *(float *)(in_x0 + 4) = fVar2 - fVar3;
  (**(code **)(*in_x0 + 0x88))();
  uStack_44 = 0xbf800000;
  *(float *)((long)in_x0 + 0x34) = *(float *)((long)in_x0 + 0x1c) + fVar3;
  (**(code **)(*in_x0 + 0x88))();
  local_48 = 0;
  uStack_44 = 0;
  local_3c = 0;
  uStack_40 = 0x3f800000;
  *(float *)((long)in_x0 + 0x24) = fVar3 - *(float *)((long)in_x0 + 0x1c);
  (**(code **)(*in_x0 + 0x88))();
  uStack_40 = 0xbf800000;
  *(float *)(in_x0 + 7) = *(float *)((long)in_x0 + 0x1c) + in_s2;
  (**(code **)(*in_x0 + 0x88))();
  *(float *)(in_x0 + 5) = in_s2 - *(float *)((long)in_x0 + 0x1c);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


