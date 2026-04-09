// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getWaypoint
// Entry Point: 008729d8
// Size: 96 bytes
// Signature: undefined __thiscall getWaypoint(NavigationPath * this, uint param_1, Vector3 * param_2)


/* NavigationPath::getWaypoint(unsigned int, Vector3&) const */

void __thiscall NavigationPath::getWaypoint(NavigationPath *this,uint param_1,Vector3 *param_2)

{
  uint uVar1;
  
  uVar1 = Spline::getNumOfCV();
  if (param_1 < uVar1) {
    Spline::getCV(*(Spline **)(this + 0x20),param_1,(float *)param_2);
    return;
  }
  *(undefined4 *)(param_2 + 8) = 0;
  *(undefined8 *)param_2 = 0;
  return;
}


