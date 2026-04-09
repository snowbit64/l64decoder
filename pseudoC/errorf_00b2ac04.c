// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: errorf
// Entry Point: 00b2ac04
// Size: 188 bytes
// Signature: undefined __thiscall errorf(Logger * this, char * param_1, __va_list param_2)


/* Logger::errorf(char const*, std::__va_list) */

Logger * __thiscall Logger::errorf(Logger *this,char *param_1,__va_list param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long **pplVar6;
  undefined8 local_4070;
  undefined8 uStack_4068;
  undefined8 uStack_4060;
  undefined8 uStack_4058;
  char acStack_4048 [16384];
  long local_48;
  
  puVar4 = (undefined8 *)(ulong)param_2;
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uStack_4068 = puVar4[1];
  local_4070 = *puVar4;
  uStack_4058 = puVar4[3];
  uStack_4060 = puVar4[2];
  uVar3 = vsnprintf(acStack_4048,0x3fff,param_1,&local_4070);
  uVar1 = *(uint *)this;
  uVar5 = (ulong)uVar1;
  if (0x3ffe < uVar3) {
    uVar3 = 0x3fff;
  }
  acStack_4048[uVar3] = '\0';
  if (uVar1 != 0) {
    pplVar6 = (long **)(this + 8);
    do {
      (**(code **)(**pplVar6 + 0x20))(*pplVar6,acStack_4048,uVar3);
      uVar5 = uVar5 - 1;
      pplVar6 = pplVar6 + 1;
    } while (uVar5 != 0);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


