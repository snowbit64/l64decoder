// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createMixMatrix
// Entry Point: 00e3db18
// Size: 1188 bytes
// Signature: undefined __cdecl createMixMatrix(uint param_1, uint param_2, float * param_3)


/* SoLoud::createMixMatrix(unsigned int, unsigned int, float (*) [8]) */

void SoLoud::createMixMatrix(uint param_1,uint param_2,float *param_3)

{
  float fVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  float *pfVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined auVar9 [16];
  
  if (param_2 == 0) {
    return;
  }
  uVar7 = (ulong)param_2;
  uVar6 = (ulong)param_1;
  if (param_1 == 0) {
    if (param_2 == 1) {
      return;
    }
    if (param_2 == 0) goto LAB_00e3dbc8;
  }
  else {
    pfVar5 = param_3;
    uVar2 = uVar7;
    do {
      memset(pfVar5,0,uVar6 << 2);
      pfVar5 = pfVar5 + 8;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
    if (param_1 == 1) {
      if (param_2 == 0) {
        return;
      }
      if (param_2 == 1) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar7 & 0xfffffffe;
        pfVar5 = param_3 + 8;
        uVar6 = uVar2;
        do {
          uVar6 = uVar6 - 2;
          pfVar5[-8] = 1.0;
          *pfVar5 = 1.0;
          pfVar5 = pfVar5 + 0x10;
        } while (uVar6 != 0);
        if (uVar2 == uVar7) {
          return;
        }
      }
      lVar3 = uVar7 - uVar2;
      pfVar5 = param_3 + uVar2 * 8;
      do {
        lVar3 = lVar3 + -1;
        *pfVar5 = 1.0;
        pfVar5 = pfVar5 + 8;
      } while (lVar3 != 0);
      return;
    }
    if (param_2 == 1) {
      if (param_1 < 8) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar6 & 0xfffffff8;
        puVar4 = (undefined8 *)(param_3 + 4);
        auVar9 = NEON_fmov(0x3f800000,4);
        uVar7 = uVar2;
        do {
          puVar4[-1] = auVar9._8_8_;
          puVar4[-2] = auVar9._0_8_;
          puVar4[1] = auVar9._8_8_;
          *puVar4 = auVar9._0_8_;
          puVar4 = puVar4 + 4;
          uVar7 = uVar7 - 8;
        } while (uVar7 != 0);
        if (uVar2 == uVar6) {
          return;
        }
      }
      lVar3 = uVar6 - uVar2;
      pfVar5 = param_3 + uVar2;
      do {
        lVar3 = lVar3 + -1;
        *pfVar5 = 1.0;
        pfVar5 = pfVar5 + 1;
      } while (lVar3 != 0);
      return;
    }
    if (param_1 == param_2) {
      if (param_2 == 0) {
        return;
      }
LAB_00e3dbc8:
      if (param_2 < 2) {
        uVar2 = 0;
      }
      else {
        uVar2 = uVar7 & 0xfffffffe;
        uVar6 = uVar2;
        pfVar5 = param_3;
        do {
          *pfVar5 = 1.0;
          uVar6 = uVar6 - 2;
          pfVar5[9] = 1.0;
          pfVar5 = pfVar5 + 0x12;
        } while (uVar6 != 0);
        if (uVar2 == uVar7) {
          return;
        }
      }
      lVar3 = uVar7 - uVar2;
      pfVar5 = param_3 + uVar2 * 9;
      do {
        lVar3 = lVar3 + -1;
        *pfVar5 = 1.0;
        pfVar5 = pfVar5 + 9;
      } while (lVar3 != 0);
      return;
    }
  }
  switch(param_2) {
  case 2:
    if (param_1 == 4) {
      fVar1 = 0.5;
      *param_3 = 0.5;
      param_3[2] = 0.5;
      param_3[9] = 0.5;
    }
    else {
      if (param_1 == 6) {
        fVar1 = 0.3;
        uVar8 = 0x3e99999a3e99999a;
        *param_3 = 0.3;
        param_3[4] = 0.3;
        param_3[0xd] = 0.3;
      }
      else {
        if (param_1 != 8) {
          return;
        }
        fVar1 = 0.2;
        *param_3 = 0.2;
        uVar8 = 0x3e4ccccd3e4ccccd;
        param_3[4] = 0.2;
        param_3[6] = 0.2;
        param_3[0xd] = 0.2;
        param_3[0xf] = 0.2;
      }
      *(undefined8 *)(param_3 + 9) = uVar8;
      *(undefined8 *)(param_3 + 2) = uVar8;
    }
    param_3[0xb] = fVar1;
    return;
  default:
    return;
  case 4:
    if (param_1 == 2) {
      *param_3 = 1.0;
      param_3[0x10] = 1.0;
      param_3[9] = 1.0;
      param_3[0x19] = 1.0;
      return;
    }
    if (param_1 != 6) {
      if (param_1 != 8) {
        return;
      }
      *param_3 = 1.0;
      param_3[0x14] = 0.5;
      param_3[0x16] = 0.5;
      param_3[0x1d] = 0.5;
      param_3[0x1f] = 0.5;
      *(undefined8 *)(param_3 + 9) = 0x3f3333333f800000;
      *(undefined8 *)(param_3 + 2) = 0x3f3333333f333333;
      param_3[0xb] = 0.7;
      return;
    }
    *param_3 = 1.0;
    param_3[0x14] = 1.0;
    param_3[0x1d] = 1.0;
    *(undefined8 *)(param_3 + 9) = 0x3f3333333f800000;
    *(undefined8 *)(param_3 + 2) = 0x3f3333333f333333;
    param_3[0xb] = 0.7;
    return;
  case 6:
    if (param_1 == 2) {
      *param_3 = 1.0;
      param_3[0x20] = 1.0;
      param_3[9] = 1.0;
      param_3[0x29] = 1.0;
LAB_00e3df4c:
      *(undefined8 *)(param_3 + 0x10) = 0x3f0000003f000000;
      *(undefined8 *)(param_3 + 0x18) = 0x3f0000003f000000;
      return;
    }
    if (param_1 == 4) {
      auVar9 = NEON_fmov(0x3e800000,4);
      *param_3 = 1.0;
      param_3[0x22] = 1.0;
      param_3[9] = 1.0;
      param_3[0x2b] = 1.0;
LAB_00e3df9c:
      *(undefined8 *)(param_3 + 0x10) = 0x3f0000003f000000;
      *(long *)(param_3 + 0x1a) = auVar9._8_8_;
      *(long *)(param_3 + 0x18) = auVar9._0_8_;
      return;
    }
    if (param_1 != 8) {
      return;
    }
    *param_3 = 1.0;
    param_3[0x24] = 0.5;
    param_3[0x26] = 0.5;
    param_3[9] = 1.0;
    param_3[0x2d] = 0.5;
    param_3[0x2f] = 0.5;
    break;
  case 8:
    if (param_1 == 2) {
      *param_3 = 1.0;
      param_3[0x20] = 1.0;
      param_3[0x30] = 1.0;
      param_3[9] = 1.0;
      param_3[0x29] = 1.0;
      param_3[0x39] = 1.0;
      goto LAB_00e3df4c;
    }
    if (param_1 == 4) {
      auVar9 = NEON_fmov(0x3e800000,4);
      *param_3 = 1.0;
      param_3[0x20] = 0.5;
      param_3[0x22] = 0.5;
      param_3[0x32] = 1.0;
      param_3[9] = 1.0;
      param_3[0x29] = 0.5;
      param_3[0x2b] = 0.5;
      param_3[0x3b] = 1.0;
      goto LAB_00e3df9c;
    }
    if (param_1 != 6) {
      return;
    }
    *param_3 = 1.0;
    param_3[0x20] = 0.5;
    param_3[0x24] = 0.5;
    param_3[0x34] = 1.0;
    param_3[9] = 1.0;
    param_3[0x29] = 0.5;
    param_3[0x2d] = 0.5;
    param_3[0x3d] = 1.0;
  }
  param_3[0x12] = 1.0;
  param_3[0x1b] = 1.0;
  return;
}


