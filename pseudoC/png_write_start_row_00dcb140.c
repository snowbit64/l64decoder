// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_start_row
// Entry Point: 00dcb140
// Size: 364 bytes
// Signature: undefined png_write_start_row(void)


void png_write_start_row(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  ulong uVar9;
  
  uVar7 = (ulong)*(byte *)(param_1 + 0x2a1) * (ulong)*(byte *)(param_1 + 0x2a4);
  if ((uint)uVar7 < 8) {
    uVar9 = *(uint *)(param_1 + 0x230) * uVar7 + 7 >> 3;
  }
  else {
    uVar9 = (ulong)*(uint *)(param_1 + 0x230) * (uVar7 >> 3);
  }
  lVar1 = uVar9 + 1;
  *(char *)(param_1 + 0x2a6) = (char)uVar7;
  *(undefined *)(param_1 + 0x2a7) = *(undefined *)(param_1 + 0x2a2);
  puVar5 = (undefined *)png_malloc(param_1,lVar1);
  bVar4 = *(byte *)(param_1 + 0x29e);
  *(undefined **)(param_1 + 0x260) = puVar5;
  iVar8 = *(int *)(param_1 + 0x234);
  *puVar5 = 0;
  uVar3 = bVar4 & 0x1f;
  if (iVar8 != 1) {
    uVar3 = (uint)bVar4;
  }
  uVar2 = uVar3 & 0x2f;
  if (*(int *)(param_1 + 0x230) != 1) {
    uVar2 = uVar3;
  }
  uVar3 = 8;
  if (uVar2 != 0) {
    uVar3 = uVar2;
  }
  *(char *)(param_1 + 0x29e) = (char)uVar3;
  if (((uVar3 & 0xf0) != 0) && (*(long *)(param_1 + 0x268) == 0)) {
    uVar6 = png_malloc(param_1,lVar1);
    *(undefined8 *)(param_1 + 0x268) = uVar6;
    if (1 < (uVar3 >> 5 & 1) + (uVar3 >> 7) + (uVar3 >> 4 & 1) + (uVar3 >> 6 & 1)) {
      uVar6 = png_malloc(param_1,lVar1);
      *(undefined8 *)(param_1 + 0x270) = uVar6;
    }
  }
  if ((uVar3 & 0xe0) != 0) {
    uVar6 = png_calloc(param_1,lVar1);
    *(undefined8 *)(param_1 + 600) = uVar6;
  }
  if (*(char *)(param_1 + 0x29c) == '\0') {
    iVar8 = *(int *)(param_1 + 0x234);
  }
  else {
    iVar8 = *(int *)(param_1 + 0x234);
    if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) == 0) {
      *(uint *)(param_1 + 0x238) = iVar8 + 7U >> 3;
      *(uint *)(param_1 + 0x23c) = *(int *)(param_1 + 0x230) + 7U >> 3;
      return;
    }
  }
  *(int *)(param_1 + 0x238) = iVar8;
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x230);
  return;
}


