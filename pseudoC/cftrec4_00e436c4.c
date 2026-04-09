// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: cftrec4
// Entry Point: 00e436c4
// Size: 332 bytes
// Signature: undefined __cdecl cftrec4(int param_1, float * param_2)


/* fftimpl::cftrec4(int, float*) */

void fftimpl::cftrec4(int param_1,float *param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  int iVar9;
  
  uVar7 = (ulong)(uint)param_1;
  uVar5 = param_1;
  if (0x200 < param_1) {
    do {
      uVar5 = (uint)(uVar7 >> 2);
      cftmdl1(uVar5,param_2 + (int)(param_1 - uVar5));
      uVar8 = (uint)uVar7;
      uVar7 = uVar7 >> 2;
    } while (0x803 < uVar8);
  }
  iVar9 = param_1 - uVar5;
  cftleaf(uVar5,1,param_2 + iVar9);
  if (0 < iVar9) {
    uVar8 = 0;
    do {
      uVar8 = uVar8 + 1;
      uVar7 = (ulong)uVar8;
      uVar6 = uVar5;
      if ((uVar8 & 3) == 0) {
        do {
          uVar6 = uVar6 * 4;
          uVar2 = uVar7 >> 2;
          uVar4 = (uint)uVar7;
          uVar3 = uVar7 & 0xc;
          uVar7 = uVar2;
        } while (uVar3 == 0);
        if ((uVar2 & 1) == 0) {
          if (0x80 < (int)uVar6) {
            do {
              cftmdl2(uVar6,param_2 + (int)(iVar9 - uVar6));
              bVar1 = 0x203 < uVar6;
              uVar6 = uVar6 >> 2;
            } while (bVar1);
          }
          goto LAB_00e43738;
        }
        if ((int)uVar6 < 0x81) goto LAB_00e437f4;
        uVar4 = uVar4 >> 2 & 1;
        do {
          cftmdl1(uVar6,param_2 + (int)(iVar9 - uVar6));
          bVar1 = 0x203 < uVar6;
          uVar6 = uVar6 >> 2;
        } while (bVar1);
      }
      else if ((uVar8 & 1) == 0) {
        cftmdl2(uVar5,param_2 + (int)(iVar9 - uVar5));
LAB_00e43738:
        uVar4 = 0;
      }
      else {
        cftmdl1(uVar5,param_2 + (int)(iVar9 - uVar5));
LAB_00e437f4:
        uVar4 = 1;
      }
      iVar9 = iVar9 - uVar5;
      cftleaf(uVar5,uVar4,param_2 + iVar9);
    } while (0 < iVar9);
  }
  return;
}


