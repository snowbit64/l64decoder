// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00f162a4
// Entry Point: 00f162a4
// Size: 1172 bytes
// Signature: undefined FUN_00f162a4(void)


undefined8 FUN_00f162a4(lua_State **param_1,byte **param_2,uint *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar7 = *param_2;
  pbVar1 = pbVar7 + 1;
  *param_2 = pbVar1;
  bVar2 = *pbVar7;
  *param_3 = 0;
  switch((uint)bVar2) {
  case 0x20:
    return 8;
  case 0x21:
    if (*pbVar1 - 0x3a < 0xfffffff6) {
      *(undefined4 *)((long)param_1 + 0xc) = 8;
      return 8;
    }
    uVar5 = 0;
    pbVar7 = pbVar7 + 2;
    do {
      *param_2 = pbVar7;
      iVar3 = (uint)pbVar7[-1] + (int)uVar5 * 10;
      uVar6 = iVar3 - 0x30;
      uVar5 = (ulong)uVar6;
      uVar4 = *pbVar7 - 0x30;
      if (9 < uVar4) break;
      pbVar7 = pbVar7 + 1;
    } while ((int)uVar6 < 0xccccccc);
    if ((0x40000000 >= (int)uVar6 && 8 < uVar4) && (0x40000000 < (int)uVar6 || uVar4 != 9)) {
      if (iVar3 - 0x41U < 0xfffffff0) {
                    /* WARNING: Subroutine does not return */
        luaL_errorL(*param_1,"integral size (%d) out of limits [1,%d]",uVar5,0x10);
      }
      *(uint *)((long)param_1 + 0xc) = uVar6;
      return 8;
    }
    break;
  default:
                    /* WARNING: Subroutine does not return */
    luaL_errorL(*param_1,"invalid format option \'%c\'",(ulong)(uint)bVar2);
  case 0x3c:
  case 0x3d:
    *(undefined4 *)(param_1 + 1) = 1;
    return 8;
  case 0x3e:
    *(undefined4 *)(param_1 + 1) = 0;
    return 8;
  case 0x42:
    *param_3 = 1;
    return 1;
  case 0x48:
    *param_3 = 2;
    return 1;
  case 0x49:
    if (*pbVar1 - 0x3a < 0xfffffff6) {
      uVar6 = 4;
    }
    else {
      uVar6 = 0;
      pbVar7 = pbVar7 + 2;
      do {
        *param_2 = pbVar7;
        iVar3 = (uint)pbVar7[-1] + uVar6 * 10;
        uVar4 = *pbVar7 - 0x30;
        uVar6 = iVar3 - 0x30;
        if (9 < uVar4) break;
        pbVar7 = pbVar7 + 1;
      } while ((int)uVar6 < 0xccccccc);
      if ((0x40000000 < (int)uVar6 || uVar4 < 9) || 0x40000000 >= (int)uVar6 && uVar4 == 9) break;
      if (iVar3 - 0x41U < 0xfffffff0) {
LAB_00f166e0:
                    /* WARNING: Subroutine does not return */
        luaL_errorL(*param_1,"integral size (%d) out of limits [1,%d]",(ulong)uVar6,0x10);
      }
    }
    *param_3 = uVar6;
    return 1;
  case 0x4a:
  case 0x54:
    *param_3 = 4;
    return 1;
  case 0x4c:
    *param_3 = 8;
    return 1;
  case 0x58:
    return 7;
  case 0x62:
    *param_3 = 1;
    return 0;
  case 99:
    if (*pbVar1 - 0x3a < 0xfffffff6) {
      *param_3 = 0xffffffff;
    }
    else {
      uVar6 = 0;
      pbVar7 = pbVar7 + 2;
      do {
        *param_2 = pbVar7;
        uVar4 = *pbVar7 - 0x30;
        uVar6 = ((uint)pbVar7[-1] + uVar6 * 10) - 0x30;
        if (9 < uVar4) break;
        pbVar7 = pbVar7 + 1;
      } while ((int)uVar6 < 0xccccccc);
      if ((0x40000000 < (int)uVar6 || uVar4 < 9) || 0x40000000 >= (int)uVar6 && uVar4 == 9) break;
      *param_3 = uVar6;
      if (uVar6 != 0xffffffff) {
        return 3;
      }
    }
                    /* WARNING: Subroutine does not return */
    luaL_errorL(*param_1,"missing size for format option \'c\'");
  case 100:
  case 0x6e:
    *param_3 = 8;
    return 2;
  case 0x66:
    *param_3 = 4;
    return 2;
  case 0x68:
    *param_3 = 2;
    return 0;
  case 0x69:
    if (*pbVar1 - 0x3a < 0xfffffff6) goto switchD_00f162e4_caseD_6a;
    uVar6 = 0;
    pbVar7 = pbVar7 + 2;
    do {
      *param_2 = pbVar7;
      iVar3 = (uint)pbVar7[-1] + uVar6 * 10;
      uVar4 = *pbVar7 - 0x30;
      uVar6 = iVar3 - 0x30;
      if (9 < uVar4) break;
      pbVar7 = pbVar7 + 1;
    } while ((int)uVar6 < 0xccccccc);
    if ((0x40000000 >= (int)uVar6 && 8 < uVar4) && (0x40000000 < (int)uVar6 || uVar4 != 9)) {
      if (iVar3 - 0x41U < 0xfffffff0) goto LAB_00f166e0;
      goto LAB_00f16648;
    }
    break;
  case 0x6a:
switchD_00f162e4_caseD_6a:
    *param_3 = 4;
    return 0;
  case 0x6c:
    uVar6 = 8;
LAB_00f16648:
    *param_3 = uVar6;
    return 0;
  case 0x73:
    if (*pbVar1 - 0x3a < 0xfffffff6) {
      uVar6 = 4;
    }
    else {
      uVar6 = 0;
      pbVar7 = pbVar7 + 2;
      do {
        *param_2 = pbVar7;
        iVar3 = (uint)pbVar7[-1] + uVar6 * 10;
        uVar4 = *pbVar7 - 0x30;
        uVar6 = iVar3 - 0x30;
        if (9 < uVar4) break;
        pbVar7 = pbVar7 + 1;
      } while ((int)uVar6 < 0xccccccc);
      if ((0x40000000 < (int)uVar6 || uVar4 < 9) || 0x40000000 >= (int)uVar6 && uVar4 == 9) break;
      if (iVar3 - 0x41U < 0xfffffff0) goto LAB_00f166e0;
    }
    *param_3 = uVar6;
    return 4;
  case 0x78:
    *param_3 = 1;
    return 6;
  case 0x7a:
    return 5;
  }
                    /* WARNING: Subroutine does not return */
  luaL_errorL(*param_1,"size specifier is too large");
}


