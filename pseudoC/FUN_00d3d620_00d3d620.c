// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3d620
// Entry Point: 00d3d620
// Size: 84 bytes
// Signature: undefined FUN_00d3d620(void)


undefined8
FUN_00d3d620(undefined8 param_1,byte **param_2,byte *param_3,ushort **param_4,ushort *param_5)

{
  byte *pbVar1;
  ushort *puVar2;
  
  pbVar1 = *param_2;
  if (pbVar1 < param_3) {
    puVar2 = *param_4;
    do {
      if (param_5 <= puVar2) {
        if (puVar2 != param_5) {
          return 0;
        }
        return 2;
      }
      *param_2 = pbVar1 + 1;
      puVar2 = *param_4 + 1;
      **param_4 = (ushort)*pbVar1;
      *param_4 = puVar2;
      pbVar1 = *param_2;
    } while (pbVar1 < param_3);
  }
  return 0;
}


