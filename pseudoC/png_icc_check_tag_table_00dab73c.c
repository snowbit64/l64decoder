// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: png_icc_check_tag_table
// Entry Point: 00dab73c
// Size: 268 bytes
// Signature: undefined png_icc_check_tag_table(void)


undefined8
png_icc_check_tag_table
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint *puVar5;
  
  uVar4 = (*(uint *)(param_5 + 0x80) & 0xff00ff00) >> 8 |
          (*(uint *)(param_5 + 0x80) & 0xff00ff) << 8;
  uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
  if (uVar4 != 0) {
    puVar5 = (uint *)(param_5 + 0x84);
    do {
      uVar3 = ((ulong)*puVar5 << 0x20 & 0xff00ff00ff00ff00) >> 8 |
              ((ulong)*puVar5 << 0x20 & 0xff00ff00ff00ff) << 8;
      uVar3 = ((uVar3 & 0xffff0000ffff0000) >> 0x10 | uVar3 << 0x10) >> 0x20;
      uVar1 = (uint)*(byte *)(puVar5 + 1) << 0x18 | (uint)*(byte *)((long)puVar5 + 5) << 0x10 |
              (uint)*(byte *)((long)puVar5 + 6) << 8 | (uint)*(byte *)((long)puVar5 + 7);
      if ((param_4 < uVar1) ||
         (uVar2 = (puVar5[2] & 0xff00ff00) >> 8 | (puVar5[2] & 0xff00ff) << 8,
         param_4 - uVar1 < (uVar2 >> 0x10 | uVar2 << 0x10))) {
        FUN_00daaff8(param_1,param_2,param_3,uVar3,"ICC profile tag outside profile");
        return 0;
      }
      if ((*(byte *)((long)puVar5 + 7) & 3) != 0) {
        FUN_00daaff8(param_1,0,param_3,uVar3,"ICC profile tag start not a multiple of 4");
      }
      uVar4 = uVar4 - 1;
      puVar5 = puVar5 + 3;
    } while (uVar4 != 0);
  }
  return 1;
}


