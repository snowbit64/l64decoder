// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pack_block_mode
// Entry Point: 00e5087c
// Size: 516 bytes
// Signature: undefined __cdecl pack_block_mode(astc_block * param_1)


/* pack_block_mode(astc_block*) */

uint pack_block_mode(astc_block *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  iVar3 = *(int *)(param_1 + 0xc);
  uVar4 = *(uint *)param_1;
  iVar6 = -6;
  if (iVar3 < 6) {
    iVar6 = 0;
  }
  uVar1 = iVar3 + iVar6 + 2;
  uVar7 = uVar1;
  if ((int)uVar1 < 0) {
    uVar7 = iVar3 + iVar6 + 3;
  }
  uVar2 = (uint)(5 < iVar3) | (uint)(byte)param_1[8] << 1;
  uVar1 = (uVar1 - (uVar7 & 0x3ffffffe)) * 4 + ((int)uVar7 >> 1);
  if ((uVar4 & 0xfffffffc) == 8) {
    if (*(int *)(param_1 + 4) - 2U < 4) {
      uVar7 = uVar4 * 0x80 - 0x400 | uVar2 << 9 | uVar1 & 3 | (uVar1 >> 2 & 1) << 4 |
              *(int *)(param_1 + 4) * 0x20 - 0x40U | 4;
    }
    else {
      uVar7 = 0;
    }
  }
  else {
    uVar7 = 0;
    if ((uVar4 & 0xfffffffc) == 4) {
      if (*(int *)(param_1 + 4) - 2U < 4) {
        uVar7 = uVar4 * 0x80 - 0x200 | uVar2 << 9 | uVar1 & 3 | (uVar1 >> 2 & 1) << 4 |
                *(int *)(param_1 + 4) * 0x20 - 0x40U;
      }
      else {
        uVar7 = 0;
      }
    }
    if (uVar4 - 2 < 4) {
      uVar5 = *(uint *)(param_1 + 4);
      if ((uVar5 & 0xfffffffc) == 8) {
        uVar7 = uVar4 * 0x20 - 0x40 | uVar2 << 9 | uVar1 & 3 | (uVar1 >> 2 & 1) << 4 |
                uVar5 * 0x80 - 0x400 | 8;
      }
      if ((uVar5 & 0xfffffffe) == 6) {
        uVar7 = uVar4 * 0x20 - 0x40 | uVar2 << 9 | uVar1 & 3 | (uVar1 >> 2 & 1) << 4 |
                uVar5 * 0x80 - 0x300 | 0xc;
      }
    }
  }
  if ((uVar4 & 0xfffffffe) == 2) {
    if (*(int *)(param_1 + 4) - 2U < 4) {
      return uVar4 << 7 | uVar2 << 9 | uVar1 & 3 | (uVar1 >> 2 & 1) << 4 |
             *(int *)(param_1 + 4) * 0x20 - 0x40U | 0xc;
    }
  }
  else if (((uVar2 == 0) && (uVar4 - 6 < 4)) && (*(int *)(param_1 + 4) - 6U < 4)) {
    uVar7 = uVar4 * 0x20 - 0xc0 | uVar1 * 4 | *(int *)(param_1 + 4) * 0x200 - 0xc00U | 0x100;
  }
  return uVar7;
}


