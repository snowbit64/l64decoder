// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00af6bb0
// Entry Point: 00af6bb0
// Size: 372 bytes
// Signature: undefined FUN_00af6bb0(void)


void FUN_00af6bb0(undefined8 *param_1,ulong param_2,ulong param_3)

{
  ulong *puVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  size_t __n;
  
  uVar3 = param_1[1];
  uVar4 = uVar3 + param_2;
  param_1[1] = uVar4;
  if ((uVar3 == 0) || (0x3f < (uVar4 - 1 ^ uVar3 - 1))) {
    param_1 = (undefined8 *)*param_1;
    if (uVar4 < 0x41) {
      *param_1 = 0;
    }
    else {
      *(undefined8 *)((long)param_1 + (uVar4 - 1 >> 3 & 0x1ffffffffffffff8)) = 0;
    }
  }
  else {
    param_1 = (undefined8 *)*param_1;
  }
  if (param_2 != 0) {
    uVar2 = (uint)uVar3 & 0x3f;
    puVar1 = (ulong *)((long)param_1 + (uVar3 >> 3 & 0x1ffffffffffffff8));
    puVar5 = puVar1;
    if ((param_3 & 1) == 0) {
      if ((uVar3 & 0x3f) != 0) {
        uVar3 = (ulong)(0x40 - uVar2);
        uVar4 = param_2;
        if (uVar3 <= param_2) {
          uVar4 = uVar3;
        }
        param_2 = param_2 - uVar4;
        puVar5 = puVar1 + 1;
        *puVar1 = *puVar1 & (0xffffffffffffffffU >> (uVar3 - uVar4 & 0x3f) & -1L << uVar2 ^
                            0xffffffffffffffff);
      }
      __n = (param_2 >> 6) * 8;
      memset(puVar5,0,__n);
      if ((param_2 & 0x3f) == 0) {
        return;
      }
      uVar4 = puVar5[param_2 >> 6] &
              (0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f) ^ 0xffffffffffffffff);
    }
    else {
      if ((uVar3 & 0x3f) != 0) {
        uVar3 = (ulong)(0x40 - uVar2);
        uVar4 = param_2;
        if (uVar3 <= param_2) {
          uVar4 = uVar3;
        }
        param_2 = param_2 - uVar4;
        puVar5 = puVar1 + 1;
        *puVar1 = *puVar1 | 0xffffffffffffffffU >> (uVar3 - uVar4 & 0x3f) & -1L << uVar2;
      }
      __n = (param_2 >> 6) * 8;
      memset(puVar5,0xff,__n);
      if ((param_2 & 0x3f) == 0) {
        return;
      }
      uVar4 = puVar5[param_2 >> 6] | 0xffffffffffffffffU >> (-(param_2 & 0x3f) & 0x3f);
    }
    *(ulong *)((long)puVar5 + __n) = uVar4;
  }
  return;
}


