// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3a894
// Entry Point: 00d3a894
// Size: 112 bytes
// Signature: undefined FUN_00d3a894(void)


undefined8 FUN_00d3a894(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(param_1 + 0x1d0))(*(undefined8 *)(param_1 + 0x1d8));
  if ((uVar1 & 0xffff0000) == 0) {
    uVar2 = (uint)(uVar1 >> 8) & 0xffffff;
    if (7 < uVar2 - 0xd8) {
      if (uVar2 == 0xff) {
        if ((uint)uVar1 >> 1 != 0x7fff) {
          return 0;
        }
      }
      else if (((uVar1 & 0xffffff00) != 0) || ((&DAT_01010fa8)[uVar1 & 0xffffffff] != '\0')) {
        return 0;
      }
    }
  }
  return 1;
}


