// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_check_chunk_length
// Entry Point: 00dbc424
// Size: 208 bytes
// Signature: undefined png_check_chunk_length(void)


void png_check_chunk_length(long param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x468);
  if (0x7ffffffd < uVar5 - 1) {
    uVar5 = 0x7fffffff;
  }
  uVar4 = uVar5;
  if (*(int *)(param_1 + 0x250) == 0x49444154) {
    lVar1 = 1;
    if (8 < *(byte *)(param_1 + 0x2a0)) {
      lVar1 = 2;
    }
    lVar6 = 0;
    if (*(char *)(param_1 + 0x29c) != '\0') {
      lVar6 = 6;
    }
    lVar6 = lVar6 + (ulong)*(byte *)(param_1 + 0x2a3) * (ulong)*(uint *)(param_1 + 0x230) * lVar1;
    uVar4 = lVar6 + 1;
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = 0xffffffff / uVar4;
    }
    uVar2 = 0x7fffffff;
    if (*(uint *)(param_1 + 0x234) <= uVar3) {
      uVar2 = uVar4 * *(uint *)(param_1 + 0x234);
    }
    uVar3 = 0x7f36;
    if (uVar4 < 0x7f36) {
      uVar3 = lVar6 + 1;
    }
    uVar4 = 0;
    if (uVar3 != 0) {
      uVar4 = uVar2 / uVar3;
    }
    uVar4 = uVar4 * 5 + uVar2 + 0xb;
    if (0x7ffffffe < uVar4) {
      uVar4 = 0x7fffffff;
    }
    if (uVar4 <= uVar5) {
      uVar4 = uVar5;
    }
  }
  if (uVar4 < (param_2 & 0xffffffff)) {
                    /* WARNING: Subroutine does not return */
    png_chunk_error(param_1,"chunk data is too large");
  }
  return;
}


