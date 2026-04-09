// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: errorMessage
// Entry Point: 00b2acc0
// Size: 100 bytes
// Signature: undefined __thiscall errorMessage(Logger * this, char * param_1, uint param_2)


/* Logger::errorMessage(char const*, unsigned int) */

Logger * __thiscall Logger::errorMessage(Logger *this,char *param_1,uint param_2)

{
  ulong uVar1;
  long **pplVar2;
  
  uVar1 = (ulong)*(uint *)this;
  if (*(uint *)this != 0) {
    pplVar2 = (long **)(this + 8);
    do {
      (**(code **)(**pplVar2 + 0x20))(*pplVar2,param_1,param_2);
      uVar1 = uVar1 - 1;
      pplVar2 = pplVar2 + 1;
    } while (uVar1 != 0);
  }
  return this;
}


