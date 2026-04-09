// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ToUnsigned64
// Entry Point: 00dfa8fc
// Size: 112 bytes
// Signature: undefined __cdecl ToUnsigned64(char * param_1, ulong * param_2)


/* tinyxml2::XMLUtil::ToUnsigned64(char const*, unsigned long*) */

void tinyxml2::XMLUtil::ToUnsigned64(char *param_1,ulong *param_2)

{
  long lVar1;
  int iVar2;
  ulong local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = 0;
  iVar2 = sscanf(param_1,"%llu",&local_30);
  if (iVar2 == 1) {
    *param_2 = local_30;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar2 == 1);
}


