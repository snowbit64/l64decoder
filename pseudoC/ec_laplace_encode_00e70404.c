// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_laplace_encode
// Entry Point: 00e70404
// Size: 236 bytes
// Signature: undefined ec_laplace_encode(void)


void ec_laplace_encode(undefined8 param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = *param_2;
  if (uVar3 != 0) {
    uVar7 = (0x4000 - param_4) * (0x7fe0 - param_3);
    uVar1 = -uVar3;
    if (-1 < (int)uVar3) {
      uVar1 = uVar3;
    }
    iVar5 = 1;
    uVar6 = uVar7 >> 0xf;
    if ((0x7fff < uVar7) && (1 < (int)uVar1)) {
      iVar5 = 1;
      do {
        iVar5 = iVar5 + 1;
        uVar7 = uVar6 * 2 * param_4;
        param_3 = param_3 + uVar6 * 2 + 2;
        uVar6 = uVar7 >> 0xf;
        if (uVar7 < 0x8000) break;
      } while (iVar5 < (int)uVar1);
    }
    if (uVar7 >> 0xf != 0) {
      iVar5 = 0;
      if (-1 < (int)uVar3) {
        iVar5 = uVar6 + 1;
      }
      ec_encode_bin(param_1,iVar5 + param_3,uVar6 + 1 + iVar5 + param_3,0xf);
      return;
    }
    uVar7 = (int)uVar3 >> 0x1f;
    iVar4 = ((int)((uVar3 >> 0x1f | 0x8000) - param_3) >> 1) + -1;
    iVar2 = uVar1 - iVar5;
    if (iVar4 <= (int)(uVar1 - iVar5)) {
      iVar2 = iVar4;
    }
    uVar3 = param_3 + uVar7 + iVar2 * 2 + 1;
    param_3 = (uint)(uVar3 != 0x8000);
    *param_2 = iVar5 + uVar7 + iVar2 ^ uVar7;
  }
  ec_encode_bin(param_1,uVar3,param_3 + uVar3,0xf);
  return;
}


