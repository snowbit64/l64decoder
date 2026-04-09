// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: toScalar
// Entry Point: 00fa2bf0
// Size: 136 bytes
// Signature: undefined toScalar(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* btConvexHullInternal::Int128::toScalar() const */

void btConvexHullInternal::Int128::toScalar(void)

{
  long lVar1;
  ulong *in_x0;
  long lVar2;
  float fVar3;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  if ((long)in_x0[1] < 0) {
    fVar3 = (float)toScalar();
    fVar3 = -fVar3;
  }
  else {
    fVar3 = (float)NEON_fmadd((float)(unkuint9)in_x0[1],0x5f800000,(float)(unkuint9)*in_x0);
  }
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(fVar3);
}


