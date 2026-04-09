// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MarkInUse
// Entry Point: 00dfc7bc
// Size: 76 bytes
// Signature: undefined __thiscall MarkInUse(XMLDocument * this, XMLNode * param_1)


/* tinyxml2::XMLDocument::MarkInUse(tinyxml2::XMLNode*) */

void __thiscall tinyxml2::XMLDocument::MarkInUse(XMLDocument *this,XMLNode *param_1)

{
  uint uVar1;
  XMLNode *pXVar2;
  ulong uVar3;
  XMLNode **ppXVar4;
  
  uVar1 = *(uint *)(this + 0x104);
  uVar3 = (ulong)uVar1;
  ppXVar4 = *(XMLNode ***)(this + 0xa8);
  if (0 < (int)uVar1) {
    do {
      if (*ppXVar4 == param_1) {
        pXVar2 = (*(XMLNode ***)(this + 0xa8))[(int)(uVar1 - 1)];
        *(uint *)(this + 0x104) = uVar1 - 1;
        *ppXVar4 = pXVar2;
        return;
      }
      uVar3 = uVar3 - 1;
      ppXVar4 = ppXVar4 + 1;
    } while (uVar3 != 0);
  }
  return;
}


