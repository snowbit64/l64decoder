// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_read_finish_row
// Entry Point: 00dc0c44
// Size: 1112 bytes
// Signature: undefined png_read_finish_row(void)


void png_read_finish_row(long param_1)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  byte bVar7;
  
  uVar1 = *(int *)(param_1 + 0x24c) + 1;
  *(uint *)(param_1 + 0x24c) = uVar1;
  if (uVar1 < *(uint *)(param_1 + 0x238)) {
    return;
  }
  if (*(char *)(param_1 + 0x29c) != '\0') {
    *(undefined4 *)(param_1 + 0x24c) = 0;
    memset(*(void **)(param_1 + 600),0,*(long *)(param_1 + 0x240) + 1);
    bVar2 = *(byte *)(param_1 + 0x29d);
    bVar7 = bVar2 + 1;
    if (bVar7 < 7) {
      bVar3 = (&DAT_00549df5)[bVar7];
      uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar3 + ~(uint)(byte)(&DAT_00549dee)[bVar7];
      uVar5 = 0;
      if (bVar3 != 0) {
        uVar5 = uVar1 / bVar3;
      }
      *(uint *)(param_1 + 0x248) = uVar5;
      if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0) {
LAB_00dc0d8c:
        *(byte *)(param_1 + 0x29d) = bVar7;
        return;
      }
      bVar4 = (&DAT_00549de7)[bVar7];
      uVar5 = *(int *)(param_1 + 0x234) + (uint)bVar4 + ~(uint)(byte)(&DAT_00549de0)[bVar7];
      uVar6 = 0;
      if (bVar4 != 0) {
        uVar6 = uVar5 / bVar4;
      }
      *(uint *)(param_1 + 0x238) = uVar6;
      if ((bVar4 <= uVar5) && (bVar3 <= uVar1)) goto LAB_00dc0d8c;
      bVar7 = bVar2 + 2;
      if (bVar7 < 7) {
        bVar3 = (&DAT_00549df5)[bVar7];
        uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar3 + ~(uint)(byte)(&DAT_00549dee)[bVar7];
        uVar5 = 0;
        if (bVar3 != 0) {
          uVar5 = uVar1 / bVar3;
        }
        *(uint *)(param_1 + 0x248) = uVar5;
        if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0) goto LAB_00dc0d8c;
        bVar4 = (&DAT_00549de7)[bVar7];
        uVar5 = *(int *)(param_1 + 0x234) + (uint)bVar4 + ~(uint)(byte)(&DAT_00549de0)[bVar7];
        uVar6 = 0;
        if (bVar4 != 0) {
          uVar6 = uVar5 / bVar4;
        }
        *(uint *)(param_1 + 0x238) = uVar6;
        if ((bVar4 <= uVar5) && (bVar3 <= uVar1)) goto LAB_00dc0d8c;
        bVar7 = bVar2 + 3;
        if (bVar7 < 7) {
          bVar3 = (&DAT_00549df5)[bVar7];
          uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar3 + ~(uint)(byte)(&DAT_00549dee)[bVar7];
          uVar5 = 0;
          if (bVar3 != 0) {
            uVar5 = uVar1 / bVar3;
          }
          *(uint *)(param_1 + 0x248) = uVar5;
          if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0) goto LAB_00dc0d8c;
          bVar4 = (&DAT_00549de7)[bVar7];
          uVar5 = *(int *)(param_1 + 0x234) + (uint)bVar4 + ~(uint)(byte)(&DAT_00549de0)[bVar7];
          uVar6 = 0;
          if (bVar4 != 0) {
            uVar6 = uVar5 / bVar4;
          }
          *(uint *)(param_1 + 0x238) = uVar6;
          if ((bVar4 <= uVar5) && (bVar3 <= uVar1)) goto LAB_00dc0d8c;
          bVar7 = bVar2 + 4;
          if (bVar7 < 7) {
            bVar3 = (&DAT_00549df5)[bVar7];
            uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar3 + ~(uint)(byte)(&DAT_00549dee)[bVar7];
            uVar5 = 0;
            if (bVar3 != 0) {
              uVar5 = uVar1 / bVar3;
            }
            *(uint *)(param_1 + 0x248) = uVar5;
            if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0) goto LAB_00dc0d8c;
            bVar4 = (&DAT_00549de7)[bVar7];
            uVar5 = *(int *)(param_1 + 0x234) + (uint)bVar4 + ~(uint)(byte)(&DAT_00549de0)[bVar7];
            uVar6 = 0;
            if (bVar4 != 0) {
              uVar6 = uVar5 / bVar4;
            }
            *(uint *)(param_1 + 0x238) = uVar6;
            if ((bVar4 <= uVar5) && (bVar3 <= uVar1)) goto LAB_00dc0d8c;
            bVar7 = bVar2 + 5;
            if (bVar7 < 7) {
              bVar3 = (&DAT_00549df5)[bVar7];
              uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar3 + ~(uint)(byte)(&DAT_00549dee)[bVar7];
              uVar5 = 0;
              if (bVar3 != 0) {
                uVar5 = uVar1 / bVar3;
              }
              *(uint *)(param_1 + 0x248) = uVar5;
              if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0) goto LAB_00dc0d8c;
              bVar4 = (&DAT_00549de7)[bVar7];
              uVar5 = *(int *)(param_1 + 0x234) + (uint)bVar4 + ~(uint)(byte)(&DAT_00549de0)[bVar7];
              uVar6 = 0;
              if (bVar4 != 0) {
                uVar6 = uVar5 / bVar4;
              }
              *(uint *)(param_1 + 0x238) = uVar6;
              if ((bVar4 <= uVar5) && (bVar3 <= uVar1)) goto LAB_00dc0d8c;
              bVar7 = bVar2 + 6;
              if (bVar7 < 7) {
                bVar3 = (&DAT_00549df5)[bVar7];
                uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar3 +
                        ~(uint)(byte)(&DAT_00549dee)[bVar7];
                uVar5 = 0;
                if (bVar3 != 0) {
                  uVar5 = uVar1 / bVar3;
                }
                *(uint *)(param_1 + 0x248) = uVar5;
                if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0) goto LAB_00dc0d8c;
                bVar4 = (&DAT_00549de7)[bVar7];
                uVar5 = *(int *)(param_1 + 0x234) + (uint)bVar4 +
                        ~(uint)(byte)(&DAT_00549de0)[bVar7];
                uVar6 = 0;
                if (bVar4 != 0) {
                  uVar6 = uVar5 / bVar4;
                }
                *(uint *)(param_1 + 0x238) = uVar6;
                if ((bVar4 <= uVar5) && (bVar3 <= uVar1)) goto LAB_00dc0d8c;
                bVar7 = bVar2 + 7;
                if (0xf8 < bVar2) {
                  bVar3 = (&DAT_00549df5)[bVar7];
                  uVar1 = *(int *)(param_1 + 0x230) + (uint)bVar3 +
                          ~(uint)(byte)(&DAT_00549dee)[bVar7];
                  uVar5 = 0;
                  if (bVar3 != 0) {
                    uVar5 = uVar1 / bVar3;
                  }
                  *(uint *)(param_1 + 0x248) = uVar5;
                  if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) != 0) goto LAB_00dc0d8c;
                  bVar4 = (&DAT_00549de7)[bVar7];
                  uVar5 = *(int *)(param_1 + 0x234) + (uint)bVar4 +
                          ~(uint)(byte)(&DAT_00549de0)[bVar7];
                  uVar6 = 0;
                  if (bVar4 != 0) {
                    uVar6 = uVar5 / bVar4;
                  }
                  *(uint *)(param_1 + 0x238) = uVar6;
                  if ((bVar4 <= uVar5) && (bVar3 <= uVar1)) goto LAB_00dc0d8c;
                  bVar7 = bVar2 + 8;
                  if (bVar7 < 7) {
                    bVar2 = (&DAT_00549df5)[bVar7];
                    uVar1 = 0;
                    if (bVar2 != 0) {
                      uVar1 = (*(int *)(param_1 + 0x230) + (uint)bVar2 +
                              ~(uint)(byte)(&DAT_00549dee)[bVar7]) / (uint)bVar2;
                    }
                    *(uint *)(param_1 + 0x248) = uVar1;
                    if ((*(byte *)(param_1 + 0x16c) >> 1 & 1) == 0) {
                      bVar2 = (&DAT_00549de7)[bVar7];
                      uVar1 = 0;
                      if (bVar2 != 0) {
                        uVar1 = (*(int *)(param_1 + 0x234) + (uint)bVar2 +
                                ~(uint)(byte)(&DAT_00549de0)[bVar7]) / (uint)bVar2;
                      }
                      *(uint *)(param_1 + 0x238) = uVar1;
                    }
                    goto LAB_00dc0d8c;
                  }
                }
              }
            }
          }
        }
      }
    }
    *(byte *)(param_1 + 0x29d) = bVar7;
  }
  if ((*(byte *)(param_1 + 0x168) >> 3 & 1) == 0) {
    png_read_IDAT_data(param_1,0,0);
    *(undefined8 *)(param_1 + 400) = 0;
    if ((*(uint *)(param_1 + 0x168) >> 3 & 1) == 0) {
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 8;
      *(uint *)(param_1 + 0x164) = *(uint *)(param_1 + 0x164) | 8;
    }
  }
  if (*(int *)(param_1 + 0x170) != 0x49444154) {
    return;
  }
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  png_crc_finish(param_1,*(undefined4 *)(param_1 + 0x280));
  return;
}


