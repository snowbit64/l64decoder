// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: recalcLocalAabb
// Entry Point: 00f61b88
// Size: 320 bytes
// Signature: undefined recalcLocalAabb(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btConvexInternalAabbCachingShape::recalcLocalAabb() */

void btConvexInternalAabbCachingShape::recalcLocalAabb(void)

{
  long lVar1;
  int iVar2;
  long *in_x0;
  long lVar3;
  float fVar4;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  *(undefined *)((long)in_x0 + 100) = 1;
  if (((DAT_02125708 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_02125708), iVar2 != 0)) {
    DAT_021256a4 = 0x3f800000;
    DAT_021256b8 = 0x3f800000;
    DAT_021256b0 = 0;
    DAT_021256cc = 0x3f800000;
    DAT_021256d4 = 0xbf800000;
    DAT_021256e8 = 0xbf800000;
    DAT_021256a8 = 0;
    DAT_021256bc = 0;
    DAT_021256c4 = 0;
    DAT_021256e0 = 0;
    DAT_021256d8 = 0;
    DAT_021256ec = 0;
    DAT_021256f4 = 0;
    DAT_021256fc = 0xbf800000;
    __cxa_guard_release(&DAT_02125708);
  }
  (**(code **)(*in_x0 + 0x98))();
  fVar4 = *(float *)((long)in_x0 + 0x3c);
  *(float *)((long)in_x0 + 0x54) = fVar4 + 0.0;
  *(float *)(in_x0 + 0xb) = fVar4 + 0.0;
  *(float *)((long)in_x0 + 0x44) = 0.0 - fVar4;
  *(float *)(in_x0 + 9) = 0.0 - fVar4;
  *(float *)((long)in_x0 + 0x5c) = fVar4 + 0.0;
  *(float *)((long)in_x0 + 0x4c) = 0.0 - fVar4;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


