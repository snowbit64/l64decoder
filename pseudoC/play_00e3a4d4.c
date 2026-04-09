// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play
// Entry Point: 00e3a4d4
// Size: 232 bytes
// Signature: undefined __thiscall play(Bus * this, AudioSource * param_1, float param_2, float param_3, float param_4, bool param_5)


/* SoLoud::Bus::play(SoLoud::AudioSource&, float, float, float, bool) */

undefined8 __thiscall
SoLoud::Bus::play(Bus *this,AudioSource *param_1,float param_2,float param_3,float param_4,
                 bool param_5)

{
  uint uVar1;
  Soloud *this_00;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(long *)(this + 0xa0) != 0) &&
     (this_00 = *(Soloud **)(this + 0x78), this_00 != (Soloud *)0x0)) {
    uVar1 = *(uint *)(this + 0xa8);
    if (uVar1 != 0) {
LAB_00e3a51c:
      uVar2 = Soloud::play(this_00,param_1,param_2,param_3,param_4,param_5,uVar1);
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
            goto LAB_00e3a51c;
          }
        }
        this_00 = *(Soloud **)(this + 0x78);
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(this_00 + 0x54));
    }
  }
  return 0;
}


