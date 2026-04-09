// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setFilter
// Entry Point: 00e3a8e4
// Size: 168 bytes
// Signature: undefined __thiscall setFilter(Bus * this, uint param_1, Filter * param_2)


/* SoLoud::Bus::setFilter(unsigned int, SoLoud::Filter*) */

void __thiscall SoLoud::Bus::setFilter(Bus *this,uint param_1,Filter *param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  
  if (param_1 < 8) {
    *(Filter **)(this + (ulong)param_1 * 8 + 0x38) = param_2;
    if (*(long *)(this + 0xa0) != 0) {
      uVar4 = (ulong)param_1;
      Soloud::lockAudioMutex();
      lVar3 = *(long *)(this + 0xa0);
      plVar1 = *(long **)(lVar3 + uVar4 * 8 + 0x188);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x48))();
        lVar3 = *(long *)(this + 0xa0);
      }
      *(undefined8 *)(lVar3 + uVar4 * 8 + 0x188) = 0;
      if (param_2 != (Filter *)0x0) {
        uVar2 = (**(code **)**(undefined8 **)(this + (ulong)param_1 * 8 + 0x38))();
        *(undefined8 *)(*(long *)(this + 0xa0) + uVar4 * 8 + 0x188) = uVar2;
      }
      Soloud::unlockAudioMutex();
      return;
    }
  }
  return;
}


