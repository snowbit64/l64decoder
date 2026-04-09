// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: parseIndexPath
// Entry Point: 00a5c538
// Size: 172 bytes
// Signature: undefined __cdecl parseIndexPath(TransformGroup * param_1, char * param_2)


/* ScenegraphUtil::parseIndexPath(TransformGroup*, char const*) */

TransformGroup * ScenegraphUtil::parseIndexPath(TransformGroup *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1 != (TransformGroup *)0x0) {
    do {
      if (*param_2 == '\0') break;
      local_3c = 0;
      StringUtil::strtouint(param_2,&local_3c);
      do {
        cVar1 = *param_2;
        if (cVar1 == '\0') break;
        param_2 = param_2 + 1;
      } while (cVar1 != '|');
      if ((uint)((ulong)(*(long *)(param_1 + 0x30) - *(long *)(param_1 + 0x28)) >> 3) <= local_3c) {
        param_1 = (TransformGroup *)0x0;
        break;
      }
      param_1 = *(TransformGroup **)(*(long *)(param_1 + 0x28) + (ulong)local_3c * 8);
    } while (param_1 != (TransformGroup *)0x0);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}


