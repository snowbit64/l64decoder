// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00d4428c
// Entry Point: 00d4428c
// Size: 168 bytes
// Signature: undefined FUN_00d4428c(void)


int FUN_00d4428c(long param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  
  iVar1 = (int)param_2;
LAB_00d442b0:
  do {
    for (; uVar2 = (uint)*param_2, 0xdb < *param_2; param_2 = param_2 + 2) {
      if (uVar2 != 0xff) {
        lVar3 = 2;
        if (3 < uVar2 - 0xdc) goto LAB_00d442ac;
        goto LAB_00d4432c;
      }
      if (0xfd < param_2[1]) goto LAB_00d4432c;
    }
    if (uVar2 - 0xd8 < 4) {
      lVar3 = 4;
    }
    else {
      lVar3 = 2;
      if (uVar2 == 0) {
        uVar2 = *(byte *)(param_1 + 0x88 + (ulong)param_2[1]) - 5;
        if ((0x18 < uVar2) || ((0x17e0007U >> (ulong)(uVar2 & 0x1f) & 1) == 0)) {
LAB_00d4432c:
          return (int)param_2 - iVar1;
        }
        param_2 = param_2 + *(long *)(&DAT_00547b38 + (long)(char)uVar2 * 8);
        goto LAB_00d442b0;
      }
    }
LAB_00d442ac:
    param_2 = param_2 + lVar3;
  } while( true );
}


