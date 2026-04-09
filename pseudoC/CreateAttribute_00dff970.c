// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: CreateAttribute
// Entry Point: 00dff970
// Size: 112 bytes
// Signature: undefined CreateAttribute(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::XMLElement::CreateAttribute() */

undefined8 * tinyxml2::XMLElement::CreateAttribute(void)

{
  long in_x0;
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = (undefined8 *)MemPoolT<80>::Alloc();
  *(undefined4 *)(puVar1 + 4) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined4 *)(puVar1 + 7) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  lVar3 = *(long *)(in_x0 + 8);
  *(undefined4 *)(puVar1 + 1) = 0;
  *puVar1 = &PTR__XMLAttribute_01013818;
  lVar2 = *(long *)(lVar3 + 0x188);
  puVar1[9] = lVar3 + 0x188;
  (**(code **)(lVar2 + 0x28))();
  return puVar1;
}


