// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d428f0
// Entry Point: 00d428f0
// Size: 520 bytes
// Signature: undefined FUN_00d428f0(void)


undefined8
FUN_00d428f0(long param_1,long param_2,uint param_3,byte *param_4,byte *param_5,byte **param_6)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  code **ppcVar4;
  undefined8 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar6;
  
  if (param_5 <= param_4) {
    return 0xfffffffc;
  }
  plVar6 = *(long **)(param_2 + 0x88);
  if (param_4 + 1 == param_5) {
    if (*(byte *)(param_2 + 0x85) - 3 < 3) {
      return 0xffffffff;
    }
    bVar1 = *param_4;
    uVar2 = bVar1 - 0xef;
    if ((uVar2 < 0x11) && ((1 << (ulong)(uVar2 & 0x1f) & 0x18001U) != 0)) {
      if ((param_3 != 1) || (*(byte *)(param_2 + 0x85) != 0)) {
        return 0xffffffff;
      }
    }
    else {
      if (bVar1 == 0) {
        return 0xffffffff;
      }
      if (bVar1 == 0x3c) {
        return 0xffffffff;
      }
    }
LAB_00d42ad0:
    ppcVar4 = *(code ***)(param_1 + (ulong)*(byte *)(param_2 + 0x85) * 8);
  }
  else {
    uVar3 = CONCAT11(*param_4,param_4[1]);
    if (0xfefe < uVar3) {
      if (uVar3 == 0xfffe) {
        if ((param_3 != 1) || (*(char *)(param_2 + 0x85) != '\0')) {
          *param_6 = param_4 + 2;
          *plVar6 = *(long *)(param_1 + 0x28);
          return 0xe;
        }
      }
      else {
        if (uVar3 != 0xfeff) goto LAB_00d42a70;
        if ((param_3 != 1) || (*(char *)(param_2 + 0x85) != '\0')) {
          *param_6 = param_4 + 2;
          *plVar6 = *(long *)(param_1 + 0x20);
          return 0xe;
        }
      }
      goto LAB_00d42ad0;
    }
    if (uVar3 != 0x3c00) {
      if (uVar3 == 0xefbb) {
        if (((param_3 != 1) || (5 < *(byte *)(param_2 + 0x85))) ||
           ((1 << (ulong)(*(byte *)(param_2 + 0x85) & 0x1f) & 0x39U) == 0)) {
          if (param_4 + 2 == param_5) {
            return 0xffffffff;
          }
          if (param_4[2] == 0xbf) {
            *param_6 = param_4 + 3;
            *plVar6 = *(long *)(param_1 + 0x10);
            return 0xe;
          }
        }
      }
      else {
LAB_00d42a70:
        if (*param_4 == 0) {
          if ((param_3 != 1) || (*(char *)(param_2 + 0x85) != '\x05')) {
            ppcVar4 = *(code ***)(param_1 + 0x20);
            goto LAB_00d42ad8;
          }
        }
        else if ((param_3 != 1) && (param_4[1] == 0)) {
          ppcVar4 = *(code ***)(param_1 + 0x28);
          *plVar6 = (long)ppcVar4;
          UNRECOVERED_JUMPTABLE = *ppcVar4;
          goto LAB_00d42ae0;
        }
      }
      goto LAB_00d42ad0;
    }
    if (*(char *)(param_2 + 0x85) == '\x04') {
      if (param_3 == 1) goto LAB_00d42ad0;
    }
    else if ((param_3 == 1) && (*(char *)(param_2 + 0x85) == '\x03')) goto LAB_00d42ad0;
    ppcVar4 = *(code ***)(param_1 + 0x28);
  }
LAB_00d42ad8:
  *plVar6 = (long)ppcVar4;
  UNRECOVERED_JUMPTABLE = ppcVar4[param_3];
LAB_00d42ae0:
                    /* WARNING: Could not recover jumptable at 0x00d42aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar5 = (*UNRECOVERED_JUMPTABLE)(ppcVar4,param_4,param_5,param_6);
  return uVar5;
}


