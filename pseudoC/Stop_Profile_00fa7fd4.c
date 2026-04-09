// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Stop_Profile
// Entry Point: 00fa7fd4
// Size: 216 bytes
// Signature: undefined Stop_Profile(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CProfileManager::Stop_Profile() */

void CProfileManager::Stop_Profile(void)

{
  int *piVar1;
  long lVar2;
  undefined *puVar3;
  int iVar4;
  undefined4 uVar5;
  timeval local_48;
  long local_38;
  
  puVar3 = CurrentNode;
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  piVar1 = (int *)(CurrentNode + 8);
  iVar4 = *(int *)(CurrentNode + 0x18) + -1;
  *(int *)(CurrentNode + 0x18) = iVar4;
  if (iVar4 == 0 && *piVar1 != 0) {
    gettimeofday(&local_48,(__timezone_ptr_t)0x0);
    iVar4 = *(int *)(puVar3 + 0x18);
    uVar5 = NEON_fmadd((float)(unkuint9)
                              (ulong)((local_48.tv_usec +
                                      (local_48.tv_sec - *DAT_02125d68) * 1000000) -
                                     (DAT_02125d68[1] + *(long *)(puVar3 + 0x10))),0x3a83126f,
                       *(undefined4 *)(puVar3 + 0xc));
    *(undefined4 *)(puVar3 + 0xc) = uVar5;
  }
  if (iVar4 == 0) {
    CurrentNode = *(undefined **)(CurrentNode + 0x20);
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


