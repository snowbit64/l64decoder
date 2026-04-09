// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: maskY
// Entry Point: 00b4ff80
// Size: 808 bytes
// Signature: undefined __cdecl maskY(Vector4 * param_1, uint param_2, float param_3, float param_4, float * param_5, float * param_6, float param_7)


/* ClippingUtil::maskY(Vector4 const*, unsigned int, float, float, float&, float&, float) */

undefined8
ClippingUtil::maskY(Vector4 *param_1,uint param_2,float param_3,float param_4,float *param_5,
                   float *param_6,float param_7)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (2 < param_2) {
    bVar1 = false;
    fVar6 = *(float *)(param_1 + (ulong)(param_2 - 1) * 0x10 + 4);
    fVar4 = *(float *)(param_1 + (ulong)(param_2 - 1) * 0x10 + 0xc);
    if (param_4 <= fVar6) {
      fVar8 = 1e+30;
      uVar3 = 0;
      fVar5 = -1e+30;
      goto LAB_00b4ffe8;
    }
    fVar8 = 1e+30;
    uVar2 = 0;
    fVar11 = -1e+30;
    fVar5 = -1e+30;
    if (fVar6 < param_3) goto LAB_00b50184;
LAB_00b500a0:
    fVar5 = fVar11;
    fVar10 = fVar8;
    if (uVar2 != param_2) {
      while( true ) {
        uVar3 = uVar2 + 1;
        fVar7 = *(float *)(param_1 + (ulong)uVar2 * 0x10 + 4);
        fVar9 = *(float *)(param_1 + (ulong)uVar2 * 0x10 + 0xc);
        if (param_4 <= fVar7) {
          bVar1 = true;
          fVar6 = (param_4 - fVar7) / (fVar6 - fVar7);
          fVar4 = (float)NEON_fmadd(fVar9,1.0 - fVar6,fVar4 * fVar6);
          fVar5 = 1.0 / (fVar4 * param_7);
          fVar8 = fVar5;
          if (fVar10 <= fVar5) {
            fVar8 = fVar10;
          }
          fVar4 = fVar9;
          fVar6 = fVar7;
          if (fVar11 < fVar5) goto LAB_00b4ffe8;
          fVar5 = fVar11;
          goto LAB_00b4ffe8;
        }
        if (fVar7 < param_3) break;
        fVar5 = 1.0 / (fVar9 * param_7);
        fVar8 = fVar5;
        if (fVar10 <= fVar5) {
          fVar8 = fVar10;
        }
        if (fVar5 <= fVar11) {
          fVar5 = fVar11;
        }
        fVar11 = fVar5;
        fVar10 = fVar8;
        fVar4 = fVar9;
        fVar6 = fVar7;
        uVar2 = uVar3;
        if (param_2 == uVar3) goto LAB_00b5020c;
      }
      uVar2 = uVar2 + 1;
      bVar1 = true;
      fVar6 = (param_3 - fVar6) / (fVar7 - fVar6);
      fVar4 = (float)NEON_fmadd(fVar4,1.0 - fVar6,fVar9 * fVar6);
      fVar5 = 1.0 / (fVar4 * param_7);
      fVar8 = fVar5;
      if (fVar10 <= fVar5) {
        fVar8 = fVar10;
      }
      fVar4 = fVar9;
      fVar6 = fVar7;
      if (fVar5 <= fVar11) {
        fVar5 = fVar11;
      }
LAB_00b50184:
      do {
        while( true ) {
          fVar10 = fVar6;
          fVar11 = fVar4;
          if (param_2 == uVar2) goto LAB_00b50208;
          fVar6 = *(float *)(param_1 + (ulong)uVar2 * 0x10 + 4);
          fVar4 = *(float *)(param_1 + (ulong)uVar2 * 0x10 + 0xc);
          if (fVar6 < param_4) break;
          fVar10 = fVar10 - fVar6;
          uVar3 = uVar2 + 1;
          bVar1 = true;
          fVar7 = (param_3 - fVar6) / fVar10;
          fVar10 = (param_4 - fVar6) / fVar10;
          fVar7 = (float)NEON_fmadd(fVar4,1.0 - fVar7,fVar11 * fVar7);
          fVar7 = 1.0 / (fVar7 * param_7);
          fVar11 = (float)NEON_fmadd(fVar4,1.0 - fVar10,fVar11 * fVar10);
          fVar10 = 1.0 / (fVar11 * param_7);
          fVar11 = fVar7;
          if (fVar8 <= fVar7) {
            fVar11 = fVar8;
          }
          if (fVar7 <= fVar5) {
            fVar7 = fVar5;
          }
          fVar8 = fVar10;
          if (fVar11 <= fVar10) {
            fVar8 = fVar11;
          }
          fVar5 = fVar10;
          if (fVar10 <= fVar7) {
            fVar5 = fVar7;
          }
LAB_00b4ffe8:
          do {
            fVar10 = fVar6;
            fVar11 = fVar4;
            if (param_2 == uVar3) goto LAB_00b50208;
            uVar2 = uVar3 + 1;
            fVar6 = *(float *)(param_1 + (ulong)uVar3 * 0x10 + 4);
            fVar4 = *(float *)(param_1 + (ulong)uVar3 * 0x10 + 0xc);
            uVar3 = uVar2;
          } while (param_4 <= fVar6);
          fVar7 = (param_4 - fVar10) / (fVar6 - fVar10);
          fVar7 = (float)NEON_fmadd(fVar11,1.0 - fVar7,fVar4 * fVar7);
          fVar7 = 1.0 / (fVar7 * param_7);
          fVar9 = fVar7;
          if (fVar8 <= fVar7) {
            fVar9 = fVar8;
          }
          if (fVar7 <= fVar5) {
            fVar7 = fVar5;
          }
          if (param_3 <= fVar6) {
            bVar1 = true;
            fVar11 = 1.0 / (fVar4 * param_7);
            fVar8 = fVar11;
            if (fVar9 <= fVar11) {
              fVar8 = fVar9;
            }
            if (fVar11 <= fVar7) {
              fVar11 = fVar7;
            }
            goto LAB_00b500a0;
          }
          bVar1 = true;
          fVar8 = (param_3 - fVar10) / (fVar6 - fVar10);
          fVar8 = (float)NEON_fmadd(fVar11,1.0 - fVar8,fVar4 * fVar8);
          fVar5 = 1.0 / (fVar8 * param_7);
          fVar8 = fVar5;
          if (fVar9 <= fVar5) {
            fVar8 = fVar9;
          }
          if (fVar5 <= fVar7) {
            fVar5 = fVar7;
          }
        }
        uVar2 = uVar2 + 1;
      } while (fVar6 < param_3);
      bVar1 = true;
      fVar10 = (param_3 - fVar6) / (fVar10 - fVar6);
      fVar10 = (float)NEON_fmadd(fVar4,1.0 - fVar10,fVar11 * fVar10);
      fVar11 = 1.0 / (fVar4 * param_7);
      fVar10 = 1.0 / (fVar10 * param_7);
      fVar7 = fVar10;
      if (fVar8 <= fVar10) {
        fVar7 = fVar8;
      }
      if (fVar10 <= fVar5) {
        fVar10 = fVar5;
      }
      fVar8 = fVar11;
      if (fVar7 <= fVar11) {
        fVar8 = fVar7;
      }
      if (fVar11 <= fVar10) {
        fVar11 = fVar10;
      }
      goto LAB_00b500a0;
    }
LAB_00b50208:
    if (bVar1) {
LAB_00b5020c:
      fVar4 = *param_5;
      if (fVar8 <= *param_5) {
        fVar4 = fVar8;
      }
      *param_5 = fVar4;
      fVar4 = *param_6;
      if (*param_6 <= fVar5) {
        fVar4 = fVar5;
      }
      *param_6 = fVar4;
      return 1;
    }
  }
  return 0;
}


