// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_laplace_decode
// Entry Point: 00e704f0
// Size: 236 bytes
// Signature: undefined ec_laplace_decode(void)


int ec_laplace_decode(undefined8 param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  uVar2 = ec_decode_bin(param_1,0xf);
  if (uVar2 < param_2) {
    uVar5 = 0;
    iVar6 = 0;
  }
  else {
    uVar5 = (0x4000 - param_3) * (0x7fe0 - param_2);
    uVar3 = (uVar5 >> 0xf) + 1;
    if (uVar5 < 0x8000) {
      iVar4 = 1;
    }
    else {
      iVar4 = 1;
      uVar5 = param_2;
      do {
        param_2 = uVar3 * 2 + uVar5;
        if (uVar2 < param_2) goto LAB_00e70598;
        iVar4 = iVar4 + 1;
        uVar1 = (uVar3 * 2 + -2) * param_3 >> 0xf;
        uVar3 = uVar1 + 1;
        uVar5 = param_2;
      } while (uVar1 != 0);
    }
    iVar4 = iVar4 + (uVar2 - param_2 >> 1);
    uVar5 = (uVar2 - param_2 & 0xfffffffe) + param_2;
LAB_00e70598:
    param_2 = uVar3;
    uVar3 = uVar5 + param_2;
    if (uVar3 <= uVar2) {
      uVar5 = uVar3;
    }
    iVar6 = -iVar4;
    if (uVar3 <= uVar2) {
      iVar6 = iVar4;
    }
  }
  param_2 = param_2 + uVar5;
  if (0x7fff < param_2) {
    param_2 = 0x8000;
  }
  ec_dec_update(param_1,uVar5,param_2,0x8000);
  return iVar6;
}


