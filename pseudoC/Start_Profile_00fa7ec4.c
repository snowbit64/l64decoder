// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Start_Profile
// Entry Point: 00fa7ec4
// Size: 272 bytes
// Signature: undefined __cdecl Start_Profile(char * param_1)


/* CProfileManager::Start_Profile(char const*) */

void CProfileManager::Start_Profile(char *param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  char **ppcVar5;
  timeval local_58;
  long local_48;
  
  puVar3 = CurrentNode;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  ppcVar5 = (char **)CurrentNode;
  if (*(char **)CurrentNode != param_1) {
    for (ppcVar5 = *(char ***)(CurrentNode + 0x28); ppcVar5 != (char **)0x0;
        ppcVar5 = (char **)ppcVar5[6]) {
      if (*ppcVar5 == param_1) goto LAB_00fa7f58;
    }
    ppcVar5 = (char **)operator_new(0x40);
    ppcVar5[1] = (char *)0x0;
    ppcVar5[2] = (char *)0x0;
    *ppcVar5 = param_1;
    *(undefined4 *)(ppcVar5 + 3) = 0;
    ppcVar5[4] = puVar3;
    ppcVar5[5] = (char *)0x0;
    ppcVar5[6] = (char *)0x0;
    ppcVar5[7] = (char *)0x0;
    param_1 = (char *)CProfileNode::Reset();
    ppcVar5[6] = *(char **)(puVar3 + 0x28);
    *(char ***)(puVar3 + 0x28) = ppcVar5;
  }
LAB_00fa7f58:
  CurrentNode = (undefined *)ppcVar5;
  puVar3 = CurrentNode;
  iVar1 = *(int *)(CurrentNode + 0x18);
  *(int *)(CurrentNode + 8) = *(int *)(CurrentNode + 8) + 1;
  *(int *)(puVar3 + 0x18) = iVar1 + 1;
  if (iVar1 == 0) {
    uVar4 = gettimeofday(&local_58,(__timezone_ptr_t)0x0);
    param_1 = (char *)(ulong)uVar4;
    *(__suseconds_t *)(puVar3 + 0x10) =
         (local_58.tv_usec - DAT_02125d68[1]) + (local_58.tv_sec - *DAT_02125d68) * 1000000;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1);
}


