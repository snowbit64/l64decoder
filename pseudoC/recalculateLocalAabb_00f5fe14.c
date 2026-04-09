// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: recalculateLocalAabb
// Entry Point: 00f5fe14
// Size: 296 bytes
// Signature: undefined recalculateLocalAabb(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btCompoundShape::recalculateLocalAabb() */

void btCompoundShape::recalculateLocalAabb(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  long *plVar3;
  long lVar4;
  long lVar5;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *(undefined8 *)(in_x0 + 0x48) = 0x5d5e0b6b;
  *(undefined8 *)(in_x0 + 0x40) = 0x5d5e0b6b5d5e0b6b;
  *(undefined8 *)(in_x0 + 0x58) = 0xdd5e0b6b;
  *(undefined8 *)(in_x0 + 0x50) = 0xdd5e0b6bdd5e0b6b;
  if (0 < *(int *)(in_x0 + 0x24)) {
    lVar4 = 0;
    lVar5 = 0;
    do {
      lVar1 = *(long *)(in_x0 + 0x30) + lVar4;
      plVar3 = *(long **)(lVar1 + 0x40);
      (**(code **)(*plVar3 + 0x10))(plVar3,lVar1,&local_48,&local_58);
      if (local_48 < *(float *)(in_x0 + 0x40)) {
        *(float *)(in_x0 + 0x40) = local_48;
      }
      if (*(float *)(in_x0 + 0x50) < local_58) {
        *(float *)(in_x0 + 0x50) = local_58;
      }
      if (local_44 < *(float *)(in_x0 + 0x44)) {
        *(float *)(in_x0 + 0x44) = local_44;
      }
      if (*(float *)(in_x0 + 0x54) < local_54) {
        *(float *)(in_x0 + 0x54) = local_54;
      }
      if (local_40 < *(float *)(in_x0 + 0x48)) {
        *(float *)(in_x0 + 0x48) = local_40;
      }
      if (*(float *)(in_x0 + 0x58) < local_50) {
        *(float *)(in_x0 + 0x58) = local_50;
      }
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + 0x58;
    } while (lVar5 < *(int *)(in_x0 + 0x24));
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


