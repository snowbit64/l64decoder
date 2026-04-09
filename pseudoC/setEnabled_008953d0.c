// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setEnabled
// Entry Point: 008953d0
// Size: 140 bytes
// Signature: undefined __thiscall setEnabled(PedestrianSystem * this, bool param_1)


/* PedestrianSystem::setEnabled(bool) */

void __thiscall PedestrianSystem::setEnabled(PedestrianSystem *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  
  this[0x25975] = (PedestrianSystem)param_1;
  if (*(uint *)(this + 0x25904) != 0) {
    uVar2 = 0;
    plVar3 = (long *)(this + 0x1d4a0);
    do {
      lVar1 = *plVar3;
      if (lVar1 != 0) {
        if (*(ScenegraphNode **)(lVar1 + 0xa8) != (ScenegraphNode *)0x0) {
          ScenegraphNode::setVisibility(*(ScenegraphNode **)(lVar1 + 0xa8),param_1);
          lVar1 = *plVar3;
        }
        if (*(ScenegraphNode **)(lVar1 + 0xa0) != (ScenegraphNode *)0x0) {
          ScenegraphNode::setVisibility(*(ScenegraphNode **)(lVar1 + 0xa0),param_1);
        }
      }
      uVar2 = uVar2 + 1;
      plVar3 = plVar3 + 0x21;
    } while (uVar2 < *(uint *)(this + 0x25904));
  }
  return;
}


