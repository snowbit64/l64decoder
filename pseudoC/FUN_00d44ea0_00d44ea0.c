// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d44ea0
// Entry Point: 00d44ea0
// Size: 300 bytes
// Signature: undefined FUN_00d44ea0(void)


undefined8 FUN_00d44ea0(long param_1,char *param_2,long param_3,char **param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (param_3 - (long)param_2 < 2) {
    return 0xffffffff;
  }
  if (*param_2 == '\0') {
    lVar1 = param_1 + 0x88;
    switch(*(undefined *)(lVar1 + (ulong)(byte)param_2[1])) {
    case 0x14:
      param_2 = param_2 + 2;
      uVar2 = 0x21;
LAB_00d44fbc:
      *param_4 = param_2;
      break;
    default:
      goto switchD_00d44eec_caseD_15;
    case 0x16:
    case 0x18:
      param_2 = param_2 + 2;
      uVar3 = param_3 - (long)param_2;
      if ((long)uVar3 < 2) {
        return 0xffffffff;
      }
      uVar2 = 0xffffffff;
      do {
        if ((*param_2 != '\0') || (0x1e < *(byte *)(lVar1 + (ulong)(byte)param_2[1])))
        goto LAB_00d44fb8;
        uVar4 = (uint)*(byte *)(lVar1 + (ulong)(byte)param_2[1]);
        if ((1 << (ulong)(uVar4 & 0x1f) & 0x1400000U) == 0) {
          if ((1 << (ulong)(uVar4 & 0x1f) & 0x200600U) == 0) {
            if (uVar4 == 0x1e) {
              if (uVar3 < 4) {
                return 0xffffffff;
              }
              if (((param_2[2] != '\0') || (0x1e < *(byte *)(lVar1 + (ulong)(byte)param_2[3]))) ||
                 ((1 << (ulong)(*(byte *)(lVar1 + (ulong)(byte)param_2[3]) & 0x1f) & 0x40200600U) ==
                  0)) goto LAB_00d44f70;
            }
LAB_00d44fb8:
            uVar2 = 0;
          }
          else {
LAB_00d44f70:
            uVar2 = 0x10;
          }
          goto LAB_00d44fbc;
        }
        param_2 = param_2 + 2;
        uVar3 = uVar3 - 2;
      } while (1 < (long)uVar3);
      break;
    case 0x1b:
      uVar2 = FUN_00d457d0(param_1,param_2 + 2);
      return uVar2;
    }
    return uVar2;
  }
switchD_00d44eec_caseD_15:
  *param_4 = param_2;
  return 0;
}


