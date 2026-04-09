// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: LzmaEnc_WriteProperties
// Entry Point: 00d9b604
// Size: 1140 bytes
// Signature: undefined LzmaEnc_WriteProperties(void)


undefined8 LzmaEnc_WriteProperties(long param_1,char *param_2,ulong *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  
  if (*param_3 < 5) {
    return 5;
  }
  uVar4 = *(undefined4 *)(param_1 + 0x33bd8);
  uVar1 = *(undefined4 *)(param_1 + 0x33bdc);
  uVar2 = *(undefined4 *)(param_1 + 0x33bd4);
  uVar3 = *(uint *)(param_1 + 0x3d358);
  *param_3 = 5;
  *param_2 = ((char)uVar1 * '\x05' + (char)uVar4) * '\t' + (char)uVar2;
  if (uVar3 < 0x1001) {
    uVar4 = 0x1000;
  }
  else {
    uVar4 = 0x1800;
    if (0x1800 < uVar3) {
      if (uVar3 < 0x2001) {
        *(undefined4 *)(param_2 + 1) = 0x2000;
        return 0;
      }
      if (uVar3 < 0x3001) {
        *(undefined4 *)(param_2 + 1) = 0x3000;
        return 0;
      }
      if (uVar3 < 0x4001) {
        *(undefined4 *)(param_2 + 1) = 0x4000;
        return 0;
      }
      if (uVar3 < 0x6001) {
        *(undefined4 *)(param_2 + 1) = 0x6000;
        return 0;
      }
      if (uVar3 < 0x8001) {
        *(undefined4 *)(param_2 + 1) = 0x8000;
        return 0;
      }
      if (uVar3 < 0xc001) {
        *(undefined4 *)(param_2 + 1) = 0xc000;
        return 0;
      }
      if (uVar3 < 0x10001) {
        *(undefined4 *)(param_2 + 1) = 0x10000;
        return 0;
      }
      if (uVar3 < 0x18001) {
        *(undefined4 *)(param_2 + 1) = 0x18000;
        return 0;
      }
      if (uVar3 < 0x20001) {
        *(undefined4 *)(param_2 + 1) = 0x20000;
        return 0;
      }
      if (uVar3 < 0x30001) {
        *(undefined4 *)(param_2 + 1) = 0x30000;
        return 0;
      }
      if (uVar3 < 0x40001) {
        *(undefined4 *)(param_2 + 1) = 0x40000;
        return 0;
      }
      if (uVar3 < 0x60001) {
        *(undefined4 *)(param_2 + 1) = 0x60000;
        return 0;
      }
      if (uVar3 < 0x80001) {
        *(undefined4 *)(param_2 + 1) = 0x80000;
        return 0;
      }
      if (uVar3 < 0xc0001) {
        *(undefined4 *)(param_2 + 1) = 0xc0000;
        return 0;
      }
      if (uVar3 < 0x100001) {
        *(undefined4 *)(param_2 + 1) = 0x100000;
        return 0;
      }
      if (uVar3 < 0x180001) {
        *(undefined4 *)(param_2 + 1) = 0x180000;
        return 0;
      }
      if (uVar3 < 0x200001) {
        *(undefined4 *)(param_2 + 1) = 0x200000;
        return 0;
      }
      if (uVar3 < 0x300001) {
        *(undefined4 *)(param_2 + 1) = 0x300000;
        return 0;
      }
      if (uVar3 < 0x400001) {
        *(undefined4 *)(param_2 + 1) = 0x400000;
        return 0;
      }
      if (uVar3 < 0x600001) {
        *(undefined4 *)(param_2 + 1) = 0x600000;
        return 0;
      }
      if (uVar3 < 0x800001) {
        *(undefined4 *)(param_2 + 1) = 0x800000;
        return 0;
      }
      if (uVar3 < 0xc00001) {
        *(undefined4 *)(param_2 + 1) = 0xc00000;
        return 0;
      }
      if (uVar3 < 0x1000001) {
        *(undefined4 *)(param_2 + 1) = 0x1000000;
        return 0;
      }
      if (uVar3 < 0x1800001) {
        *(undefined4 *)(param_2 + 1) = 0x1800000;
        return 0;
      }
      if (uVar3 < 0x2000001) {
        *(undefined4 *)(param_2 + 1) = 0x2000000;
        return 0;
      }
      if (uVar3 < 0x3000001) {
        *(undefined4 *)(param_2 + 1) = 0x3000000;
        return 0;
      }
      if (uVar3 < 0x4000001) {
        *(undefined4 *)(param_2 + 1) = 0x4000000;
        return 0;
      }
      if (uVar3 < 0x6000001) {
        *(undefined4 *)(param_2 + 1) = 0x6000000;
        return 0;
      }
      if (uVar3 < 0x8000001) {
        *(undefined4 *)(param_2 + 1) = 0x8000000;
        return 0;
      }
      if (uVar3 < 0xc000001) {
        *(undefined4 *)(param_2 + 1) = 0xc000000;
        return 0;
      }
      if (uVar3 < 0x10000001) {
        *(undefined4 *)(param_2 + 1) = 0x10000000;
        return 0;
      }
      if (0x18000000 < uVar3) {
        if (uVar3 < 0x20000001) {
          *(undefined4 *)(param_2 + 1) = 0x20000000;
          return 0;
        }
        if (uVar3 < 0x30000001) {
          *(undefined4 *)(param_2 + 1) = 0x30000000;
          return 0;
        }
        if (uVar3 < 0x40000001) {
          *(undefined4 *)(param_2 + 1) = 0x40000000;
          return 0;
        }
        if (0x60000000 < uVar3) {
          if (0x80000000 < uVar3) {
            if (uVar3 < 0xc0000001) {
              uVar3 = 0xc0000000;
            }
            *(uint *)(param_2 + 1) = uVar3;
            return 0;
          }
          *(undefined4 *)(param_2 + 1) = 0x80000000;
          return 0;
        }
        *(undefined4 *)(param_2 + 1) = 0x60000000;
        return 0;
      }
      *(undefined4 *)(param_2 + 1) = 0x18000000;
      return 0;
    }
  }
  *(undefined4 *)(param_2 + 1) = uVar4;
  return 0;
}


