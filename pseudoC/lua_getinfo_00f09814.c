// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_getinfo
// Entry Point: 00f09814
// Size: 812 bytes
// Signature: undefined __cdecl lua_getinfo(lua_State * param_1, int param_2, char * param_3, lua_Debug * param_4)


/* lua_getinfo(lua_State*, int, char const*, lua_Debug*) */

undefined8 lua_getinfo(lua_State *param_1,int param_2,char *param_3,lua_Debug *param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  if (param_2 < 0) {
    lVar5 = 0;
    lVar8 = *(long *)(*(long *)(param_1 + 8) + (long)param_2 * 0x10);
  }
  else {
    if ((uint)((int)((ulong)(*(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x40)) >> 3) *
              -0x33333333) <= (uint)param_2) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0x20) + (ulong)(uint)param_2 * -0x28;
    lVar8 = **(long **)(lVar5 + 8);
  }
  if (lVar8 == 0) {
    return 0;
  }
  pcVar1 = param_3;
LAB_00f098bc:
  switch(*pcVar1) {
  case 'a':
    if (*(char *)(lVar8 + 3) == '\0') {
      pcVar1 = pcVar1 + 1;
      param_4[0x22] = *(lua_Debug *)(*(long *)(lVar8 + 0x18) + 0x82);
      param_4[0x21] = *(lua_Debug *)(*(long *)(lVar8 + 0x18) + 0x81);
    }
    else {
      *(undefined2 *)(param_4 + 0x21) = 0x100;
      pcVar1 = pcVar1 + 1;
    }
    goto LAB_00f098bc;
  case 'b':
  case 'c':
  case 'd':
  case 'e':
  case 'f':
  case 'g':
  case 'h':
  case 'i':
  case 'j':
  case 'k':
  case 'm':
  case 'o':
  case 'p':
  case 'q':
  case 'r':
  case 't':
    break;
  case 'l':
    if (lVar5 == 0) {
      if (*(char *)(lVar8 + 3) == '\0') {
        pcVar1 = pcVar1 + 1;
        *(undefined4 *)(param_4 + 0x1c) = *(undefined4 *)(*(long *)(lVar8 + 0x18) + 0x7c);
      }
      else {
        pcVar1 = pcVar1 + 1;
        *(undefined4 *)(param_4 + 0x1c) = 0xffffffff;
      }
    }
    else if (*(int *)((long)*(long **)(lVar5 + 8) + 0xc) == 7) {
      lVar4 = **(long **)(lVar5 + 8);
      if (*(char *)(lVar4 + 3) == '\0') {
        uVar6 = *(ulong *)(lVar5 + 0x18);
        lVar4 = *(long *)(lVar4 + 0x18);
        if (uVar6 != 0) {
          uVar6 = (ulong)((int)(uVar6 - *(long *)(lVar4 + 0x10) >> 2) - 1);
        }
        if (*(long *)(lVar4 + 0x20) == 0) {
          *(undefined4 *)(param_4 + 0x1c) = 0;
          pcVar1 = pcVar1 + 1;
        }
        else {
          pcVar1 = pcVar1 + 1;
          *(uint *)(param_4 + 0x1c) =
               *(int *)(*(long *)(lVar4 + 0x28) +
                       (long)((int)uVar6 >> (*(uint *)(lVar4 + 0x78) & 0x1f)) * 4) +
               (uint)*(byte *)(*(long *)(lVar4 + 0x20) + (long)(int)uVar6);
        }
      }
      else {
        pcVar1 = pcVar1 + 1;
        *(undefined4 *)(param_4 + 0x1c) = 0xffffffff;
      }
    }
    else {
      pcVar1 = pcVar1 + 1;
      *(undefined4 *)(param_4 + 0x1c) = 0xffffffff;
    }
    goto LAB_00f098bc;
  case 'n':
    if (lVar5 == 0) {
      if (*(char *)(lVar8 + 3) == '\0') {
        lVar4 = *(long *)(*(long *)(lVar8 + 0x18) + 0x48);
        if (lVar4 != 0) goto LAB_00f09a30;
      }
      else {
        lVar4 = *(long *)(lVar8 + 0x28);
        if (lVar4 != 0) goto LAB_00f098b4;
      }
LAB_00f098b0:
      lVar4 = 0;
    }
    else {
      lVar4 = **(long **)(lVar5 + 8);
      if (*(char *)(lVar4 + 3) == '\0') {
        lVar4 = *(long *)(*(long *)(lVar4 + 0x18) + 0x48);
        if (lVar4 == 0) goto LAB_00f098b0;
LAB_00f09a30:
        lVar4 = lVar4 + 0x18;
      }
      else {
        lVar4 = *(long *)(lVar4 + 0x28);
        if (lVar4 == 0) goto LAB_00f098b0;
      }
    }
LAB_00f098b4:
    *(long *)param_4 = lVar4;
    break;
  case 's':
    if (*(char *)(lVar8 + 3) == '\0') {
      lVar4 = *(long *)(lVar8 + 0x18);
      *(undefined **)(param_4 + 8) = &DAT_00516985;
      puVar2 = (undefined *)(*(long *)(lVar4 + 0x40) + 0x18);
      *(undefined **)(param_4 + 0x10) = puVar2;
      uVar3 = *(undefined4 *)(*(long *)(lVar8 + 0x18) + 0x7c);
    }
    else {
      uVar3 = 0xffffffff;
      *(undefined **)(param_4 + 8) = &DAT_004d57d8;
      *(undefined **)(param_4 + 0x10) = &DAT_004ce329;
      puVar2 = &DAT_004ce329;
    }
    *(undefined4 *)(param_4 + 0x18) = uVar3;
    FUN_00f11458(param_4 + 0x23,puVar2,0x100);
    pcVar1 = pcVar1 + 1;
    goto LAB_00f098bc;
  case 'u':
    goto switchD_00f098d8_caseD_75;
  default:
    if (*pcVar1 == '\0') {
      pcVar1 = strchr(param_3,0x66);
      if (pcVar1 == (char *)0x0) {
        return 1;
      }
      if (((byte)param_1[1] >> 2 & 1) != 0) {
        FUN_00f0ca20(param_1,param_1,param_1 + 0x68);
      }
      plVar7 = *(long **)(param_1 + 8);
      *plVar7 = lVar8;
      lVar8 = *(long *)(param_1 + 0x28);
      *(undefined4 *)((long)plVar7 + 0xc) = 7;
      lVar5 = *(long *)(param_1 + 8);
      if (lVar8 - lVar5 < 0x11) {
        FUN_00f0ab24(param_1,1);
        lVar5 = *(long *)(param_1 + 8);
      }
      *(long *)(param_1 + 8) = lVar5 + 0x10;
      return 1;
    }
  }
  pcVar1 = pcVar1 + 1;
  goto LAB_00f098bc;
switchD_00f098d8_caseD_75:
  pcVar1 = pcVar1 + 1;
  param_4[0x20] = *(lua_Debug *)(lVar8 + 4);
  goto LAB_00f098bc;
}


