// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: check_control_input
// Entry Point: 00e85130
// Size: 488 bytes
// Signature: undefined check_control_input(void)


undefined4 check_control_input(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  
  iVar1 = param_1[2];
  if (iVar1 < 24000) {
    if (((iVar1 != 8000) && (iVar1 != 12000)) && (iVar1 != 16000)) {
      return 0xffffff9a;
    }
  }
  else if (iVar1 < 0xac44) {
    if ((iVar1 != 24000) && (iVar1 != 32000)) {
      return 0xffffff9a;
    }
  }
  else if ((iVar1 != 48000) && (iVar1 != 0xac44)) {
    return 0xffffff9a;
  }
  uVar2 = param_1[5];
  if (((((uVar2 != 8000) && (uVar2 != 16000)) && (uVar2 != 12000)) ||
      (((uVar3 = param_1[3], uVar3 != 8000 && (uVar3 != 16000)) && (uVar3 != 12000)))) ||
     (((uVar4 = param_1[4], uVar4 != 8000 && (uVar4 != 16000)) && (uVar4 != 12000)))) {
    return 0xffffff9a;
  }
  uVar5 = 0xffffff9a;
  if (((uVar4 <= uVar2) && (uVar2 <= uVar3)) && (uVar4 <= uVar3)) {
    uVar5 = 0xffffff99;
    if (((uint)param_1[6] < 0x3d) &&
       ((1L << ((ulong)(uint)param_1[6] & 0x3f) & 0x1000010000100400U) != 0)) {
      if (100 < (uint)param_1[8]) {
        return 0xffffff97;
      }
      if (1 < (uint)param_1[0xc]) {
        return 0xffffff94;
      }
      if (1 < (uint)param_1[0xd]) {
        return 0xffffff93;
      }
      if (1 < (uint)param_1[10]) {
        return 0xffffff95;
      }
      if (*param_1 - 3U < 0xfffffffe) {
        return 0xffffff91;
      }
      uVar5 = 0xffffff91;
      if ((0xfffffffd < param_1[1] - 3U) && (param_1[1] <= *param_1)) {
        uVar5 = 0xffffff96;
        if ((uint)param_1[9] < 0xb) {
          uVar5 = 0;
        }
        return uVar5;
      }
    }
  }
  return uVar5;
}


