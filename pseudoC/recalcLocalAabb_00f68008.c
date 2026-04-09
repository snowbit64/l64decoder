// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: recalcLocalAabb
// Entry Point: 00f68008
// Size: 320 bytes
// Signature: undefined recalcLocalAabb(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btPolyhedralConvexAabbCachingShape::recalcLocalAabb() */

void btPolyhedralConvexAabbCachingShape::recalcLocalAabb(void)

{
  long lVar1;
  int iVar2;
  long *in_x0;
  long lVar3;
  float fVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined *)(in_x0 + 0xe) = 1;
  if (((DAT_02125770 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02125770), iVar2 != 0)) {
    DAT_02125710 = 0x3f800000;
    DAT_02125724 = 0x3f800000;
    DAT_0212571c = 0;
    DAT_02125738 = 0x3f800000;
    DAT_02125740 = 0xbf800000;
    DAT_02125754 = 0xbf800000;
    DAT_02125714 = 0;
    DAT_02125728 = 0;
    DAT_02125730 = 0;
    DAT_0212574c = 0;
    DAT_02125744 = 0;
    DAT_02125758 = 0;
    DAT_02125760 = 0;
    DAT_02125768 = 0xbf800000;
    __cxa_guard_release(&DAT_02125770);
  }
  (**(code **)(*in_x0 + 0x98))();
  fVar4 = *(float *)((long)in_x0 + 0x3c);
  *(float *)(in_x0 + 0xc) = fVar4 + 0.0;
  *(float *)((long)in_x0 + 100) = fVar4 + 0.0;
  *(float *)(in_x0 + 10) = 0.0 - fVar4;
  *(float *)((long)in_x0 + 0x54) = 0.0 - fVar4;
  *(float *)(in_x0 + 0xd) = fVar4 + 0.0;
  *(float *)(in_x0 + 0xb) = 0.0 - fVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


