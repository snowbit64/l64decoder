// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: onTerminate
// Entry Point: 00711e78
// Size: 44 bytes
// Signature: undefined __cdecl onTerminate(Status param_1)


/* AnimalPickRandomTargetAction::onTerminate(BTBehavior::Status) */

void AnimalPickRandomTargetAction::onTerminate(Status param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)((ulong)param_1 + 0x30);
  uVar1 = *(uint *)(lVar2 + 0x40);
  if (uVar1 != 0xffffffff) {
    lVar3 = *(long *)((ulong)param_1 + 0x28);
    *(undefined4 *)(lVar2 + 0x40) = 0xffffffff;
    *(undefined *)(lVar3 + (ulong)uVar1 * 0x24 + 0xdc) = 0;
  }
  return;
}


