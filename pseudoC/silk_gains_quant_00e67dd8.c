// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_gains_quant
// Entry Point: 00e67dd8
// Size: 408 bytes
// Signature: undefined silk_gains_quant(void)


void silk_gains_quant(long param_1,long param_2,char *param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  short sVar5;
  undefined4 uVar6;
  char cVar7;
  ulong uVar8;
  
  if (0 < (int)param_5) {
    uVar8 = 0;
    do {
      sVar5 = silk_lin2log(*(undefined4 *)(param_2 + uVar8 * 4));
      uVar3 = (short)(sVar5 + -0x82a) * 0x8cb;
      uVar2 = uVar3 >> 0x10;
      cVar4 = (char)(uVar3 >> 0x10);
      *(char *)(param_1 + uVar8) = cVar4;
      if (cVar4 < *param_3) {
        uVar2 = uVar2 + 1;
      }
      uVar2 = uVar2 & ((uint)(int)(char)uVar2 >> 7 ^ 0xffffffff);
      if (0x3e < (uVar2 & 0xff)) {
        uVar2 = 0x3f;
      }
      *(char *)(param_1 + uVar8) = (char)uVar2;
      cVar4 = *param_3;
      if (((uint)uVar8 | param_4) == 0) {
        uVar3 = (int)cVar4 - 4U;
        if ((int)((int)cVar4 - 4U) <= (int)(uVar2 & 0xff)) {
          uVar3 = uVar2;
        }
        cVar7 = '?';
        if (cVar4 < 'D') {
          cVar7 = (char)uVar3;
        }
        *(char *)(param_1 + uVar8) = cVar7;
        *param_3 = cVar7;
      }
      else {
        cVar4 = (char)uVar2 - cVar4;
        *(char *)(param_1 + uVar8) = cVar4;
        iVar1 = *param_3 + 8;
        cVar7 = (char)iVar1 + (char)(((int)cVar4 - (int)*param_3) + 0x1f9U >> 1);
        if (cVar4 <= iVar1) {
          cVar7 = cVar4;
        }
        if (cVar7 < -3) {
          cVar7 = -4;
        }
        if ('#' < cVar7) {
          cVar7 = '$';
        }
        *(char *)(param_1 + uVar8) = cVar7;
        if (iVar1 < cVar7) {
          cVar7 = *param_3 + (cVar7 * '\x02' - (char)iVar1);
          if ('>' < cVar7) {
            cVar7 = '?';
          }
        }
        else {
          cVar7 = *param_3 + cVar7;
        }
        *param_3 = cVar7;
        *(char *)(param_1 + uVar8) = *(char *)(param_1 + uVar8) + '\x04';
        cVar7 = *param_3;
      }
      iVar1 = cVar7 * 0x1d1c71 >> 0x10;
      if (0x754 < iVar1) {
        iVar1 = 0x755;
      }
      uVar6 = silk_log2lin(iVar1 + 0x82a);
      *(undefined4 *)(param_2 + uVar8 * 4) = uVar6;
      uVar8 = uVar8 + 1;
    } while (param_5 != uVar8);
  }
  return;
}


