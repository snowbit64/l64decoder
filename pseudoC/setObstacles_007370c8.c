// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setObstacles
// Entry Point: 007370c8
// Size: 32 bytes
// Signature: undefined __thiscall setObstacles(VehicleNavigationAgent * this, vector * param_1)


/* VehicleNavigationAgent::setObstacles(std::__ndk1::vector<OrientedBox,
   std::__ndk1::allocator<OrientedBox> > const&) */

vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> * __thiscall
VehicleNavigationAgent::setObstacles(VehicleNavigationAgent *this,vector *param_1)

{
  vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *this_00;
  type tVar1;
  
  this_00 = (vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *)(this + 0x12d8);
  if (this_00 != (vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *)param_1) {
    tVar1 = std::__ndk1::vector<OrientedBox,std::__ndk1::allocator<OrientedBox>>::
            assign<OrientedBox*>(this_00,*(OrientedBox **)param_1,*(OrientedBox **)(param_1 + 8));
    return (vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *)(ulong)tVar1;
  }
  return this_00;
}


