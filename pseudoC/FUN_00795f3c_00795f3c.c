// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00795f3c
// Entry Point: 00795f3c
// Size: 88 bytes
// Signature: undefined FUN_00795f3c(void)


void FUN_00795f3c(uint *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  if (DAT_010531f8 != (undefined8 *)0x0) {
    uVar1 = *param_1;
    puVar2 = &DAT_010531f8;
    puVar3 = DAT_010531f8;
    do {
      if (*(uint *)(puVar3 + 4) >= uVar1) {
        puVar2 = puVar3;
      }
      puVar3 = (undefined8 *)puVar3[*(uint *)(puVar3 + 4) < uVar1];
    } while (puVar3 != (undefined8 *)0x0);
    if (((undefined8 **)puVar2 != &DAT_010531f8) && (*(uint *)(puVar2 + 4) <= uVar1)) {
      *(uint *)(puVar2[5] + 8) = param_1[4];
    }
  }
  return;
}


