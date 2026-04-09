// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: formatDateString
// Entry Point: 00c5cf18
// Size: 132 bytes
// Signature: undefined __cdecl formatDateString(longlong param_1, char * param_2, char * param_3, uint param_4)


/* EnvUtil::formatDateString(long long, char const*, char*, unsigned int) */

void EnvUtil::formatDateString(longlong param_1,char *param_2,char *param_3,uint param_4)

{
  long lVar1;
  tm *__tp;
  size_t sVar2;
  longlong local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_40 = param_1;
  __tp = localtime(&local_40);
  if (__tp != (tm *)0x0) {
    sVar2 = strftime(param_3,(ulong)param_4,param_2,__tp);
    __tp = (tm *)(ulong)(sVar2 < param_4);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(__tp);
}


