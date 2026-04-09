// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f18ee8
// Entry Point: 00f18ee8
// Size: 440 bytes
// Signature: undefined FUN_00f18ee8(void)


void FUN_00f18ee8(lua_State *param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  undefined8 uVar15;
  
  lVar7 = (*(long **)(param_1 + 0x10))[(ulong)(param_2 - 1) * 2];
  if (*(char *)(lVar7 + 4) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00f09e04(param_1);
  }
  lVar13 = **(long **)(param_1 + 0x10);
  uVar4 = param_4 - param_3;
  uVar14 = param_3 - 1;
  uVar2 = *(uint *)(lVar13 + 8);
  if (uVar14 < uVar2) {
    uVar3 = *(uint *)(lVar7 + 8);
    uVar11 = param_5 - 1;
    if ((uVar11 < uVar3 && param_4 <= uVar2) && uVar4 + param_5 < uVar3 ||
        (uVar11 < uVar3 && param_4 <= uVar2) && uVar4 + param_5 == uVar3) {
      lVar8 = *(long *)(lVar13 + 0x18);
      lVar9 = *(long *)(lVar7 + 0x18);
      if ((((int)param_4 < param_5) || (param_5 - param_3 == 0 || param_5 < param_3)) ||
         ((param_2 != 1 && (lVar13 != lVar7)))) {
        if (-1 < (int)uVar4) {
          uVar10 = (ulong)(uVar4 + 1);
          do {
            puVar5 = (undefined8 *)(lVar8 + (long)(int)uVar14 * 0x10);
            uVar15 = *puVar5;
            uVar14 = uVar14 + 1;
            uVar10 = uVar10 - 1;
            puVar6 = (undefined8 *)(lVar9 + (long)(int)uVar11 * 0x10);
            puVar6[1] = puVar5[1];
            *puVar6 = uVar15;
            uVar11 = uVar11 + 1;
          } while (uVar10 != 0);
        }
      }
      else if (-1 < (int)uVar4) {
        lVar13 = (ulong)uVar4 + 1;
        iVar12 = param_4 - 1;
        do {
          iVar1 = (param_5 - param_3) + iVar12;
          puVar5 = (undefined8 *)(lVar8 + (long)iVar12 * 0x10);
          uVar15 = *puVar5;
          lVar13 = lVar13 + -1;
          iVar12 = iVar12 + -1;
          puVar6 = (undefined8 *)(lVar9 + (long)iVar1 * 0x10);
          puVar6[1] = puVar5[1];
          *puVar6 = uVar15;
        } while (lVar13 != 0);
      }
      if ((*(byte *)(lVar7 + 1) >> 2 & 1) == 0) {
        return;
      }
      FUN_00f0ca20(param_1,lVar7,lVar7 + 0x28);
      return;
    }
  }
  if ((((int)param_4 < param_5) || (param_5 - param_3 == 0 || param_5 < param_3)) ||
     (lVar13 != lVar7)) {
    if (-1 < (int)uVar4) {
      do {
        lua_rawgeti(param_1,1,param_3);
        lua_rawseti(param_1,param_2,param_5);
        param_3 = param_3 + 1;
        param_5 = param_5 + 1;
      } while (param_4 + 1 != param_3);
    }
  }
  else if (-1 < (int)uVar4) {
    do {
      lua_rawgeti(param_1,1,param_4);
      lua_rawseti(param_1,param_2,(param_5 - param_3) + param_4);
      param_4 = param_4 - 1;
    } while (uVar14 != param_4);
  }
  return;
}


