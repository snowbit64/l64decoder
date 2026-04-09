// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: dumpAll
// Entry Point: 00fa85d8
// Size: 64 bytes
// Signature: undefined dumpAll(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CProfileManager::dumpAll() */

void CProfileManager::dumpAll(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)operator_new(0x10);
  uVar1 = DAT_02125d98;
  *puVar2 = &Root;
  puVar2[1] = uVar1;
  dumpRecursive((CProfileIterator *)puVar2,0);
  operator_delete(puVar2);
  return;
}


