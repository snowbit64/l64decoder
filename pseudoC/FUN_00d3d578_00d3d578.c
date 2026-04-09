// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d3d578
// Entry Point: 00d3d578
// Size: 168 bytes
// Signature: undefined FUN_00d3d578(void)


undefined8
FUN_00d3d578(undefined8 param_1,byte **param_2,byte *param_3,byte **param_4,byte *param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = *param_2;
  do {
    if (pbVar2 == param_3) {
      return 0;
    }
    while( true ) {
      bVar1 = *pbVar2;
      pbVar3 = *param_4;
      if (-1 < (char)bVar1) break;
      if ((long)param_5 - (long)pbVar3 < 2) {
        return 2;
      }
      *param_4 = pbVar3 + 1;
      *pbVar3 = (byte)((uint)(int)(char)bVar1 >> 6) & 3 | 0xc0;
      pbVar2 = *param_4;
      *param_4 = pbVar2 + 1;
      *pbVar2 = bVar1 & 0x3f | 0x80;
      pbVar2 = *param_2 + 1;
      *param_2 = pbVar2;
      if (pbVar2 == param_3) {
        return 0;
      }
    }
    if (pbVar3 == param_5) {
      return 2;
    }
    *param_2 = pbVar2 + 1;
    pbVar3 = *param_4;
    bVar1 = *pbVar2;
    *param_4 = pbVar3 + 1;
    *pbVar3 = bVar1;
    pbVar2 = *param_2;
  } while( true );
}


