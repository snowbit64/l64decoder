// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VehicleNavigationAgentEntity
// Entry Point: 00733ce4
// Size: 820 bytes
// Signature: undefined __thiscall VehicleNavigationAgentEntity(VehicleNavigationAgentEntity * this, VehicleNavigationPlanner * param_1, DynamicAvoidance * param_2, VehicleNavigationMapGenerator * param_3, float param_4, float param_5, float param_6, float param_7, float param_8, float param_9, float param_10, float param_11, bool param_12, uint param_13, TrailerDesc * param_14)


/* VehicleNavigationAgentEntity::VehicleNavigationAgentEntity(VehicleNavigationPlanner*,
   DynamicAvoidance*, VehicleNavigationMapGenerator*, float, float, float, float, float, float,
   float, float, bool, unsigned int, VehicleNavigationAgentEntity::TrailerDesc const*) */

void __thiscall
VehicleNavigationAgentEntity::VehicleNavigationAgentEntity
          (VehicleNavigationAgentEntity *this,VehicleNavigationPlanner *param_1,
          DynamicAvoidance *param_2,VehicleNavigationMapGenerator *param_3,float param_4,
          float param_5,float param_6,float param_7,float param_8,float param_9,float param_10,
          float param_11,bool param_12,uint param_13,TrailerDesc *param_14)

{
  long lVar1;
  VehicleNavigationAgent *this_00;
  StoppableObstacle *this_01;
  ulong extraout_x8;
  ulong uVar2;
  ulong uVar3;
  ulong extraout_x10;
  TrailerDesc *pTVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float local_104;
  float fStack_100;
  float local_fc;
  float fStack_f8;
  undefined4 local_f4;
  uint uStack_f0;
  ulong local_e8;
  ulong local_e0;
  float local_d8;
  long local_b0;
  
  lVar1 = tpidr_el0;
  local_b0 = *(long *)(lVar1 + 0x28);
  lVar5 = 1;
  Entity::Entity((Entity *)this,"VehicleNavigationAgent",true);
  *(undefined8 *)(this + 0x7c) = 0xffffffffffffffff;
  *(undefined4 *)(this + 0x84) = 0;
  fVar8 = param_4 * 0.5;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined ***)this = &PTR__VehicleNavigationAgentEntity_00fda910;
  *(undefined ***)(this + 0x20) = &PTR__VehicleNavigationAgentEntity_00fda938;
  *(undefined8 *)(this + 0x128) = 0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x100000000;
  fVar7 = *(float *)(param_3 + 0x60) * 1.2;
  if (fVar7 < fVar8) {
    if (fVar8 * 0.5 <= fVar7) {
      lVar5 = 2;
    }
    else if (fVar8 / 3.0 <= fVar7) {
      lVar5 = 3;
    }
    else if (fVar8 * 0.25 <= fVar7) {
      lVar5 = 4;
    }
    else {
      lVar5 = 5;
    }
  }
  fVar8 = param_6 * 0.5;
  fVar9 = param_7 * 0.5;
  local_d8 = param_10 * 0.5;
  local_f4 = 0x41b1c71d;
  fVar7 = *(float *)(param_3 + 0x60) * 0.8 * (float)lVar5;
  fVar7 = fVar7 + fVar7;
  local_e0 = (ulong)(uint)fVar7;
  if (fVar7 <= param_4) {
    fVar7 = param_4;
  }
  local_118 = fVar8;
  fStack_114 = fVar9;
  local_110 = param_8;
  fStack_10c = param_9;
  local_108 = fVar7;
  local_104 = param_5;
  fStack_100 = param_10;
  local_fc = local_d8;
  fStack_f8 = param_11;
  uStack_f0 = param_13;
  if (param_13 == 0) {
    local_e8 = 0;
    iVar6 = 0;
  }
  else {
    uVar2 = 0;
    iVar6 = 0;
    local_e8 = 0;
    uVar3 = (ulong)(param_13 - 1);
    pTVar4 = param_14 + 0xc;
    do {
      if (*pTVar4 != (TrailerDesc)0x0) {
        if (3 < uVar2) {
          local_e0 = *(ulong *)(pTVar4 + -0xc);
          local_d8 = *(float *)(pTVar4 + -4) - param_8;
                    /* try { // try from 00733ed4 to 00733edf has its CatchHandler @ 00734038 */
          FUN_00735e5c("bitset set argument out of range");
          local_e8 = extraout_x8;
          uVar3 = extraout_x10;
          break;
        }
        iVar6 = iVar6 + 1;
        local_e8 = local_e8 | 1L << (uVar2 & 0x3f);
      }
      uVar2 = uVar2 + 1;
      pTVar4 = pTVar4 + 0x10;
    } while (param_13 != uVar2);
    local_e0 = *(ulong *)(param_14 + uVar3 * 0x10);
    local_d8 = *(float *)((long)(param_14 + uVar3 * 0x10) + 8) - param_8;
  }
                    /* try { // try from 00733f08 to 00733f0f has its CatchHandler @ 00734034 */
  this_00 = (VehicleNavigationAgent *)operator_new(0x13e0);
                    /* try { // try from 00733f1c to 00733f2f has its CatchHandler @ 00734024 */
  VehicleNavigationAgent::VehicleNavigationAgent
            (this_00,(VehicleNavigationMap *)(*(long *)(param_3 + 0x108) + 0x10),
             (VehicleNavigationData *)&local_118,param_12,(ushort)lVar5,0.0);
  *(VehicleNavigationAgent **)(this + 0x38) = this_00;
  FUN_00f276d0(1,this_00 + 8);
  *(DynamicAvoidance **)(this + 0x40) = param_2;
  *(VehicleNavigationPlanner **)(this + 0x28) = param_1;
  *(VehicleNavigationMapGenerator **)(this + 0x30) = param_3;
  *(uint *)(this + 0x50) = param_13;
  this[0x54] = (VehicleNavigationAgentEntity)0x0;
  *(undefined8 *)(this + 0x60) = 0x3f800000;
  *(undefined8 *)(this + 0x58) = 0;
                    /* try { // try from 00733f5c to 00733f97 has its CatchHandler @ 00734034 */
  VehicleNavigationMapGenerator::registerAgent(param_3,this);
  this[0x68] = (VehicleNavigationAgentEntity)0x0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined4 *)(this + 0x78) = 0;
  *(float *)(this + 0xfc) = param_9;
  *(float *)(this + 0x100) = param_10;
  *(float *)(this + 0xec) = fVar7;
  *(float *)(this + 0xf0) = param_6;
  *(float *)(this + 0xf4) = param_7;
  *(float *)(this + 0xf8) = param_8;
  *(float *)(this + 0x104) = param_11;
  this[0x90] = (VehicleNavigationAgentEntity)0x0;
  this_01 = (StoppableObstacle *)operator_new(0x58);
                    /* try { // try from 00733fa4 to 00733fb3 has its CatchHandler @ 00734018 */
  local_120 = fVar8;
  fStack_11c = fVar9;
  StoppableObstacle::StoppableObstacle(this_01,iVar6 + 1,(Vector2 *)&local_120,0,3);
  *(undefined8 *)(this_01 + 0x40) = 0;
  *(undefined8 *)(this_01 + 0x48) = 0;
  *(undefined8 *)(this_01 + 0x50) = 0;
  *(StoppableObstacle **)(this + 0x48) = this_01;
                    /* try { // try from 00733fc0 to 00733fcb has its CatchHandler @ 00734034 */
  DynamicObstacle::initStoppingPaths((DynamicObstacle *)this_01,(VehicleNavigationData *)&local_118)
  ;
  this[0x88] = (VehicleNavigationAgentEntity)0x0;
  *(undefined4 *)(this + 0x8c) = 0;
  if (*(long *)(lVar1 + 0x28) == local_b0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


