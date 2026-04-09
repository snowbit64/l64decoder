// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: StoppableObstacle
// Entry Point: 007281a0
// Size: 36 bytes
// Signature: undefined __thiscall StoppableObstacle(StoppableObstacle * this, uint param_1, Vector2 * param_2, uint param_3, Tag param_4)


/* StoppableObstacle::StoppableObstacle(unsigned int, Vector2 const&, unsigned int, Obstacle::Tag)
    */

void __thiscall
StoppableObstacle::StoppableObstacle
          (StoppableObstacle *this,uint param_1,Vector2 *param_2,uint param_3,Tag param_4)

{
  DynamicObstacle::DynamicObstacle((DynamicObstacle *)this,param_1,param_2,param_3,param_4);
  this[0x39] = (StoppableObstacle)0x0;
  return;
}


