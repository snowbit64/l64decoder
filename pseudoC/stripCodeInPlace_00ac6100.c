// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stripCodeInPlace
// Entry Point: 00ac6100
// Size: 472 bytes
// Signature: undefined __cdecl stripCodeInPlace(uint * param_1, uint * param_2)


/* SpirvUtil::stripCodeInPlace(unsigned int*, unsigned int&) */

void SpirvUtil::stripCodeInPlace(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  uint *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  
  uVar2 = *param_2;
  puVar7 = param_1 + 5;
  if (5 < uVar2) {
    puVar18 = puVar7;
    do {
      uVar3 = *puVar18;
      uVar4 = uVar3 >> 0x10;
      uVar17 = (ulong)uVar4;
      uVar1 = uVar3 & 0xffff;
      if (uVar1 < 0x13d) {
        if (6 < uVar1 - 2) {
          if (uVar1 == 10) {
            puVar8 = puVar18 + 1;
            iVar6 = strcmp((char *)puVar8,"SPV_GOOGLE_decorate_string");
            if (((iVar6 == 0) ||
                (iVar6 = strcmp((char *)puVar8,"SPV_GOOGLE_hlsl_functionality1"), iVar6 == 0)) ||
               (iVar6 = strcmp((char *)puVar8,"SPV_GOOGLE_user_type"), iVar6 == 0))
            goto LAB_00ac6154;
          }
          goto LAB_00ac6200;
        }
      }
      else if (uVar1 < 0x1600) {
        if (((uVar1 != 0x13d) && (uVar1 != 0x14a)) &&
           ((uVar1 != 0x14c || (puVar18[2] >> 1 != 0xb01)))) {
LAB_00ac6200:
          if (0xffff < uVar3) {
            if (uVar4 < 2) {
              uVar4 = 1;
            }
            uVar17 = (ulong)uVar4;
            puVar8 = puVar7 + 1;
            *puVar7 = uVar3;
            if (0x1ffff < uVar3) {
              uVar10 = uVar17 - 1;
              if ((uVar10 < 8) || ((puVar8 < puVar18 + uVar17 && (puVar18 + 1 < puVar7 + uVar17))))
              {
                uVar12 = 1;
              }
              else {
                uVar13 = uVar10 & 0xfffffffffffffff8;
                puVar14 = (undefined8 *)(puVar7 + 5);
                uVar12 = uVar13 | 1;
                puVar15 = (undefined8 *)(puVar18 + 5);
                puVar8 = puVar8 + uVar13;
                uVar16 = uVar13;
                do {
                  puVar5 = puVar15 + -1;
                  uVar19 = puVar15[-2];
                  uVar21 = puVar15[1];
                  uVar20 = *puVar15;
                  puVar15 = puVar15 + 4;
                  uVar16 = uVar16 - 8;
                  puVar14[-1] = *puVar5;
                  puVar14[-2] = uVar19;
                  puVar14[1] = uVar21;
                  *puVar14 = uVar20;
                  puVar14 = puVar14 + 4;
                } while (uVar16 != 0);
                if (uVar10 == uVar13) goto LAB_00ac6268;
              }
              lVar9 = uVar17 - uVar12;
              puVar7 = puVar8;
              puVar11 = puVar18 + uVar12;
              do {
                lVar9 = lVar9 + -1;
                puVar8 = puVar7 + 1;
                *puVar7 = *puVar11;
                puVar7 = puVar8;
                puVar11 = puVar11 + 1;
              } while (lVar9 != 0);
            }
LAB_00ac6268:
            uVar17 = (ulong)*(ushort *)((long)puVar18 + 2);
            puVar7 = puVar8;
          }
        }
      }
      else if (1 < uVar1 - 0x1600) goto LAB_00ac6200;
LAB_00ac6154:
      puVar18 = puVar18 + uVar17;
    } while (puVar18 < param_1 + uVar2);
  }
  *param_2 = (uint)((ulong)((long)puVar7 - (long)param_1) >> 2);
  return;
}


