// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: floatToString
// Entry Point: 00b9e218
// Size: 240 bytes
// Signature: undefined __thiscall floatToString(StringUtil * this, float param_1, char * param_2, uint param_3)


/* StringUtil::floatToString(float, char*, unsigned int) */

StringUtil * __thiscall
StringUtil::floatToString(StringUtil *this,float param_1,char *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  size_t sVar5;
  StringUtil *pSVar6;
  undefined4 in_register_00005004;
  undefined auStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00b9e308(CONCAT44(in_register_00005004,param_1),auStack_48,0x10,param_3,"%%.%uf",
               (ulong)param_2 & 0xffffffff);
  uVar2 = FUN_00b9e308((double)param_1,this,0xffffffffffffffff);
  if (uVar2 < 0x10) {
    iVar3 = strcmp((char *)this,"-0");
    if (iVar3 == 0) {
      *(undefined2 *)this = 0x30;
    }
    pcVar4 = strchr((char *)this,0x2e);
    if (pcVar4 != (char *)0x0) {
      sVar5 = strlen((char *)this);
      for (pSVar6 = this + ((int)sVar5 + -1); *pSVar6 == (StringUtil)0x30; pSVar6 = pSVar6 + -1) {
      }
      if (*pSVar6 != (StringUtil)0x2e) {
        pSVar6 = pSVar6 + 1;
      }
      *pSVar6 = (StringUtil)0x0;
    }
  }
  else {
    this = (StringUtil *)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


