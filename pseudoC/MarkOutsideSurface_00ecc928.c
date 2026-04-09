// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MarkOutsideSurface
// Entry Point: 00ecc928
// Size: 340 bytes
// Signature: undefined __thiscall MarkOutsideSurface(Volume * this, ulong param_1, ulong param_2, ulong param_3, ulong param_4, ulong param_5, ulong param_6)


/* VHACD::Volume::MarkOutsideSurface(unsigned long, unsigned long, unsigned long, unsigned long,
   unsigned long, unsigned long) */

void __thiscall
VHACD::Volume::MarkOutsideSurface
          (Volume *this,ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
          ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(*(long *)this + 0x30);
  if (plVar4 != (long *)0x0 && DAT_02123398 == 0) {
    DAT_02123398 = (**(code **)(*plVar4 + 0x10))(plVar4,"VHACDVolume::MarkOutsideSurface");
    plVar4 = *(long **)(*(long *)this + 0x30);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x18))(plVar4,DAT_02123398);
  }
  if (((param_1 < param_4) && (param_2 < param_5)) &&
     (uVar2 = param_3, uVar1 = param_2, param_3 < param_6)) {
    do {
      lVar3 = *(long *)(this + 0x70) +
              *(long *)(this + 0x50) * (uVar1 + param_1 * *(long *)(this + 0x48));
      if (*(char *)(lVar3 + uVar2) == '\0') {
        *(undefined *)(lVar3 + uVar2) = 1;
      }
      uVar2 = uVar2 + 1;
    } while (((param_6 != uVar2) || (uVar1 = uVar1 + 1, uVar2 = param_3, uVar1 != param_5)) ||
            (param_1 = param_1 + 1, uVar1 = param_2, param_1 != param_4));
  }
  if (plVar4 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00ecca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar4 + 0x20))(plVar4);
    return;
  }
  return;
}


