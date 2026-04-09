// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ee3c
// Entry Point: 0079ee3c
// Size: 164 bytes
// Signature: undefined FUN_0079ee3c(void)


void FUN_0079ee3c(long *param_1,uint *param_2)

{
  long *plVar1;
  uint uVar2;
  
  plVar1 = (long *)ReflectionUtil::getEntity(*param_2,4,"link","childNode");
  if ((plVar1 != (long *)0x0) && (plVar1 != param_1)) {
    uVar2 = 0xffffffff;
    switch(param_2[6]) {
    case 1:
    case 2:
      uVar2 = param_2[4];
      break;
    case 4:
      uVar2 = (uint)(float)param_2[4];
      break;
    case 5:
      uVar2 = (uint)*(double *)(param_2 + 4);
    }
    (**(code **)(*param_1 + 0x18))(param_1,plVar1,uVar2);
  }
  return;
}


