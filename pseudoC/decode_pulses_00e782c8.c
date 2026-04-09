// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: decode_pulses
// Entry Point: 00e782c8
// Size: 516 bytes
// Signature: undefined decode_pulses(void)


int decode_pulses(int *param_1,uint param_2,uint param_3,undefined8 param_4)

{
  bool bVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  short sVar6;
  short sVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  undefined *puVar17;
  
  uVar8 = param_2;
  if ((int)param_3 <= (int)param_2) {
    uVar8 = param_3;
  }
  uVar16 = param_2;
  if ((int)param_2 <= (int)param_3) {
    uVar16 = param_3;
  }
  uVar15 = param_2;
  if ((int)(param_3 + 1) <= (int)param_2) {
    uVar15 = param_3 + 1;
  }
  uVar2 = param_2;
  if ((int)param_2 <= (int)(param_3 + 1)) {
    uVar2 = param_3 + 1;
  }
  uVar8 = ec_dec_uint(param_4,*(int *)((&PTR_DAT_01014238)[(int)uVar15] + (long)(int)uVar2 * 4) +
                              *(int *)((&PTR_DAT_01014238)[(int)uVar8] + (long)(int)uVar16 * 4));
  if ((int)param_2 < 3) {
    iVar9 = 0;
  }
  else {
    iVar9 = 0;
    uVar10 = (ulong)param_2;
    do {
      uVar11 = (ulong)(int)param_3;
      if ((long)uVar11 < (long)uVar10) {
        uVar16 = *(uint *)((&PTR_DAT_01014238)[uVar11] + uVar10 * 4);
        uVar15 = *(uint *)((&PTR_DAT_01014238)[(int)(param_3 + 1)] + uVar10 * 4);
        if (uVar8 < uVar16 || uVar15 <= uVar8) {
          ppuVar12 = &PTR_DAT_01014238 + uVar11;
          uVar2 = -(uint)(uVar15 <= uVar8);
          uVar8 = uVar8 - (uVar15 & uVar2);
          uVar16 = uVar2;
          do {
            ppuVar12 = ppuVar12 + -1;
            uVar16 = uVar16 + 1;
            param_3 = param_3 - 1;
            uVar15 = *(uint *)(*ppuVar12 + uVar10 * 4);
          } while (uVar8 < uVar15);
          iVar4 = (int)(short)((ushort)uVar16 ^ (ushort)uVar2);
          iVar9 = iVar9 + iVar4 * iVar4;
          *param_1 = iVar4;
          uVar8 = uVar8 - uVar15;
        }
        else {
          *param_1 = 0;
          uVar8 = uVar8 - uVar16;
        }
      }
      else {
        puVar17 = (&PTR_DAT_01014238)[uVar10];
        uVar16 = -(uint)(*(uint *)(puVar17 + uVar11 * 4 + 4) <= uVar8);
        uVar8 = uVar8 - (*(uint *)(puVar17 + uVar11 * 4 + 4) & uVar16);
        uVar13 = uVar10;
        if (uVar8 < *(uint *)(puVar17 + uVar10 * 4)) {
          do {
            uVar14 = uVar13 - 1;
            uVar15 = *(uint *)(*(long *)(&DAT_01014230 + uVar13 * 8) + uVar10 * 4);
            uVar13 = uVar14;
          } while (uVar8 < uVar15);
        }
        else {
          do {
            uVar14 = uVar11;
            uVar15 = *(uint *)(puVar17 + uVar14 * 4);
            uVar11 = uVar14 - 1;
          } while (uVar8 < uVar15);
        }
        sVar6 = (short)param_3;
        uVar3 = (ushort)uVar16;
        uVar8 = uVar8 - uVar15;
        param_3 = (uint)uVar14;
        iVar4 = (int)(short)((sVar6 + uVar3) - (short)uVar14 ^ uVar3);
        iVar9 = iVar9 + iVar4 * iVar4;
        *param_1 = iVar4;
      }
      param_1 = param_1 + 1;
      bVar1 = 3 < (long)uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar1);
  }
  uVar15 = param_3 << 1 | 1;
  iVar4 = uVar8 - (uVar15 & -(uint)(uVar15 <= uVar8));
  uVar16 = iVar4 + 1;
  sVar6 = (short)(uVar16 >> 1);
  uVar3 = ((short)param_3 - (ushort)(uVar15 <= uVar8)) - sVar6;
  if (uVar15 <= uVar8) {
    uVar3 = ~uVar3;
  }
  iVar5 = (int)(short)uVar3;
  sVar7 = 0;
  if (1 < uVar16) {
    sVar7 = ((ushort)uVar16 & 0xfffe) - 1;
  }
  sVar7 = (short)iVar4 - sVar7;
  iVar4 = (int)(short)(sVar6 - sVar7 ^ -sVar7);
  *param_1 = iVar5;
  param_1[1] = iVar4;
  return iVar9 + iVar5 * iVar5 + iVar4 * iVar4;
}


