// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: run_analysis
// Entry Point: 00ea1c80
// Size: 296 bytes
// Signature: undefined run_analysis(undefined param_1, undefined param_2, undefined param_3, undefined param_4, undefined param_5, undefined param_6, undefined param_7, undefined param_8, undefined4 param_9, undefined4 param_10, undefined8 param_11, undefined8 param_12)


void run_analysis(long param_1,undefined8 param_2,long param_3,uint param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                 undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (param_3 != 0) {
    iVar5 = *(int *)(param_1 + 0x1d10);
    uVar1 = (param_9 * 0x5f) / 0x32;
    if ((int)(param_4 & 0xfffffffe) <= (int)uVar1) {
      uVar1 = param_4 & 0xfffffffe;
    }
    if (0 < (int)(uVar1 - iVar5)) {
      param_9 = param_9 / 0x32;
      iVar4 = uVar1 - iVar5;
      do {
        iVar3 = iVar4 - param_9;
        iVar2 = param_9;
        if (iVar3 == 0 || iVar4 < param_9) {
          iVar2 = iVar4;
        }
        FUN_00ea1da8(param_1,param_2,param_3,iVar2,iVar5,param_6,param_7,param_8,param_10,param_11);
        iVar5 = iVar5 + param_9;
        iVar4 = iVar3;
      } while (0 < iVar3);
    }
    *(uint *)(param_1 + 0x1d10) = uVar1 - param_5;
  }
  tonality_get_info(param_1,param_12);
  return;
}


