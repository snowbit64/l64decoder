// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: checkLink
// Entry Point: 00f79118
// Size: 132 bytes
// Signature: undefined __thiscall checkLink(btSoftBody * this, Node * param_1, Node * param_2)


/* btSoftBody::checkLink(btSoftBody::Node const*, btSoftBody::Node const*) const */

bool __thiscall btSoftBody::checkLink(btSoftBody *this,Node *param_1,Node *param_2)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  Node **ppNVar4;
  ulong uVar5;
  Node *pNVar6;
  Node *pNVar7;
  
  uVar1 = *(uint *)(this + 0x394);
  if ((int)uVar1 < 1) {
    return false;
  }
  lVar3 = *(long *)(this + 0x3a0);
  pNVar7 = *(Node **)(lVar3 + 0x10);
  pNVar6 = *(Node **)(lVar3 + 0x18);
  if (pNVar7 != param_1 || pNVar6 != param_2) {
    ppNVar4 = (Node **)(lVar3 + 0x60);
    uVar5 = 1;
    bVar2 = true;
    do {
      if ((pNVar7 == param_2) && (pNVar6 == param_1)) {
        return bVar2;
      }
      bVar2 = uVar5 < uVar1;
      if (uVar1 == uVar5) {
        return bVar2;
      }
      pNVar7 = ppNVar4[-1];
      pNVar6 = *ppNVar4;
      ppNVar4 = ppNVar4 + 9;
      uVar5 = uVar5 + 1;
    } while ((pNVar7 != param_1) || (pNVar6 != param_2));
    return bVar2;
  }
  return true;
}


