// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Call
// Entry Point: 00fa7cc4
// Size: 148 bytes
// Signature: undefined Call(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CProfileNode::Call() */

void CProfileNode::Call(void)

{
  int iVar1;
  long lVar2;
  long in_x0;
  timeval local_38;
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  iVar1 = *(int *)(in_x0 + 0x18);
  *(int *)(in_x0 + 8) = *(int *)(in_x0 + 8) + 1;
  *(int *)(in_x0 + 0x18) = iVar1 + 1;
  if (iVar1 == 0) {
    gettimeofday(&local_38,(__timezone_ptr_t)0x0);
    *(__suseconds_t *)(in_x0 + 0x10) =
         (local_38.tv_usec - DAT_02125d68[1]) + (local_38.tv_sec - *DAT_02125d68) * 1000000;
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


