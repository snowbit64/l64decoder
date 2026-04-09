// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: play3dClocked
// Entry Point: 00e3a7c4
// Size: 288 bytes
// Signature: undefined __thiscall play3dClocked(Bus * this, double param_1, AudioSource * param_2, float param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9)


/* SoLoud::Bus::play3dClocked(double, SoLoud::AudioSource&, float, float, float, float, float,
   float, float) */

undefined8 __thiscall
SoLoud::Bus::play3dClocked
          (Bus *this,double param_1,AudioSource *param_2,float param_3,float param_4,float param_5,
          float param_6,float param_7,float param_8,float param_9)

{
  uint uVar1;
  Soloud *this_00;
  undefined8 uVar2;
  long lVar3;
  
  if ((*(long *)(this + 0xa0) != 0) &&
     (this_00 = *(Soloud **)(this + 0x78), this_00 != (Soloud *)0x0)) {
    uVar1 = *(uint *)(this + 0xa8);
    if (uVar1 != 0) {
LAB_00e3a824:
      uVar2 = Soloud::play3dClocked
                        (this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,
                         param_9,uVar1);
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
            goto LAB_00e3a824;
          }
        }
        this_00 = *(Soloud **)(this + 0x78);
        lVar3 = lVar3 + 1;
      } while (lVar3 < *(int *)(this_00 + 0x54));
    }
  }
  return 0;
}


