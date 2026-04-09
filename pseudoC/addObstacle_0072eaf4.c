// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addObstacle
// Entry Point: 0072eaf4
// Size: 360 bytes
// Signature: undefined __thiscall addObstacle(VehicleNavigationMapGenerator * this, bool param_1, float param_2, Vector2 * param_3, uint param_4)


/* VehicleNavigationMapGenerator::addObstacle(bool, float, Vector2 const&, unsigned int) */

undefined8 * __thiscall
VehicleNavigationMapGenerator::addObstacle
          (VehicleNavigationMapGenerator *this,bool param_1,float param_2,Vector2 *param_3,
          uint param_4)

{
  long lVar1;
  undefined8 *this_00;
  undefined8 *puVar2;
  StoppingPath *this_01;
  undefined8 uVar3;
  undefined8 local_68;
  undefined8 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  if (param_2 <= 0.0) {
    this_00 = (undefined8 *)operator_new(0x20);
    uVar3 = *(undefined8 *)param_3;
    this_00[1] = 0;
    this_00[2] = 0;
    *this_00 = 0;
                    /* try { // try from 0072eb84 to 0072eb8b has its CatchHandler @ 0072ec64 */
    puVar2 = (undefined8 *)operator_new(0x1c);
    puVar2[2] = uVar3;
    if (0xe < param_4) {
      param_4 = 0xf;
    }
    *(undefined4 *)(puVar2 + 3) = 0;
    this_00[1] = (long)puVar2 + 0x1c;
    this_00[2] = (long)puVar2 + 0x1c;
    *this_00 = puVar2;
    puVar2[1] = 0x3f80000000000000;
    *puVar2 = 0;
    *(uint *)(this_00 + 3) = param_4;
    *(undefined4 *)((long)this_00 + 0x1c) = 0;
  }
  else {
    this_00 = (undefined8 *)operator_new(0x40);
    if (0xe < param_4) {
      param_4 = 0xf;
    }
    if (param_1) {
                    /* try { // try from 0072eb54 to 0072eb67 has its CatchHandler @ 0072ec60 */
      StoppableObstacle::StoppableObstacle((StoppableObstacle *)this_00,1,param_3,param_4,2);
    }
    else {
                    /* try { // try from 0072ebc0 to 0072ebd3 has its CatchHandler @ 0072ec5c */
      DynamicObstacle::DynamicObstacle((DynamicObstacle *)this_00,1,param_3,param_4,1);
    }
    DynamicObstacle::initStoppingPath((DynamicObstacle *)this_00,0,0.0,param_2);
    this_01 = (StoppingPath *)this_00[4];
    StoppingPath::clear();
    local_60 = 0;
    local_68 = 0x3f80000000000000;
    StoppingPath::addKnot(this_01,0.0,0.0,(Vector2 *)&local_60,(Vector2 *)&local_68);
  }
  DynamicAvoidance::addObstacle(*(Obstacle **)(this + 0x140));
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


