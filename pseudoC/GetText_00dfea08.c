// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetText
// Entry Point: 00dfea08
// Size: 96 bytes
// Signature: undefined GetText(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::XMLElement::GetText() const */

undefined8 tinyxml2::XMLElement::GetText(void)

{
  long in_x0;
  long lVar1;
  undefined8 uVar2;
  
  if (((*(long **)(in_x0 + 0x38) != (long *)0x0) &&
      (lVar1 = (**(code **)(**(long **)(in_x0 + 0x38) + 0x38))(), lVar1 != 0)) &&
     (lVar1 = (**(code **)(**(long **)(in_x0 + 0x38) + 0x48))(*(long **)(in_x0 + 0x38)), lVar1 == 0)
     ) {
    uVar2 = StrPair::GetStr();
    return uVar2;
  }
  return 0;
}


