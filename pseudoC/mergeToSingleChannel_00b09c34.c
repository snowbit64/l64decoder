// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: mergeToSingleChannel
// Entry Point: 00b09c34
// Size: 292 bytes
// Signature: undefined __cdecl mergeToSingleChannel(AudioBufferDesc * param_1)


/* AudioUtil::mergeToSingleChannel(AudioBufferDesc&) */

void AudioUtil::mergeToSingleChannel(AudioBufferDesc *param_1)

{
  float *pfVar1;
  uint uVar2;
  short *psVar3;
  byte *pbVar4;
  int iVar5;
  long lVar6;
  undefined4 uVar7;
  float *pfVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  float *pfVar12;
  float fVar13;
  
  if (param_1[4] == (AudioBufferDesc)0x0) {
    return;
  }
  iVar5 = *(int *)param_1;
  if (iVar5 == 5) {
    uVar11 = *(uint *)(param_1 + 0x48);
    if (7 < uVar11) {
      uVar9 = (ulong)(uVar11 >> 3);
      pfVar12 = *(float **)(param_1 + 0x40) + 1;
      pfVar8 = *(float **)(param_1 + 0x40);
      do {
        pfVar1 = pfVar12 + -1;
        fVar13 = *pfVar12;
        pfVar12 = pfVar12 + 2;
        uVar9 = uVar9 - 1;
        *pfVar8 = (*pfVar1 + fVar13) * 0.5;
        pfVar8 = pfVar8 + 1;
      } while (uVar9 != 0);
    }
    uVar7 = 4;
  }
  else {
    if (iVar5 != 3) {
      if (iVar5 != 1) {
        return;
      }
      if (*(uint *)(param_1 + 0x48) < 2) {
        uVar11 = *(uint *)(param_1 + 0x48) >> 1;
      }
      else {
        lVar6 = 0;
        uVar9 = 0;
        lVar10 = *(long *)(param_1 + 0x40);
        do {
          pbVar4 = (byte *)(lVar10 + lVar6);
          lVar6 = lVar6 + 2;
          *(char *)(lVar10 + uVar9) = (char)((uint)pbVar4[1] + (uint)*pbVar4 >> 1);
          uVar9 = uVar9 + 1;
          uVar11 = *(uint *)(param_1 + 0x48) >> 1;
        } while (uVar9 < uVar11);
      }
      *(undefined4 *)param_1 = 0;
      *(uint *)(param_1 + 0x48) = uVar11;
      goto LAB_00b09d4c;
    }
    uVar11 = *(uint *)(param_1 + 0x48);
    if (3 < uVar11) {
      uVar9 = 0;
      lVar6 = *(long *)(param_1 + 0x40);
      do {
        psVar3 = (short *)(lVar6 + uVar9 * 2);
        uVar2 = (int)psVar3[1] + (int)*psVar3;
        if ((int)uVar2 < 0) {
          uVar2 = uVar2 + 1;
        }
        *(short *)(lVar6 + uVar9) = (short)(uVar2 >> 1);
        uVar9 = uVar9 + 2;
      } while (((ulong)(uVar11 >> 1) & 0x7ffffffe) != uVar9);
    }
    uVar7 = 2;
  }
  *(undefined4 *)param_1 = uVar7;
  *(uint *)(param_1 + 0x48) = uVar11 >> 1;
LAB_00b09d4c:
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}


