// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: inflateInit2_
// Entry Point: 00e2a548
// Size: 280 bytes
// Signature: undefined inflateInit2_(void)


int inflateInit2_(long param_1,undefined4 param_2,char *param_3,int param_4)

{
  int iVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  
  if (param_3 == (char *)0x0) {
    return -6;
  }
  if (param_4 != 0x70) {
    return -6;
  }
  if (*param_3 != '1') {
    return -6;
  }
  if (param_1 != 0) {
    pcVar3 = *(code **)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (pcVar3 == (code *)0x0) {
      pcVar3 = zcalloc;
      *(undefined8 *)(param_1 + 0x50) = 0;
      *(code **)(param_1 + 0x40) = zcalloc;
      lVar4 = *(long *)(param_1 + 0x48);
    }
    else {
      lVar4 = *(long *)(param_1 + 0x48);
    }
    if (lVar4 == 0) {
      *(code **)(param_1 + 0x48) = zcfree;
      plVar2 = (long *)(*pcVar3)(*(undefined8 *)(param_1 + 0x50),1,0x1bf8);
    }
    else {
      plVar2 = (long *)(*pcVar3)(*(undefined8 *)(param_1 + 0x50),1,0x1bf8);
    }
    if (plVar2 == (long *)0x0) {
      return -4;
    }
    *(long **)(param_1 + 0x38) = plVar2;
    *plVar2 = param_1;
    plVar2[9] = 0;
    *(undefined4 *)(plVar2 + 1) = 0x3f34;
    iVar1 = inflateReset2(param_1,param_2);
    if (iVar1 != 0) {
      (**(code **)(param_1 + 0x48))(*(undefined8 *)(param_1 + 0x50),plVar2);
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return iVar1;
  }
  return -2;
}


