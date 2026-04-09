// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_write_finish_row
// Entry Point: 00dcb2ac
// Size: 1008 bytes
// Signature: undefined png_write_finish_row(void)


void png_write_finish_row(long param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  ulong uVar10;
  
  uVar1 = *(int *)(param_1 + 0x24c) + 1;
  *(uint *)(param_1 + 0x24c) = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x238)) {
    return;
  }
  if (*(char *)(param_1 + 0x29c) != '\0') {
    *(undefined4 *)(param_1 + 0x24c) = 0;
    if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) == 0) {
      bVar4 = *(byte *)(param_1 + 0x29d);
      bVar9 = bVar4 + 1;
      if ((byte)(bVar4 + 1) < 7) {
        bVar5 = (&DAT_0054a189)[bVar9];
        uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 + ~(uint)(byte)(&DAT_0054a182)[bVar9];
        bVar6 = (&DAT_0054a17b)[bVar9];
        uVar7 = 0;
        if (bVar5 != 0) {
          uVar7 = uVar1 / bVar5;
        }
        uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 + ~(uint)(byte)(&DAT_0054a174)[bVar9];
        uVar8 = 0;
        if (bVar6 != 0) {
          uVar8 = uVar2 / bVar6;
        }
        *(uint *)(param_1 + 0x23c) = uVar7;
        *(uint *)(param_1 + 0x238) = uVar8;
        if (((uVar1 < bVar5) || (uVar2 < bVar6)) && (bVar9 = bVar4 + 2, (byte)(bVar4 + 2) < 7)) {
          bVar5 = (&DAT_0054a189)[bVar9];
          uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 + ~(uint)(byte)(&DAT_0054a182)[bVar9];
          bVar6 = (&DAT_0054a17b)[bVar9];
          uVar7 = 0;
          if (bVar5 != 0) {
            uVar7 = uVar1 / bVar5;
          }
          uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 + ~(uint)(byte)(&DAT_0054a174)[bVar9];
          uVar8 = 0;
          if (bVar6 != 0) {
            uVar8 = uVar2 / bVar6;
          }
          *(uint *)(param_1 + 0x23c) = uVar7;
          *(uint *)(param_1 + 0x238) = uVar8;
          if (((uVar1 < bVar5) || (uVar2 < bVar6)) && (bVar9 = bVar4 + 3, (byte)(bVar4 + 3) < 7)) {
            bVar5 = (&DAT_0054a189)[bVar9];
            uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 + ~(uint)(byte)(&DAT_0054a182)[bVar9];
            bVar6 = (&DAT_0054a17b)[bVar9];
            uVar7 = 0;
            if (bVar5 != 0) {
              uVar7 = uVar1 / bVar5;
            }
            uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 + ~(uint)(byte)(&DAT_0054a174)[bVar9];
            uVar8 = 0;
            if (bVar6 != 0) {
              uVar8 = uVar2 / bVar6;
            }
            *(uint *)(param_1 + 0x23c) = uVar7;
            *(uint *)(param_1 + 0x238) = uVar8;
            if (((uVar1 < bVar5) || (uVar2 < bVar6)) && (bVar9 = bVar4 + 4, (byte)(bVar4 + 4) < 7))
            {
              bVar5 = (&DAT_0054a189)[bVar9];
              uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 + ~(uint)(byte)(&DAT_0054a182)[bVar9];
              bVar6 = (&DAT_0054a17b)[bVar9];
              uVar7 = 0;
              if (bVar5 != 0) {
                uVar7 = uVar1 / bVar5;
              }
              uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 + ~(uint)(byte)(&DAT_0054a174)[bVar9];
              uVar8 = 0;
              if (bVar6 != 0) {
                uVar8 = uVar2 / bVar6;
              }
              *(uint *)(param_1 + 0x23c) = uVar7;
              *(uint *)(param_1 + 0x238) = uVar8;
              if (((uVar1 < bVar5) || (uVar2 < bVar6)) && (bVar9 = bVar4 + 5, (byte)(bVar4 + 5) < 7)
                 ) {
                bVar5 = (&DAT_0054a189)[bVar9];
                uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 +
                        ~(uint)(byte)(&DAT_0054a182)[bVar9];
                bVar6 = (&DAT_0054a17b)[bVar9];
                uVar7 = 0;
                if (bVar5 != 0) {
                  uVar7 = uVar1 / bVar5;
                }
                uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 +
                        ~(uint)(byte)(&DAT_0054a174)[bVar9];
                uVar8 = 0;
                if (bVar6 != 0) {
                  uVar8 = uVar2 / bVar6;
                }
                *(uint *)(param_1 + 0x23c) = uVar7;
                *(uint *)(param_1 + 0x238) = uVar8;
                if (((uVar1 < bVar5) || (uVar2 < bVar6)) &&
                   (bVar9 = bVar4 + 6, (byte)(bVar4 + 6) < 7)) {
                  bVar5 = (&DAT_0054a189)[bVar9];
                  uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 +
                          ~(uint)(byte)(&DAT_0054a182)[bVar9];
                  bVar6 = (&DAT_0054a17b)[bVar9];
                  uVar7 = 0;
                  if (bVar5 != 0) {
                    uVar7 = uVar1 / bVar5;
                  }
                  uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 +
                          ~(uint)(byte)(&DAT_0054a174)[bVar9];
                  uVar8 = 0;
                  if (bVar6 != 0) {
                    uVar8 = uVar2 / bVar6;
                  }
                  *(uint *)(param_1 + 0x23c) = uVar7;
                  *(uint *)(param_1 + 0x238) = uVar8;
                  if (((uVar1 < bVar5) || (uVar2 < bVar6)) && (bVar9 = bVar4 + 7, 0xf8 < bVar4)) {
                    bVar5 = (&DAT_0054a189)[bVar9];
                    uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar5 +
                            ~(uint)(byte)(&DAT_0054a182)[bVar9];
                    bVar6 = (&DAT_0054a17b)[bVar9];
                    uVar7 = 0;
                    if (bVar5 != 0) {
                      uVar7 = uVar1 / bVar5;
                    }
                    uVar2 = *(int *)(param_1 + 0x234) + (uint)bVar6 +
                            ~(uint)(byte)(&DAT_0054a174)[bVar9];
                    uVar8 = 0;
                    if (bVar6 != 0) {
                      uVar8 = uVar2 / bVar6;
                    }
                    *(uint *)(param_1 + 0x23c) = uVar7;
                    *(uint *)(param_1 + 0x238) = uVar8;
                    if (((uVar1 < bVar5) || (uVar2 < bVar6)) &&
                       (bVar9 = bVar4 + 8, (byte)(bVar4 + 8) < 7)) {
                      bVar4 = (&DAT_0054a189)[bVar9];
                      bVar5 = (&DAT_0054a17b)[bVar9];
                      uVar1 = 0;
                      if (bVar4 != 0) {
                        uVar1 = (*(int *)(param_1 + 0x230) + (uint)bVar4 +
                                ~(uint)(byte)(&DAT_0054a182)[bVar9]) / (uint)bVar4;
                      }
                      uVar7 = 0;
                      if (bVar5 != 0) {
                        uVar7 = (*(int *)(param_1 + 0x234) + (uint)bVar5 +
                                ~(uint)(byte)(&DAT_0054a174)[bVar9]) / (uint)bVar5;
                      }
                      *(uint *)(param_1 + 0x23c) = uVar1;
                      *(uint *)(param_1 + 0x238) = uVar7;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      bVar9 = *(char *)(param_1 + 0x29d) + 1;
    }
    *(byte *)(param_1 + 0x29d) = bVar9;
    if (bVar9 < 7) {
      if (*(void **)(param_1 + 600) == (void *)0x0) {
        return;
      }
      uVar10 = (ulong)*(byte *)(param_1 + 0x2a1) * (ulong)*(byte *)(param_1 + 0x2a4);
      uVar3 = *(uint *)(param_1 + 0x230) * uVar10 + 7 >> 3;
      if (7 < (uint)uVar10) {
        uVar3 = (ulong)*(uint *)(param_1 + 0x230) * (uVar10 >> 3);
      }
      memset(*(void **)(param_1 + 600),0,uVar3 + 1);
      return;
    }
  }
  png_compress_IDAT(param_1,0,0,4);
  return;
}


