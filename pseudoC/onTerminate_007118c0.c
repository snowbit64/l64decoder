// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onTerminate
// Entry Point: 007118c0
// Size: 88 bytes
// Signature: undefined __cdecl onTerminate(Status param_1)


/* AnimalGrazingAction::onTerminate(BTBehavior::Status) */

void AnimalGrazingAction::onTerminate(Status param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = (ulong)param_1;
  lVar3 = *(long *)(uVar2 + 0x30);
  if (*(ScenegraphNode **)(lVar3 + 0x188) != (ScenegraphNode *)0x0) {
    ScenegraphNode::setVisibility(*(ScenegraphNode **)(lVar3 + 0x188),false);
    lVar3 = *(long *)(uVar2 + 0x30);
  }
  uVar1 = *(uint *)(lVar3 + 0x40);
  if (uVar1 != 0xffffffff) {
    lVar4 = *(long *)(uVar2 + 0x28);
    *(undefined4 *)(lVar3 + 0x40) = 0xffffffff;
    *(undefined *)(lVar4 + (ulong)uVar1 * 0x24 + 0xdc) = 0;
  }
  return;
}


