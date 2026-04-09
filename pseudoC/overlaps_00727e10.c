// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: overlaps
// Entry Point: 00727e10
// Size: 144 bytes
// Signature: undefined __thiscall overlaps(Obstacle * this, Obstacle * param_1, float param_2)


/* Obstacle::overlaps(Obstacle const&, float) const */

undefined8 __thiscall Obstacle::overlaps(Obstacle *this,Obstacle *param_1,float param_2)

{
  OrientedBox *pOVar1;
  OrientedBox *this_00;
  OrientedBox *pOVar2;
  OrientedBox *pOVar3;
  ulong uVar4;
  
  pOVar1 = *(OrientedBox **)param_1;
  pOVar2 = *(OrientedBox **)(param_1 + 8);
  do {
    if (pOVar1 == pOVar2) {
      return 0;
    }
    pOVar3 = *(OrientedBox **)(this + 8);
    for (this_00 = *(OrientedBox **)this; this_00 != pOVar3; this_00 = this_00 + 0x1c) {
      uVar4 = OrientedBox::overlaps(this_00,pOVar1,param_2);
      if ((uVar4 & 1) != 0) {
        return 1;
      }
    }
    pOVar1 = pOVar1 + 0x1c;
  } while( true );
}


