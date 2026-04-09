// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: replaceReg
// Entry Point: 00c3fb60
// Size: 464 bytes
// Signature: undefined __thiscall replaceReg(IR_Section * this, uint param_1, uint param_2, uint param_3)


/* IR_Section::replaceReg(unsigned int, unsigned int, unsigned int) */

void __thiscall IR_Section::replaceReg(IR_Section *this,uint param_1,uint param_2,uint param_3)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  
  uVar12 = (ulong)param_3;
  IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*(long *)this + 0x98),param_1);
  IR_RegisterSet::getRegisterType((IR_RegisterSet *)(*(long *)this + 0x98),param_2);
  IR_RegisterSet::mergeRegisterDetails((IR_RegisterSet *)(*(long *)this + 0x98),param_1,param_2);
  lVar2 = *(long *)(this + 0x20);
  uVar4 = *(long *)(this + 0x28) - lVar2 >> 3;
  if (uVar12 < uVar4) {
    do {
      lVar5 = *(long *)(lVar2 + uVar12 * 8);
      uVar3 = *(uint *)(lVar5 + 4);
      if ((uVar3 & 0xffff) != 0) {
        lVar8 = 0;
        uVar11 = uVar3;
        while( true ) {
          lVar13 = lVar8 + (ulong)(uVar11 >> 0x10) + 2;
          if (*(uint *)(lVar5 + lVar13 * 4) == param_1) {
            *(uint *)(lVar5 + lVar13 * 4) = param_2;
          }
          if ((uVar3 & 0xffff) - 1 == (int)lVar8) break;
          uVar11 = *(uint *)(lVar5 + 4);
          lVar8 = lVar8 + 1;
        }
      }
      if (0xffff < uVar3) {
        uVar3 = uVar3 >> 0x10;
        if (uVar3 < 2) {
          uVar3 = 1;
        }
        uVar7 = (ulong)uVar3;
        if (uVar3 < 4) {
          uVar9 = 0;
        }
        else {
          uVar9 = uVar7 & 0xfffc;
          uVar10 = uVar9;
          lVar8 = 0;
          lVar13 = 1;
          do {
            puVar1 = (undefined8 *)(lVar5 + (lVar8 + 2) * 4);
            uVar14 = puVar1[1];
            uVar15 = NEON_cmeq(*puVar1,CONCAT44(param_1,param_1),4);
            if ((uVar15 & 1) != 0) {
              *(uint *)(lVar5 + (lVar8 + 2) * 4) = param_2;
            }
            if ((uVar15 & 0x100000000) != 0) {
              *(uint *)(lVar5 + (lVar13 + 2) * 4) = param_2;
            }
            uVar15 = NEON_cmeq(uVar14,CONCAT44(param_1,param_1),4);
            if ((uVar15 & 1) != 0) {
              *(uint *)(lVar5 + (lVar8 + 4) * 4) = param_2;
            }
            if ((uVar15 & 0x100000000) != 0) {
              *(uint *)(lVar5 + (lVar13 + 4) * 4) = param_2;
            }
            uVar10 = uVar10 - 4;
            lVar8 = lVar8 + 4;
            lVar13 = lVar13 + 4;
          } while (uVar10 != 0);
          if (uVar9 == uVar7) goto LAB_00c3fbe8;
        }
        lVar8 = uVar7 - uVar9;
        puVar6 = (uint *)(lVar5 + uVar9 * 4 + 8);
        do {
          if (*puVar6 == param_1) {
            *puVar6 = param_2;
          }
          puVar6 = puVar6 + 1;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
LAB_00c3fbe8:
      uVar12 = (ulong)((int)uVar12 + 1);
    } while (uVar12 < uVar4);
  }
  return;
}


