// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: playClocked
// Entry Point: 00e3a5bc
// Size: 224 bytes
// Signature: undefined __thiscall playClocked(Bus * this, double param_1, AudioSource * param_2, float param_3, float param_4)


/* SoLoud::Bus::playClocked(double, SoLoud::AudioSource&, float, float) */

undefined8 __thiscall
SoLoud::Bus::playClocked(Bus *this,double param_1,AudioSource *param_2,float param_3,float param_4)

{
  uint uVar1;
  Soloud *this_00;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(long *)(this + 0xa0) != 0) &&
     (this_00 = *(Soloud **)(this + 0x78), this_00 != (Soloud *)0x0)) {
    uVar1 = *(uint *)(this + 0xa8);
    if (uVar1 != 0) {
LAB_00e3a600:
      uVar2 = Soloud::playClocked(this_00,param_1,param_2,param_3,param_4,uVar1);
      return uVar2;
    }
    if (0 < *(int *)(this_00 + 0x54)) {
      lVar3 = 0;
      do {
        if (*(long *)(this_00 + lVar3 * 8 + 0xa0) == *(long *)(this + 0xa0)) {
          uVar1 = Soloud::getHandleFromVoice(this_00,(uint)lVar3);
          *(uint *)(this + 0xa8) = uVar1;
          if (uVar1 != 0) {
            this_00 = *(Soloud **)(this + 0x78);
            goto LAB_00e3a600;
          }
        }
        this_00 = *(Soloud **)(this + 0x78);
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(this_00 + 0x54));
    }
  }
  return 0;
}


