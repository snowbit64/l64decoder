// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Unlink
// Entry Point: 00dfb0ec
// Size: 100 bytes
// Signature: undefined __thiscall Unlink(XMLNode * this, XMLNode * param_1)


/* tinyxml2::XMLNode::Unlink(tinyxml2::XMLNode*) */

void __thiscall tinyxml2::XMLNode::Unlink(XMLNode *this,XMLNode *param_1)

{
  long lVar1;
  XMLNode *pXVar2;
  
  if (*(XMLNode **)(this + 0x38) == param_1) {
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x50);
    pXVar2 = *(XMLNode **)(this + 0x40);
    lVar1 = *(long *)(param_1 + 0x48);
  }
  else {
    pXVar2 = *(XMLNode **)(this + 0x40);
    lVar1 = *(long *)(param_1 + 0x48);
  }
  if (pXVar2 == param_1) {
    *(long *)(this + 0x40) = lVar1;
  }
  if (lVar1 != 0) {
    *(undefined8 *)(lVar1 + 0x50) = *(undefined8 *)(param_1 + 0x50);
  }
  if (*(long *)(param_1 + 0x50) != 0) {
    *(long *)(*(long *)(param_1 + 0x50) + 0x48) = lVar1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  return;
}


