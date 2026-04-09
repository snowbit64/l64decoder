// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: th_decode_ctl
// Entry Point: 00dee104
// Size: 272 bytes
// Signature: undefined th_decode_ctl(void)


undefined8 th_decode_ctl(long param_1,undefined4 param_2,ulong *param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  
  uVar1 = 0xffffffe9;
  switch(param_2) {
  case 1:
    uVar1 = 0xffffffff;
    if ((param_1 != 0) && (param_3 != (ulong *)0x0)) {
      if (param_4 != 4) {
        return 0xfffffff6;
      }
      *(undefined4 *)param_3 = 7;
      return 0;
    }
    break;
  case 3:
    uVar1 = 0xffffffff;
    if ((param_1 != 0) && (param_3 != (ulong *)0x0)) {
      if (param_4 != 4) {
        return 0xfffffff6;
      }
      if (7 < *(uint *)param_3) {
        return 0xfffffff6;
      }
      *(uint *)(param_1 + 0xdf0c) = *(uint *)param_3;
      return 0;
    }
    break;
  case 5:
    uVar1 = 0xffffffff;
    if ((param_1 != 0) && (param_3 != (ulong *)0x0)) {
      if (param_4 != 8) {
        return 0xfffffff6;
      }
      uVar2 = *param_3;
      if ((long)uVar2 < 0) {
        return 0xfffffff6;
      }
      *(ulong *)(param_1 + 0x400) = uVar2;
      lVar3 = (uVar2 >> ((ulong)*(uint *)(param_1 + 0x3c) & 0x3f)) -
              (ulong)*(byte *)(param_1 + 0x409);
      *(long *)(param_1 + 0x3f0) = lVar3;
      *(ulong *)(param_1 + 0x3f8) =
           lVar3 + (uVar2 & (long)~(-1 << (ulong)(*(uint *)(param_1 + 0x3c) & 0x1f)));
      return 0;
    }
    break;
  case 7:
    uVar1 = 0xffffffff;
    if ((param_1 != 0) && (param_3 != (ulong *)0x0)) {
      if (param_4 != 0x10) {
        return 0xfffffff6;
      }
      uVar1 = 0;
      uVar2 = param_3[1];
      *(ulong *)(param_1 + 0xe178) = *param_3;
      *(ulong *)(param_1 + 0xe180) = uVar2;
    }
  }
  return uVar1;
}


