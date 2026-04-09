// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ec_dec_bit_logp
// Entry Point: 00e64df0
// Size: 272 bytes
// Signature: undefined ec_dec_bit_logp(void)


bool ec_dec_bit_logp(long *param_1,uint param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = *(uint *)((long)param_1 + 0x24);
  uVar4 = *(uint *)(param_1 + 4) >> (ulong)(param_2 & 0x1f);
  uVar2 = uVar3;
  if (uVar4 <= uVar3) {
    *(uint *)((long)param_1 + 0x24) = uVar3 - uVar4;
    uVar2 = uVar3 - uVar4;
  }
  uVar5 = uVar4;
  if (uVar4 <= uVar3) {
    uVar5 = *(uint *)(param_1 + 4) - uVar4;
  }
  *(uint *)(param_1 + 4) = uVar5;
  if (uVar5 < 0x800001) {
    iVar7 = *(int *)(param_1 + 3);
    uVar6 = *(uint *)((long)param_1 + 0x1c);
    uVar8 = *(uint *)((long)param_1 + 0x2c);
    if (uVar6 < *(uint *)(param_1 + 1)) {
      do {
        iVar7 = iVar7 + 8;
        *(int *)(param_1 + 3) = iVar7;
        *(uint *)(param_1 + 4) = uVar5 << 8;
        if (uVar6 < *(uint *)(param_1 + 1)) {
          *(uint *)((long)param_1 + 0x1c) = uVar6 + 1;
          uVar9 = (uint)*(byte *)(*param_1 + (ulong)uVar6);
          uVar6 = uVar6 + 1;
        }
        else {
          uVar9 = 0;
        }
        *(uint *)((long)param_1 + 0x2c) = uVar9;
        uVar2 = ((uVar9 | uVar8 << 8) >> 1 & 0xff | (uVar2 & 0x7fffff) << 8) ^ 0xff;
        *(uint *)((long)param_1 + 0x24) = uVar2;
        bVar1 = uVar5 < 0x8001;
        uVar5 = uVar5 << 8;
        uVar8 = uVar9;
      } while (bVar1);
    }
    else {
      uVar2 = ((uVar8 & 1) << 7 | (uVar2 & 0x7fffff) << 8) ^ 0xff;
      while( true ) {
        bVar1 = 0x8000 < uVar5;
        uVar5 = uVar5 << 8;
        iVar7 = iVar7 + 8;
        if (bVar1) break;
        uVar2 = (uVar2 & 0x7fffff) << 8 | 0xff;
      }
      *(int *)(param_1 + 3) = iVar7;
      *(undefined4 *)((long)param_1 + 0x2c) = 0;
      *(uint *)(param_1 + 4) = uVar5;
      *(uint *)((long)param_1 + 0x24) = uVar2;
    }
  }
  return uVar3 < uVar4;
}


