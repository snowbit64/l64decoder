// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: errorcodef
// Entry Point: 00b2ad24
// Size: 304 bytes
// Signature: undefined __thiscall errorcodef(Logger * this, int param_1, char * param_2, __va_list param_3)


/* Logger::errorcodef(int, char const*, std::__va_list) */

Logger * __thiscall Logger::errorcodef(Logger *this,int param_1,char *param_2,__va_list param_3)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  long lVar5;
  undefined8 *puVar6;
  char *pcVar7;
  ulong uVar8;
  long **pplVar9;
  undefined8 local_4070;
  undefined8 uStack_4068;
  undefined8 uStack_4060;
  undefined8 uStack_4058;
  char acStack_4049 [16385];
  long local_48;
  
  puVar6 = (undefined8 *)(ulong)param_3;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_4068 = puVar6[1];
  local_4070 = *puVar6;
  uStack_4058 = puVar6[3];
  uStack_4060 = puVar6[2];
  uVar3 = vsnprintf(acStack_4049 + 1,0x3fff,param_2,&local_4070);
  if (0x3ffe < uVar3) {
    uVar3 = 0x3fff;
  }
  pcVar1 = acStack_4049 + (ulong)uVar3 + 1;
  *pcVar1 = '\0';
  if ((uVar3 == 0) || (pcVar7 = pcVar1, acStack_4049[uVar3] != '\n')) {
    pcVar7 = acStack_4049 + (ulong)uVar3 + 2;
    *pcVar1 = ' ';
  }
  lVar5 = DebugUtil::translateSystemErrorCode(param_1);
  if (lVar5 == 0) {
    FUN_00b2ae54(pcVar7,0xffffffffffffffff,"Error Code %d (%8.8X)\n",param_1,param_1);
  }
  else {
    FUN_00b2ae54(pcVar7,0xffffffffffffffff,"Error Code %s (%d / %8.8X)\n",lVar5,param_1,param_1);
  }
  uVar4 = __strlen_chk(acStack_4049 + 1,0x4000);
  uVar8 = (ulong)*(uint *)this;
  if (*(uint *)this != 0) {
    pplVar9 = (long **)(this + 8);
    do {
      (**(code **)(**pplVar9 + 0x20))(*pplVar9,acStack_4049 + 1,uVar4);
      uVar8 = uVar8 - 1;
      pplVar9 = pplVar9 + 1;
    } while (uVar8 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


