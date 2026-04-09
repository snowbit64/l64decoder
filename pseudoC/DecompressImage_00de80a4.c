// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: DecompressImage
// Entry Point: 00de80a4
// Size: 2072 bytes
// Signature: undefined __cdecl DecompressImage(uchar * param_1, int param_2, int param_3, void * param_4, int param_5)


/* squish::DecompressImage(unsigned char*, int, int, void const*, int) */

void squish::DecompressImage(uchar *param_1,int param_2,int param_3,void *param_4,int param_5)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  byte bVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  int iVar15;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  long local_68;
  
  uVar8 = (ulong)(uint)param_2;
  uVar1 = param_5 & 7;
  if (uVar1 != 4 && uVar1 != 2) {
    uVar1 = 1;
  }
  lVar2 = 0x10;
  if ((uVar1 & 1) != 0) {
    lVar2 = 8;
  }
  lVar6 = tpidr_el0;
  if (uVar1 != 4 && uVar1 != 2) {
    uVar1 = 1;
  }
  local_68 = *(long *)(lVar6 + 0x28);
  if ((0 < param_3) && (0 < param_2)) {
    lVar9 = (ulong)((uVar1 & 6) != 0) * 8;
    uVar13 = (ulong)(uint)param_3;
    bVar7 = (byte)uVar1;
    if ((uVar1 >> 1 & 1) == 0) {
      if (uVar1 >> 2 == 0) {
        iVar14 = 0;
        uVar11 = 0;
        iVar3 = param_2 * 4;
        iVar4 = param_2 * 8;
        iVar5 = param_2 * 0xc;
        do {
          lVar12 = 3;
          iVar15 = iVar14;
          do {
            DecompressColour((uchar *)&local_a8,(void *)((long)param_4 + lVar9),(bool)(bVar7 & 1));
            lVar10 = lVar12 + -2;
            *(undefined4 *)(param_1 + iVar15) = local_a8;
            if (lVar10 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar15 + 4)) = local_a4;
            }
            if (lVar12 + -1 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar15 + 8)) = local_a0;
            }
            if (lVar12 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar15 + 0xc)) = local_9c;
            }
            if ((long)(uVar11 | 1) < (long)uVar13) {
              *(undefined4 *)(param_1 + (iVar3 + iVar15)) = local_98;
              if (lVar10 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar3 + iVar15 + 4)) = local_94;
              }
              if (lVar12 + -1 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar3 + iVar15 + 8)) = local_90;
              }
              if (lVar12 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar3 + iVar15 + 0xc)) = local_8c;
              }
            }
            if ((long)(uVar11 | 2) < (long)uVar13) {
              *(undefined4 *)(param_1 + (iVar4 + iVar15)) = local_88;
              if (lVar10 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar4 + iVar15 + 4)) = local_84;
              }
              if (lVar12 + -1 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar4 + iVar15 + 8)) = local_80;
              }
              if (lVar12 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar4 + iVar15 + 0xc)) = local_7c;
              }
            }
            if ((long)(uVar11 | 3) < (long)uVar13) {
              *(undefined4 *)(param_1 + (iVar5 + iVar15)) = local_78;
              if (lVar10 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar5 + iVar15 + 4)) = local_74;
              }
              if (lVar12 + -1 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar5 + iVar15 + 8)) = local_70;
              }
              if (lVar12 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar5 + iVar15 + 0xc)) = local_6c;
              }
            }
            lVar10 = lVar12 + 1;
            iVar15 = iVar15 + 0x10;
            param_4 = (void *)((long)param_4 + lVar2);
            lVar12 = lVar12 + 4;
          } while (lVar10 < (long)uVar8);
          uVar11 = uVar11 + 4;
          iVar14 = iVar14 + param_2 * 0x10;
        } while ((long)uVar11 < (long)uVar13);
      }
      else {
        iVar14 = 0;
        uVar11 = 0;
        iVar3 = param_2 * 4;
        iVar4 = param_2 * 8;
        iVar5 = param_2 * 0xc;
        do {
          lVar12 = 3;
          iVar15 = iVar14;
          do {
            DecompressColour((uchar *)&local_a8,(void *)((long)param_4 + lVar9),(bool)(bVar7 & 1));
            DecompressAlphaDxt5((uchar *)&local_a8,param_4);
            lVar10 = lVar12 + -2;
            *(undefined4 *)(param_1 + iVar15) = local_a8;
            if (lVar10 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar15 + 4)) = local_a4;
            }
            if (lVar12 + -1 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar15 + 8)) = local_a0;
            }
            if (lVar12 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar15 + 0xc)) = local_9c;
            }
            if ((long)(uVar11 | 1) < (long)uVar13) {
              *(undefined4 *)(param_1 + (iVar3 + iVar15)) = local_98;
              if (lVar10 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar3 + iVar15 + 4)) = local_94;
              }
              if (lVar12 + -1 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar3 + iVar15 + 8)) = local_90;
              }
              if (lVar12 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar3 + iVar15 + 0xc)) = local_8c;
              }
            }
            if ((long)(uVar11 | 2) < (long)uVar13) {
              *(undefined4 *)(param_1 + (iVar4 + iVar15)) = local_88;
              if (lVar10 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar4 + iVar15 + 4)) = local_84;
              }
              if (lVar12 + -1 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar4 + iVar15 + 8)) = local_80;
              }
              if (lVar12 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar4 + iVar15 + 0xc)) = local_7c;
              }
            }
            if ((long)(uVar11 | 3) < (long)uVar13) {
              *(undefined4 *)(param_1 + (iVar5 + iVar15)) = local_78;
              if (lVar10 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar5 + iVar15 + 4)) = local_74;
              }
              if (lVar12 + -1 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar5 + iVar15 + 8)) = local_70;
              }
              if (lVar12 < (long)uVar8) {
                *(undefined4 *)(param_1 + (iVar5 + iVar15 + 0xc)) = local_6c;
              }
            }
            lVar10 = lVar12 + 1;
            iVar15 = iVar15 + 0x10;
            param_4 = (void *)((long)param_4 + lVar2);
            lVar12 = lVar12 + 4;
          } while (lVar10 < (long)uVar8);
          uVar11 = uVar11 + 4;
          iVar14 = iVar14 + param_2 * 0x10;
        } while ((long)uVar11 < (long)uVar13);
      }
    }
    else {
      iVar14 = 0;
      uVar11 = 0;
      iVar3 = param_2 * 4;
      iVar4 = param_2 * 8;
      iVar5 = param_2 * 0xc;
      do {
        lVar12 = 3;
        iVar15 = iVar14;
        do {
          DecompressColour((uchar *)&local_a8,(void *)((long)param_4 + lVar9),(bool)(bVar7 & 1));
          DecompressAlphaDxt3((uchar *)&local_a8,param_4);
          lVar10 = lVar12 + -2;
          *(undefined4 *)(param_1 + iVar15) = local_a8;
          if (lVar10 < (long)uVar8) {
            *(undefined4 *)(param_1 + (iVar15 + 4)) = local_a4;
          }
          if (lVar12 + -1 < (long)uVar8) {
            *(undefined4 *)(param_1 + (iVar15 + 8)) = local_a0;
          }
          if (lVar12 < (long)uVar8) {
            *(undefined4 *)(param_1 + (iVar15 + 0xc)) = local_9c;
          }
          if ((long)(uVar11 | 1) < (long)uVar13) {
            *(undefined4 *)(param_1 + (iVar3 + iVar15)) = local_98;
            if (lVar10 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar3 + iVar15 + 4)) = local_94;
            }
            if (lVar12 + -1 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar3 + iVar15 + 8)) = local_90;
            }
            if (lVar12 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar3 + iVar15 + 0xc)) = local_8c;
            }
          }
          if ((long)(uVar11 | 2) < (long)uVar13) {
            *(undefined4 *)(param_1 + (iVar4 + iVar15)) = local_88;
            if (lVar10 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar4 + iVar15 + 4)) = local_84;
            }
            if (lVar12 + -1 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar4 + iVar15 + 8)) = local_80;
            }
            if (lVar12 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar4 + iVar15 + 0xc)) = local_7c;
            }
          }
          if ((long)(uVar11 | 3) < (long)uVar13) {
            *(undefined4 *)(param_1 + (iVar5 + iVar15)) = local_78;
            if (lVar10 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar5 + iVar15 + 4)) = local_74;
            }
            if (lVar12 + -1 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar5 + iVar15 + 8)) = local_70;
            }
            if (lVar12 < (long)uVar8) {
              *(undefined4 *)(param_1 + (iVar5 + iVar15 + 0xc)) = local_6c;
            }
          }
          lVar10 = lVar12 + 1;
          iVar15 = iVar15 + 0x10;
          param_4 = (void *)((long)param_4 + lVar2);
          lVar12 = lVar12 + 4;
        } while (lVar10 < (long)uVar8);
        uVar11 = uVar11 + 4;
        iVar14 = iVar14 + param_2 * 0x10;
      } while ((long)uVar11 < (long)uVar13);
    }
  }
  if (*(long *)(lVar6 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


