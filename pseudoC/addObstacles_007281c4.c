// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addObstacles
// Entry Point: 007281c4
// Size: 24 bytes
// Signature: undefined __thiscall addObstacles(EvasiveObstacle * this, vector * param_1)


/* EvasiveObstacle::addObstacles(std::__ndk1::vector<OrientedBox,
   std::__ndk1::allocator<OrientedBox> > const&) */

type __thiscall EvasiveObstacle::addObstacles(EvasiveObstacle *this,vector *param_1)

{
  type tVar1;
  
  tVar1 = std::__ndk1::vector<OrientedBox,std::__ndk1::allocator<OrientedBox>>::
          insert<std::__ndk1::__wrap_iter<OrientedBox_const*>>
                    ((vector<OrientedBox,std::__ndk1::allocator<OrientedBox>> *)(this + 0x40),
                     (__wrap_iter)*(undefined8 *)(this + 0x48),(__wrap_iter)*(undefined8 *)param_1,
                     (__wrap_iter)*(undefined8 *)(param_1 + 8));
  return tVar1;
}


