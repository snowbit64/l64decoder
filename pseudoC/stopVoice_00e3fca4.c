// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stopVoice
// Entry Point: 00e3fca4
// Size: 132 bytes
// Signature: undefined __thiscall stopVoice(Soloud * this, uint param_1)


/* SoLoud::Soloud::stopVoice(unsigned int) */

void __thiscall SoLoud::Soloud::stopVoice(Soloud *this,uint param_1)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + (ulong)param_1 * 8 + 0xa0);
  this[0x224f0] = (Soloud)0x1;
  if (plVar3 != (long *)0x0) {
    lVar2 = *plVar3;
    *(long **)(this + (ulong)param_1 * 8 + 0xa0) = (long *)0x0;
    (**(code **)(lVar2 + 8))(plVar3);
    uVar1 = *(uint *)(this + 0x50);
    if (uVar1 != 0) {
      lVar2 = 0;
      do {
        if (*(long **)(*(long *)(this + 0x98) + lVar2) == plVar3) {
          *(undefined8 *)(*(long *)(this + 0x98) + lVar2) = 0;
        }
        lVar2 = lVar2 + 8;
      } while ((ulong)uVar1 * 8 - lVar2 != 0);
    }
  }
  return;
}


