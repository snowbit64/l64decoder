// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlaps
// Entry Point: 00727ea0
// Size: 104 bytes
// Signature: undefined __thiscall overlaps(Obstacle * this, OrientedBox * param_1, float param_2)


/* Obstacle::overlaps(OrientedBox const&, float) const */

uint __thiscall Obstacle::overlaps(Obstacle *this,OrientedBox *param_1,float param_2)

{
  OrientedBox *pOVar1;
  uint uVar2;
  OrientedBox *this_00;
  
  this_00 = *(OrientedBox **)this;
  pOVar1 = *(OrientedBox **)(this + 8);
  if (this_00 == pOVar1) {
    uVar2 = 0;
  }
  else {
    do {
      uVar2 = OrientedBox::overlaps(this_00,param_1,param_2);
      if ((uVar2 & 1) != 0) break;
      this_00 = this_00 + 0x1c;
    } while (this_00 != pOVar1);
  }
  return uVar2 & 1;
}


