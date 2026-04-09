// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getAvgLoad
// Entry Point: 00c5c470
// Size: 196 bytes
// Signature: undefined getAvgLoad(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* EnvUtil::getAvgLoad() */

float EnvUtil::getAvgLoad(void)

{
  long lVar1;
  int __fd;
  uint uVar2;
  ulong uVar3;
  ssize_t sVar4;
  undefined *puVar5;
  double dVar6;
  float fVar7;
  char acStack_148 [256];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  uVar3 = __open_2("/proc/loadavg",0);
  __fd = (int)uVar3;
  if (__fd == -1) {
    fVar7 = 0.0;
  }
  else {
    sVar4 = ::read(__fd,acStack_148,0xff);
    fVar7 = 0.0;
    if (0 < (int)sVar4) {
      acStack_148[(int)sVar4] = '\0';
      puVar5 = (undefined *)__strchr_chk(acStack_148,0x20,0x100);
      if (puVar5 != (undefined *)0x0) {
        *puVar5 = 0;
        dVar6 = atof(acStack_148);
        fVar7 = (float)dVar6;
      }
    }
    uVar2 = close(__fd);
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return fVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}


