// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00c20d64
// Entry Point: 00c20d64
// Size: 108 bytes
// Signature: undefined FUN_00c20d64(void)


void FUN_00c20d64(long param_1,undefined8 param_2)

{
  bool bVar1;
  int iVar2;
  bool bVar3;
  
LAB_00c20d8c:
  do {
    bVar1 = false;
    while (bVar3 = bVar1, iVar2 = FUN_00c21e50(param_2), iVar2 != 10) {
      bVar1 = true;
      if (iVar2 != 0x2a) {
        if (iVar2 != 0x2f) goto LAB_00c20d8c;
        bVar1 = false;
        if (bVar3) {
          return;
        }
      }
    }
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  } while( true );
}


