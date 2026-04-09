// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setCompanionsVisibility
// Entry Point: 00876708
// Size: 120 bytes
// Signature: undefined __thiscall setCompanionsVisibility(AnimalCompanionManager * this, bool param_1)


/* AnimalCompanionManager::setCompanionsVisibility(bool) */

void __thiscall
AnimalCompanionManager::setCompanionsVisibility(AnimalCompanionManager *this,bool param_1)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(this + 0x18c);
  if (uVar2 != 0) {
    lVar3 = 0;
    uVar4 = 0;
    do {
      lVar1 = *(long *)(this + 0xb0) + lVar3;
      *(bool *)(lVar1 + 0x50) = param_1;
      if ((*(ScenegraphNode **)(lVar1 + 0x18) != (ScenegraphNode *)0x0) &&
         (*(char *)(lVar1 + 0x51) != '\0')) {
        ScenegraphNode::setVisibility(*(ScenegraphNode **)(lVar1 + 0x18),param_1);
        uVar2 = *(uint *)(this + 0x18c);
      }
      uVar4 = uVar4 + 1;
      lVar3 = lVar3 + 0x58;
    } while (uVar4 < uVar2);
  }
  return;
}


