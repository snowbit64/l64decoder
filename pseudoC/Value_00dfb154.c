// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Value
// Entry Point: 00dfb154
// Size: 64 bytes
// Signature: undefined Value(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::XMLNode::Value() const */

undefined8 tinyxml2::XMLNode::Value(void)

{
  long *in_x0;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = (**(code **)(*in_x0 + 0x48))();
  if (lVar1 != 0) {
    return 0;
  }
  uVar2 = StrPair::GetStr();
  return uVar2;
}


