// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserializeObject
// Entry Point: 00b28390
// Size: 88 bytes
// Signature: undefined __cdecl deserializeObject(char * param_1, Object * param_2, ParamSet * param_3)


/* JSONUtil::deserializeObject(char const*, JSONUtil::Object&, JSONUtil::ParamSet const*) */

uint JSONUtil::deserializeObject(char *param_1,Object *param_2,ParamSet *param_3)

{
  long lVar1;
  uint uVar2;
  char *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  uVar2 = parseObject(param_2,&local_30,param_3);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


