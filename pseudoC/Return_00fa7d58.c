// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Return
// Entry Point: 00fa7d58
// Size: 192 bytes
// Signature: undefined Return(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CProfileNode::Return() */

void CProfileNode::Return(void)

{
  int iVar1;
  long lVar2;
  long in_x0;
  undefined4 uVar3;
  timeval local_38;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(in_x0 + 0x18) + -1;
  *(int *)(in_x0 + 0x18) = iVar1;
  if (iVar1 == 0 && *(int *)(in_x0 + 8) != 0) {
    gettimeofday(&local_38,(__timezone_ptr_t)0x0);
    iVar1 = *(int *)(in_x0 + 0x18);
    uVar3 = NEON_fmadd((float)(unkuint9)
                              (ulong)((local_38.tv_usec +
                                      (local_38.tv_sec - *DAT_02125d68) * 1000000) -
                                     (DAT_02125d68[1] + *(long *)(in_x0 + 0x10))),0x3a83126f,
                       *(undefined4 *)(in_x0 + 0xc));
    *(undefined4 *)(in_x0 + 0xc) = uVar3;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar1 == 0);
}


