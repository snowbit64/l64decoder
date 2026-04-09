// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_start_row
// Entry Point: 00dc109c
// Size: 832 bytes
// Signature: undefined png_read_start_row(void)


void png_read_start_row(long param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  bool bVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  
  png_init_read_transformations();
  if (*(char *)(param_1 + 0x29c) == '\0') {
    iVar7 = *(int *)(param_1 + 0x230);
    uVar3 = *(uint *)(param_1 + 0x16c);
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x234);
    *(int *)(param_1 + 0x248) = iVar7;
    bVar5 = *(byte *)(param_1 + 0x2a2);
  }
  else {
    bVar5 = (&DAT_00549df5)[*(byte *)(param_1 + 0x29d)];
    iVar7 = *(int *)(param_1 + 0x230);
    uVar3 = *(uint *)(param_1 + 0x16c);
    uVar10 = 0;
    if (bVar5 != 0) {
      uVar10 = (iVar7 + (uint)bVar5 + ~(uint)(byte)(&DAT_00549dee)[*(byte *)(param_1 + 0x29d)]) /
               (uint)bVar5;
    }
    uVar11 = *(uint *)(param_1 + 0x234) + 7 >> 3;
    if ((uVar3 & 2) != 0) {
      uVar11 = *(uint *)(param_1 + 0x234);
    }
    *(uint *)(param_1 + 0x238) = uVar11;
    *(uint *)(param_1 + 0x248) = uVar10;
    bVar5 = *(byte *)(param_1 + 0x2a2);
  }
  uVar10 = (uint)bVar5;
  if (((uVar3 >> 2 & 1) != 0) && (uVar10 = 8, 7 < *(byte *)(param_1 + 0x2a0))) {
    uVar10 = (uint)bVar5;
  }
  if ((uVar3 >> 0xc & 1) == 0) {
    if ((uVar3 >> 9 & 1) != 0) {
      *(uint *)(param_1 + 0x16c) = uVar3 & 0xfffffdff;
    }
  }
  else {
    cVar4 = *(char *)(param_1 + 0x29f);
    if (cVar4 == '\0') {
      if (uVar10 < 9) {
        uVar10 = 8;
      }
      uVar10 = uVar10 << (*(short *)(param_1 + 0x298) != 0);
    }
    else if (cVar4 == '\x02') {
      if (*(short *)(param_1 + 0x298) != 0) {
        uVar10 = uVar10 * 0x2aaac >> 0x11;
      }
    }
    else if ((cVar4 == '\x03') && (uVar10 = 0x18, *(short *)(param_1 + 0x298) != 0)) {
      uVar10 = 0x20;
    }
    if ((uVar3 >> 9 & 1) != 0) {
      uVar10 = uVar10 << (*(byte *)(param_1 + 0x2a0) < 0x10);
    }
  }
  uVar3 = *(uint *)(param_1 + 0x16c);
  if ((uVar3 >> 0xf & 1) != 0) {
    if (*(byte *)(param_1 + 0x29f) - 2 < 2) {
      bVar6 = uVar10 < 0x21;
      uVar10 = 0x40;
      if (bVar6) {
        uVar10 = 0x20;
      }
    }
    else if ((*(byte *)(param_1 + 0x29f) == 0) && (bVar6 = 8 < uVar10, uVar10 = 0x10, bVar6)) {
      uVar10 = 0x20;
    }
  }
  if ((uVar3 >> 0xe & 1) != 0) {
    if (((((uint)(*(short *)(param_1 + 0x298) != 0) & (uVar3 & 0x1000) >> 0xc) == 0) &&
        ((uVar3 >> 0xf & 1) == 0)) && (cVar4 = *(char *)(param_1 + 0x29f), cVar4 != '\x04')) {
      if (uVar10 < 9) {
        uVar10 = 0x20;
        if (cVar4 != '\x06') {
          uVar10 = 0x18;
        }
      }
      else {
        uVar10 = 0x40;
        if (cVar4 != '\x06') {
          uVar10 = 0x30;
        }
      }
    }
    else {
      bVar6 = 0x10 < uVar10;
      uVar10 = 0x20;
      if (bVar6) {
        uVar10 = 0x40;
      }
    }
  }
  uVar11 = uVar10;
  if (((uVar3 >> 0x14 & 1) != 0) &&
     (uVar11 = (uint)*(byte *)(param_1 + 0x161) * (uint)*(byte *)(param_1 + 0x160), uVar11 <= uVar10
     )) {
    uVar11 = uVar10;
  }
  uVar3 = iVar7 + 7U & 0xfffffff8;
  *(char *)(param_1 + 0x2a6) = (char)uVar11;
  *(undefined *)(param_1 + 0x2a7) = 0;
  uVar2 = (ulong)uVar3 * (ulong)(uVar11 >> 3);
  if (uVar11 < 8) {
    uVar2 = (ulong)uVar3 * (ulong)uVar11 >> 3;
  }
  uVar2 = uVar2 + ((uVar11 + 7 >> 3) + 0x31);
  if (*(ulong *)(param_1 + 0x490) < uVar2) {
    png_free(param_1,*(undefined8 *)(param_1 + 0x438));
    png_free(param_1,*(undefined8 *)(param_1 + 0x4b0));
    if (*(char *)(param_1 + 0x29c) == '\0') {
      uVar8 = png_malloc(param_1,uVar2);
    }
    else {
      uVar8 = png_calloc(param_1,uVar2);
    }
    *(undefined8 *)(param_1 + 0x438) = uVar8;
    lVar9 = png_malloc(param_1,uVar2);
    *(long *)(param_1 + 0x4b0) = lVar9;
    *(ulong *)(param_1 + 0x490) = uVar2;
    lVar1 = *(long *)(param_1 + 0x438) + 0x20;
    *(ulong *)(param_1 + 600) = ((ulong)~(uint)(lVar9 + 0x20) | 0xfffffffffffffff0) + lVar9 + 0x20;
    *(ulong *)(param_1 + 0x260) = ((ulong)~(uint)lVar1 | 0xfffffffffffffff0) + lVar1;
  }
  if (*(long *)(param_1 + 0x240) != -1) {
    memset(*(void **)(param_1 + 600),0,*(long *)(param_1 + 0x240) + 1);
    if (*(long *)(param_1 + 0x498) != 0) {
      *(undefined8 *)(param_1 + 0x498) = 0;
      *(undefined8 *)(param_1 + 0x4a0) = 0;
      png_free(param_1);
    }
    iVar7 = FUN_00dbd6ac(param_1,0x49444154);
    if (iVar7 == 0) {
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 0x40;
      return;
    }
                    /* WARNING: Subroutine does not return */
    png_error(param_1,*(undefined8 *)(param_1 + 0x1a8));
  }
                    /* WARNING: Subroutine does not return */
  png_error(param_1,"Row has too many bytes to allocate in memory");
}


