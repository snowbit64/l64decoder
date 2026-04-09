// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getTextureStreamingParams
// Entry Point: 0094cdc4
// Size: 356 bytes
// Signature: undefined __thiscall getTextureStreamingParams(CustomShader * this, uint param_1, uint param_2)


/* CustomShader::getTextureStreamingParams(unsigned int, unsigned int) const */

void __thiscall
CustomShader::getTextureStreamingParams(CustomShader *this,uint param_1,uint param_2)

{
  ulong uVar1;
  long lVar2;
  CustomShader *pCVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  ulong uVar9;
  long **pplVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  undefined2 uVar14;
  undefined8 uVar15;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  uVar13 = (ulong)param_2;
  lVar6 = *(long *)(this + 0x110) + (ulong)param_1 * 0xe0;
  if (*(long *)(lVar6 + 0xa8) == 0) {
    pbVar4 = *(byte **)(*(long *)(*(long *)(this + 0x110) + (ulong)param_1 * 0xe0 + 0x58) +
                       uVar13 * 8);
    pbVar7 = *(byte **)(pbVar4 + 0x10);
    if ((*pbVar4 & 1) == 0) {
      pbVar7 = pbVar4 + 1;
    }
    uVar13 = getTextureIndex(this,param_1,(char *)pbVar7,&local_3c);
    lVar6 = *(long *)(this + 0x110);
    if ((uVar13 & 1) == 0) {
      local_3c = param_2;
    }
    uVar13 = (ulong)local_3c;
  }
  uVar5 = *(ulong *)(lVar6 + 0x98);
  if (uVar5 != 0) {
    uVar15 = NEON_cnt(uVar5,1);
    uVar14 = NEON_uaddlv(uVar15,1);
    uVar8 = CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar14) & 0xffffffff;
    if (uVar8 < 2) {
      uVar9 = (int)uVar5 - 1 & uVar13;
    }
    else {
      uVar9 = uVar13;
      if (uVar5 <= uVar13) {
        uVar9 = 0;
        if (uVar5 != 0) {
          uVar9 = uVar13 / uVar5;
        }
        uVar9 = uVar13 - uVar9 * uVar5;
      }
    }
    pplVar10 = *(long ***)(*(long *)(lVar6 + 0x90) + uVar9 * 8);
    if ((pplVar10 != (long **)0x0) && (plVar11 = *pplVar10, plVar11 != (long *)0x0)) {
      do {
        uVar12 = plVar11[1];
        if (uVar12 == uVar13) {
          if (*(int *)(plVar11 + 2) == (int)uVar13) {
            pCVar3 = (CustomShader *)((long)plVar11 + 0x14);
            goto LAB_0094cef8;
          }
        }
        else {
          if (uVar8 < 2) {
            uVar12 = uVar12 & uVar5 - 1;
          }
          else if (uVar5 <= uVar12) {
            uVar1 = 0;
            if (uVar5 != 0) {
              uVar1 = uVar12 / uVar5;
            }
            uVar12 = uVar12 - uVar1 * uVar5;
          }
          if (uVar12 != uVar9) break;
        }
        plVar11 = (long *)*plVar11;
      } while (plVar11 != (long *)0x0);
    }
  }
  pCVar3 = this + 0x15c;
LAB_0094cef8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pCVar3);
}


