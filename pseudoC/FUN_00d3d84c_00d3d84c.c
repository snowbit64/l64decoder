// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3d84c
// Entry Point: 00d3d84c
// Size: 280 bytes
// Signature: undefined FUN_00d3d84c(void)


undefined8 FUN_00d3d84c(long param_1,byte *param_2,long param_3,byte **param_4)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  
  if (0 < param_3 - (long)param_2) {
    lVar1 = param_1 + 0x88;
    switch(*(undefined *)(lVar1 + (ulong)*param_2)) {
    case 0x14:
      *param_4 = param_2 + 1;
      return 0x21;
    default:
      *param_4 = param_2;
      return 0;
    case 0x16:
    case 0x18:
      param_2 = param_2 + 1;
      break;
    case 0x1b:
      uVar2 = FUN_00d3df1c(param_1,param_2 + 1);
      return uVar2;
    }
    for (uVar3 = param_3 - (long)param_2; 0 < (long)uVar3; uVar3 = uVar3 - 1) {
      if (0x1e < *(byte *)(lVar1 + (ulong)*param_2)) goto LAB_00d3d950;
      uVar4 = (uint)*(byte *)(lVar1 + (ulong)*param_2);
      if ((1 << (ulong)(uVar4 & 0x1f) & 0x1400000U) == 0) {
        if ((1 << (ulong)(uVar4 & 0x1f) & 0x200600U) == 0) {
          if (uVar4 == 0x1e) {
            if (uVar3 < 2) {
              return 0xffffffff;
            }
            if ((0x1e < *(byte *)(lVar1 + (ulong)param_2[1])) ||
               ((1 << (ulong)(*(byte *)(lVar1 + (ulong)param_2[1]) & 0x1f) & 0x40200600U) == 0))
            goto LAB_00d3d90c;
          }
LAB_00d3d950:
          *param_4 = param_2;
          return 0;
        }
LAB_00d3d90c:
        *param_4 = param_2;
        return 0x10;
      }
      param_2 = param_2 + 1;
    }
  }
  return 0xffffffff;
}


