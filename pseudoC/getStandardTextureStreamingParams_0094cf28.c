// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getStandardTextureStreamingParams
// Entry Point: 0094cf28
// Size: 224 bytes
// Signature: undefined __thiscall getStandardTextureStreamingParams(CustomShader * this, uint param_1, STANDARD_TEXTURE param_2)


/* CustomShader::getStandardTextureStreamingParams(unsigned int, CustomShader::STANDARD_TEXTURE)
   const */

CustomShader * __thiscall
CustomShader::getStandardTextureStreamingParams(CustomShader *this,uint param_1,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long **pplVar8;
  long *plVar9;
  ulong uVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  
  lVar3 = *(long *)(this + 0x110) + (ulong)param_1 * 0xe0;
  lVar2 = *(long *)(this + 0x110);
  if (*(long *)(lVar3 + 0xd0) != 0) {
    lVar2 = lVar3;
  }
  uVar4 = *(ulong *)(lVar2 + 0xc0);
  if (uVar4 != 0) {
    uVar5 = (ulong)param_3;
    uVar12 = NEON_cnt(uVar4,1);
    uVar11 = NEON_uaddlv(uVar12,1);
    uVar6 = CONCAT62((int6)((ulong)uVar12 >> 0x10),uVar11) & 0xffffffff;
    if (uVar6 < 2) {
      uVar7 = uVar4 - 1 & uVar5;
    }
    else {
      uVar7 = uVar5;
      if (uVar4 <= uVar5) {
        uVar7 = 0;
        if (uVar4 != 0) {
          uVar7 = uVar5 / uVar4;
        }
        uVar7 = uVar5 - uVar7 * uVar4;
      }
    }
    pplVar8 = *(long ***)(*(long *)(lVar2 + 0xb8) + uVar7 * 8);
    if ((pplVar8 != (long **)0x0) && (plVar9 = *pplVar8, plVar9 != (long *)0x0)) {
      do {
        uVar10 = plVar9[1];
        if (uVar10 == uVar5) {
          if (*(int *)(plVar9 + 2) == param_3) {
            return (CustomShader *)((long)plVar9 + 0x14);
          }
        }
        else {
          if (uVar6 < 2) {
            uVar10 = uVar10 & uVar4 - 1;
          }
          else if (uVar4 <= uVar10) {
            uVar1 = 0;
            if (uVar4 != 0) {
              uVar1 = uVar10 / uVar4;
            }
            uVar10 = uVar10 - uVar1 * uVar4;
          }
          if (uVar10 != uVar7) break;
        }
        plVar9 = (long *)*plVar9;
      } while (plVar9 != (long *)0x0);
    }
  }
  return this + 0x15c;
}


