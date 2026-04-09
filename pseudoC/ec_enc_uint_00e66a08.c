// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_enc_uint
// Entry Point: 00e66a08
// Size: 268 bytes
// Signature: undefined ec_enc_uint(void)


void ec_enc_uint(long *param_1,uint param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar6 = param_3 - 1;
  if (uVar6 < 0x100) {
    ec_encode(param_1,param_2,param_2 + 1,param_3);
    return;
  }
  uVar3 = 0x18 - (int)LZCOUNT(uVar6);
  uVar4 = param_2 >> (ulong)(uVar3 & 0x1f);
  ec_encode(param_1,uVar4,uVar4 + 1,(uVar6 >> (ulong)(uVar3 & 0x1f)) + 1);
  uVar4 = *(uint *)(param_1 + 2);
  uVar7 = *(uint *)((long)param_1 + 0x14);
  uVar6 = uVar7 + uVar3;
  uVar5 = uVar7;
  if (0x20 < uVar6) {
    do {
      if ((uint)(*(int *)((long)param_1 + 0xc) + *(int *)((long)param_1 + 0x1c)) <
          *(uint *)(param_1 + 1)) {
        iVar2 = *(int *)((long)param_1 + 0xc) + 1;
        uVar6 = 0;
        *(int *)((long)param_1 + 0xc) = iVar2;
        *(char *)(*param_1 + (ulong)(*(uint *)(param_1 + 1) - iVar2)) = (char)uVar4;
      }
      else {
        uVar6 = 0xffffffff;
      }
      uVar7 = uVar5 - 8;
      uVar4 = uVar4 >> 8;
      *(uint *)(param_1 + 6) = *(uint *)(param_1 + 6) | uVar6;
      bVar1 = 0xf < (int)uVar5;
      uVar5 = uVar7;
    } while (bVar1);
    uVar6 = uVar3 + uVar7;
  }
  *(uint *)(param_1 + 2) =
       (param_2 & (-1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU)) << (ulong)(uVar7 & 0x1f) | uVar4;
  *(uint *)((long)param_1 + 0x14) = uVar6;
  *(uint *)(param_1 + 3) = *(int *)(param_1 + 3) + uVar3;
  return;
}


