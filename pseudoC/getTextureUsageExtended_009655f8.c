// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextureUsageExtended
// Entry Point: 009655f8
// Size: 568 bytes
// Signature: undefined __cdecl getTextureUsageExtended(Texture * param_1)


/* TextureStreamingManager::getTextureUsageExtended(Texture const&) const */

void TextureStreamingManager::getTextureUsageExtended(Texture *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long in_x1;
  long *in_x8;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long **pplVar9;
  ulong uVar10;
  long *plVar11;
  ulong uVar12;
  undefined2 uVar13;
  float fVar14;
  undefined8 uVar15;
  long lVar16;
  
  plVar11 = *(long **)(in_x1 + 0x68);
  *(undefined4 *)(in_x8 + 1) = 0;
  in_x8[3] = 0;
  in_x8[4] = 0;
  if (plVar11 == (long *)0x0) {
    uVar5 = 1;
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)(*plVar11 + 0x20))(plVar11);
    uVar4 = uVar4 & 0xffffffff;
    uVar5 = (**(code **)(*plVar11 + 0x28))(plVar11);
    uVar5 = uVar5 & 0xffffffff;
  }
  uVar6 = *(ulong *)(param_1 + 0x158);
  uVar12 = *(ulong *)(in_x1 + 0x70);
  if (uVar6 != 0) {
    uVar15 = NEON_cnt(uVar6,1);
    uVar13 = NEON_uaddlv(uVar15,1);
    uVar7 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar13) & 0xffffffff;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar12;
    }
    else {
      uVar8 = uVar12;
      if (uVar6 <= uVar12) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar12 / uVar6;
        }
        uVar8 = uVar12 - uVar8 * uVar6;
      }
    }
    pplVar9 = *(long ***)(*(long *)(param_1 + 0x150) + uVar8 * 8);
    if ((pplVar9 != (long **)0x0) && (plVar11 = *pplVar9, plVar11 != (long *)0x0)) {
      do {
        uVar10 = plVar11[1];
        if (uVar12 == uVar10) {
          if (plVar11[2] == uVar12) {
            lVar16 = plVar11[3];
            fVar14 = *(float *)((long)plVar11 + 0x24);
            uVar1 = *(undefined4 *)(plVar11 + 5);
            in_x8[1] = plVar11[4];
            *in_x8 = lVar16;
            *(undefined4 *)(in_x8 + 2) = uVar1;
            fVar14 = (float)NEON_fmin(fVar14 * fVar14,0x4d800000);
            fVar14 = log2f(fVar14);
            fVar14 = exp2f((fVar14 - (float)uVar4 / (float)uVar5) * 0.5);
            *(int *)(in_x8 + 3) = (int)fVar14;
            *(int *)((long)in_x8 + 0x1c) = (int)(fVar14 / ((float)uVar4 / (float)uVar5));
            break;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar6 - 1;
          }
          else if (uVar6 <= uVar10) {
            uVar3 = 0;
            if (uVar6 != 0) {
              uVar3 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar3 * uVar6;
          }
          if (uVar10 != uVar8) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  uVar6 = *(ulong *)(param_1 + 0x230);
  if (uVar6 != 0) {
    uVar15 = NEON_cnt(uVar6,1);
    uVar13 = NEON_uaddlv(uVar15,1);
    uVar7 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar13) & 0xffffffff;
    if (uVar7 < 2) {
      uVar8 = uVar6 - 1 & uVar12;
    }
    else {
      uVar8 = uVar12;
      if (uVar6 <= uVar12) {
        uVar8 = 0;
        if (uVar6 != 0) {
          uVar8 = uVar12 / uVar6;
        }
        uVar8 = uVar12 - uVar8 * uVar6;
      }
    }
    pplVar9 = *(long ***)(*(long *)(param_1 + 0x228) + uVar8 * 8);
    if ((pplVar9 != (long **)0x0) && (plVar11 = *pplVar9, plVar11 != (long *)0x0)) {
      do {
        uVar10 = plVar11[1];
        if (uVar12 == uVar10) {
          if (plVar11[2] == uVar12) {
            uVar2 = *(uint *)((long)plVar11 + 0xb4);
            *(int *)(in_x8 + 4) = (int)uVar4 << (ulong)(uVar2 & 0x1f);
            *(int *)((long)in_x8 + 0x24) = (int)uVar5 << (ulong)(uVar2 & 0x1f);
            return;
          }
        }
        else {
          if (uVar7 < 2) {
            uVar10 = uVar10 & uVar6 - 1;
          }
          else if (uVar6 <= uVar10) {
            uVar3 = 0;
            if (uVar6 != 0) {
              uVar3 = uVar10 / uVar6;
            }
            uVar10 = uVar10 - uVar3 * uVar6;
          }
          if (uVar10 != uVar8) {
            return;
          }
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  return;
}


