// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setActiveStats
// Entry Point: 006f54f8
// Size: 172 bytes
// Signature: undefined __thiscall setActiveStats(StatsOverlayManager * this, uint param_1)


/* StatsOverlayManager::setActiveStats(unsigned int) */

void __thiscall StatsOverlayManager::setActiveStats(StatsOverlayManager *this,uint param_1)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  
  if (*(int *)(this + 0x18) == 0) {
    plVar2 = (long *)0x0;
    *(uint *)(this + 0x18) = param_1;
  }
  else {
    uVar1 = *(int *)(this + 0x18) - 1;
    plVar2 = *(long **)(*(long *)this +
                       (-(ulong)(uVar1 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar1 << 4));
    *(uint *)(this + 0x18) = param_1;
  }
  if (param_1 == 0) {
    plVar3 = (long *)0x0;
    if (plVar2 == (long *)0x0) {
      return;
    }
  }
  else {
    plVar3 = *(long **)(*(long *)this + (long)(int)param_1 * 0x10 + -0x10);
    if (plVar3 == plVar2) {
      return;
    }
  }
  if (plVar2 != (long *)0x0) {
    *(undefined *)(plVar2 + 1) = 0;
    (**(code **)(*plVar2 + 0x18))(plVar2,0);
  }
  if (plVar3 != (long *)0x0) {
    *(undefined *)(plVar3 + 1) = 1;
                    /* WARNING: Could not recover jumptable at 0x006f5594. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar3 + 0x18))(plVar3,1);
    return;
  }
  return;
}


