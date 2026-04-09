// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_colorspace_sync
// Entry Point: 00da9bec
// Size: 220 bytes
// Signature: undefined png_colorspace_sync(void)


void png_colorspace_sync(long param_1,long param_2)

{
  uint uVar1;
  ushort uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 8);
    uVar4 = *(undefined8 *)(param_1 + 0x514);
    uVar6 = *(undefined8 *)(param_1 + 0x4f0);
    uVar5 = *(undefined8 *)(param_1 + 0x4e8);
    uVar8 = *(undefined8 *)(param_1 + 0x500);
    uVar7 = *(undefined8 *)(param_1 + 0x4f8);
    *(undefined8 *)(param_2 + 0x78) = *(undefined8 *)(param_1 + 0x51c);
    *(undefined8 *)(param_2 + 0x70) = uVar4;
    *(undefined8 *)(param_2 + 0x4c) = uVar6;
    *(undefined8 *)(param_2 + 0x44) = uVar5;
    uVar9 = *(undefined8 *)(param_1 + 0x510);
    uVar6 = *(undefined8 *)(param_1 + 0x508);
    *(undefined8 *)(param_2 + 0x5c) = uVar8;
    *(undefined8 *)(param_2 + 0x54) = uVar7;
    uVar5 = *(undefined8 *)(param_1 + 0x4e0);
    uVar4 = *(undefined8 *)(param_1 + 0x4d8);
    uVar2 = *(ushort *)(param_2 + 0x7e);
    *(undefined8 *)(param_2 + 0x6c) = uVar9;
    *(undefined8 *)(param_2 + 100) = uVar6;
    *(undefined8 *)(param_2 + 0x3c) = uVar5;
    *(undefined8 *)(param_2 + 0x34) = uVar4;
    if (-1 < (short)uVar2) {
      uVar3 = (uVar2 & 2) << 1 | (uVar2 >> 7 & 1) << 0xb;
      if ((uVar2 & 1) == 0) {
        uVar3 = uVar3 | uVar1 & 0xfffff7fa;
      }
      else {
        uVar3 = uVar3 | uVar1 & 0xfffff7fb | 1;
      }
      *(uint *)(param_2 + 8) = uVar3;
      return;
    }
    uVar3 = *(uint *)(param_2 + 300);
    *(uint *)(param_2 + 8) = uVar1 & 0xffffe7fa;
    if ((uVar3 >> 4 & 1) != 0) {
      png_free(param_1,*(undefined8 *)(param_2 + 0x80));
      png_free(param_1,*(undefined8 *)(param_2 + 0x88));
      *(undefined8 *)(param_2 + 0x80) = 0;
      *(undefined8 *)(param_2 + 0x88) = 0;
      *(uint *)(param_2 + 8) = uVar1 & 0xffffe7fa;
    }
    *(uint *)(param_2 + 300) = uVar3 & 0xffffffef;
  }
  return;
}


