// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkGetAuthorization
// Entry Point: 00b3a7d4
// Size: 108 bytes
// Signature: undefined checkGetAuthorization(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* MasterServerManager::checkGetAuthorization() */

bool MasterServerManager::checkGetAuthorization(void)

{
  long in_x0;
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = *(undefined **)(in_x0 + 0x4b8);
  if (puVar2 == (undefined *)0x0) goto LAB_00b3a82c;
  *(undefined *)(in_x0 + 0x4c0) = *puVar2;
  if ((*(byte *)(in_x0 + 0x4c8) & 1) == 0) {
    *(undefined2 *)(in_x0 + 0x4c8) = 0;
    *puVar2 = 0;
    puVar1 = puVar2;
LAB_00b3a824:
    operator_delete(puVar1);
  }
  else {
    **(undefined **)(in_x0 + 0x4d8) = 0;
    puVar1 = *(undefined **)(in_x0 + 0x4b8);
    *(undefined8 *)(in_x0 + 0x4d0) = 0;
    *puVar2 = 0;
    if (puVar1 != (undefined *)0x0) goto LAB_00b3a824;
  }
  *(undefined8 *)(in_x0 + 0x4b8) = 0;
LAB_00b3a82c:
  return puVar2 != (undefined *)0x0;
}


