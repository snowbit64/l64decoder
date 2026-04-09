// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: silk_decode_pitch
// Entry Point: 00e68a2c
// Size: 224 bytes
// Signature: undefined silk_decode_pitch(void)


void silk_decode_pitch(short param_1,char param_2,uint *param_3,uint param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined6 *puVar5;
  undefined6 *puVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  char *pcVar13;
  
  puVar5 = (undefined6 *)&silk_CB_lags_stage3;
  puVar6 = (undefined6 *)silk_CB_lags_stage2;
  if (param_5 != 4) {
    puVar5 = (undefined6 *)silk_CB_lags_stage3_10_ms;
    puVar6 = &silk_CB_lags_stage2_10_ms;
  }
  if (param_4 != 8) {
    puVar6 = puVar5;
  }
  if (0 < (int)param_5) {
    lVar7 = 0xb;
    if (param_5 != 4) {
      lVar7 = 3;
    }
    uVar11 = -(param_4 >> 0xf & 1) & 0xfffe0000 | (param_4 & 0xffff) << 1;
    iVar1 = (int)(short)param_4 + (short)param_4 * 8;
    lVar8 = 0x22;
    if (param_5 != 4) {
      lVar8 = 0xc;
    }
    uVar10 = iVar1 * 2;
    if (param_4 != 8) {
      lVar7 = lVar8;
    }
    uVar12 = (ulong)param_5;
    pcVar13 = (char *)((long)puVar6 + (long)param_2);
    if (uVar11 == uVar10 || (int)(uVar11 + iVar1 * -2) < 0 != SBORROW4(uVar11,uVar10)) {
      do {
        cVar9 = *pcVar13;
        pcVar13 = pcVar13 + lVar7;
        uVar2 = uVar11 + (int)param_1 + (int)cVar9;
        uVar3 = uVar11;
        if ((int)uVar11 <= (int)uVar2) {
          uVar3 = uVar2;
        }
        uVar4 = uVar10;
        if (uVar2 == uVar10 || (int)(uVar2 + iVar1 * -2) < 0 != SBORROW4(uVar2,uVar10)) {
          uVar4 = uVar3;
        }
        uVar12 = uVar12 - 1;
        *param_3 = uVar4;
        param_3 = param_3 + 1;
      } while (uVar12 != 0);
    }
    else {
      do {
        cVar9 = *pcVar13;
        pcVar13 = pcVar13 + lVar7;
        uVar2 = uVar11 + (int)param_1 + (int)cVar9;
        uVar3 = uVar10;
        if ((int)(uVar2 + iVar1 * -2) < 0 == SBORROW4(uVar2,uVar10)) {
          uVar3 = uVar2;
        }
        uVar4 = uVar11;
        if ((int)uVar2 <= (int)uVar11) {
          uVar4 = uVar3;
        }
        uVar12 = uVar12 - 1;
        *param_3 = uVar4;
        param_3 = param_3 + 1;
      } while (uVar12 != 0);
    }
  }
  return;
}


