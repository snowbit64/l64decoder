// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: track
// Entry Point: 00af1bd8
// Size: 348 bytes
// Signature: undefined __thiscall track(GiantsAdPlacement * this, float param_1, float param_2)


/* GiantsAdPlacement::track(float, float) */

undefined8 __thiscall GiantsAdPlacement::track(GiantsAdPlacement *this,float param_1,float param_2)

{
  int iVar1;
  double dVar2;
  undefined8 uVar3;
  GiantsAdsProvider *this_00;
  long lVar4;
  float fVar5;
  float fVar6;
  double dVar7;
  
  if (this[0x3c] == (GiantsAdPlacement)0x0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)(this + 0x60);
    if (((param_1 < *(float *)(lVar4 + 0x100)) || (*(float *)(lVar4 + 0x104) < param_1)) ||
       (*(float *)(lVar4 + 0x108) < param_2)) {
      if (*(int *)(this + 0x58) == 1) {
        fVar5 = (float)NEON_ucvtf(*(undefined4 *)(lVar4 + 0xfc));
        if (fVar5 <= *(float *)(this + 0x50)) {
          *(float *)(this + 0x54) = *(float *)(this + 0x50) + *(float *)(this + 0x54);
        }
        uVar3 = 1;
        *(undefined4 *)(this + 0x50) = 0;
        *(undefined4 *)(this + 0x58) = 0;
      }
      else {
        uVar3 = 1;
      }
    }
    else {
      lVar4 = Watch::getCurrentTicks();
      iVar1 = *(int *)(this + 0x58);
      if (iVar1 == 2) {
        dVar2 = (double)Watch::convertTicksToMs(lVar4 - *(long *)(this + 0x48));
        uVar3 = 1;
        dVar7 = (double)NEON_ucvtf((ulong)*(uint *)(*(long *)(this + 0x60) + 0x10c));
        if (dVar7 <= dVar2) {
          *(long *)(this + 0x48) = lVar4;
          *(undefined4 *)(this + 0x58) = 1;
        }
      }
      else if (iVar1 == 1) {
        dVar2 = (double)Watch::convertTicksToMs(lVar4 - *(long *)(this + 0x48));
        this_00 = *(GiantsAdsProvider **)(this + 0x60);
        fVar5 = (float)dVar2;
        fVar6 = (float)NEON_ucvtf(*(undefined4 *)(this_00 + 0xfc));
        if ((fVar5 < fVar6) ||
           (fVar6 = (float)NEON_ucvtf(*(undefined4 *)(this_00 + 0xf8)),
           *(float *)(this + 0x54) + fVar5 < fVar6)) {
          uVar3 = 1;
          *(float *)(this + 0x50) = fVar5;
        }
        else {
          GiantsAdsProvider::addImpression(this_00,this);
          *(long *)(this + 0x48) = lVar4;
          *(undefined8 *)(this + 0x50) = 0;
          uVar3 = 1;
          *(undefined4 *)(this + 0x58) = 2;
        }
      }
      else {
        uVar3 = 1;
        if (iVar1 == 0) {
          *(long *)(this + 0x48) = lVar4;
          *(undefined4 *)(this + 0x50) = 0;
          *(undefined4 *)(this + 0x58) = 1;
        }
      }
    }
  }
  return uVar3;
}


