// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateParams
// Entry Point: 00e44a8c
// Size: 148 bytes
// Signature: undefined __thiscall updateParams(FilterInstance * this, double param_1)


/* SoLoud::FilterInstance::updateParams(double) */

void __thiscall SoLoud::FilterInstance::updateParams(FilterInstance *this,double param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  undefined4 uVar4;
  
  uVar1 = *(uint *)(this + 8);
  if (uVar1 != 0) {
    lVar2 = 0;
    uVar3 = 0;
    do {
      if (0 < *(int *)((Fader *)(*(long *)(this + 0x18) + lVar2) + 0x28)) {
        *(uint *)(this + 0xc) = *(uint *)(this + 0xc) | 1 << (ulong)((uint)uVar3 & 0x1f);
        uVar4 = Fader::get((Fader *)(*(long *)(this + 0x18) + lVar2),param_1);
        uVar1 = *(uint *)(this + 8);
        *(undefined4 *)(*(long *)(this + 0x10) + uVar3 * 4) = uVar4;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0x30;
    } while (uVar3 < uVar1);
  }
  return;
}


