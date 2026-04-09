// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: request
// Entry Point: 0070b26c
// Size: 908 bytes
// Signature: undefined __thiscall request(AnimalLocomotionSystem * this, CommandDesc * param_1)


/* AnimalLocomotionSystem::request(AnimalLocomotionSystem::CommandDesc&) */

void __thiscall AnimalLocomotionSystem::request(AnimalLocomotionSystem *this,CommandDesc *param_1)

{
  AnimalLocomotionSystem AVar1;
  long lVar2;
  ulong uVar3;
  Vector3 *pVVar4;
  float *pfVar5;
  float fVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  float fVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined4 uVar16;
  void *local_60;
  void *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar11 = *(undefined8 *)(param_1 + 8);
  uVar10 = *(undefined8 *)param_1;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  AVar1 = *(AnimalLocomotionSystem *)(param_1 + 0x20);
  *(undefined2 *)(this + 0x24) = 0x101;
  pVVar4 = *(Vector3 **)(this + 0x3b8);
  *(undefined8 *)(this + 8) = uVar11;
  *(undefined8 *)this = uVar10;
  *(undefined8 *)(this + 0x18) = uVar8;
  *(undefined8 *)(this + 0x10) = uVar7;
  this[0x20] = AVar1;
  pVVar4[0x19d] = (Vector3)0x0;
  switch(*(undefined4 *)param_1) {
  case 0:
    AnimalAnimationSystem::setState((AnimalAnimationSystem *)(this + 0x78),4,0xffffffff,false,0.0);
    *(undefined4 *)(this + 0x54) = 0;
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 4);
    break;
  case 1:
    if (this[0x20] != (AnimalLocomotionSystem)0x0) {
      fVar6 = *(float *)(pVVar4 + 0x50);
      *(ulong *)(this + 8) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 8) >> 0x20) -
                    (float)((ulong)*(undefined8 *)(this + 0x14) >> 0x20) * fVar6,
                    (float)*(undefined8 *)(this + 8) - (float)*(undefined8 *)(this + 0x14) * fVar6);
      *(float *)(this + 0x10) = *(float *)(this + 0x10) - fVar6 * *(float *)(this + 0x1c);
    }
    local_60 = (void *)0x0;
    local_58 = (void *)0x0;
    local_50 = 0;
                    /* try { // try from 0070b394 to 0070b39f has its CatchHandler @ 0070b5fc */
    uVar3 = getNavMeshPath(this,pVVar4,(Vector3 *)(this + 8),(vector *)&local_60);
    if ((uVar3 & 1) == 0) {
      *(undefined2 *)(this + 0x24) = 0;
    }
    else {
      if (*(char *)(*(long *)(this + 0x3b8) + 0x180) == '\0') {
        pfVar5 = (float *)(*(long *)(this + 0x68) + 0xc);
      }
      else {
        pfVar5 = (float *)(*(long *)(this + 0x68) + 0x10);
        *(undefined *)(*(long *)(this + 0x3b8) + 0x180) = 0;
      }
                    /* try { // try from 0070b594 to 0070b5b3 has its CatchHandler @ 0070b5f8 */
      movementStartFollow(this,(vector *)&local_60,*pfVar5);
      rotateToTarget(this,(Vector3 *)((long)local_60 + 0xc),false);
      *(undefined4 *)(this + 0x34) = 0;
      *(undefined4 *)(this + 0x404) = 0;
    }
    if (local_60 != (void *)0x0) {
      local_58 = local_60;
      operator_delete(local_60);
    }
    break;
  case 2:
    AnimalAnimationSystem::setState((AnimalAnimationSystem *)(this + 0x78),7,0xffffffff,false,0.0);
    *(undefined4 *)(this + 0x38) = 0;
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 4);
    break;
  case 3:
    AnimalAnimationSystem::setState((AnimalAnimationSystem *)(this + 0x78),8,0xffffffff,false,0.0);
    *(undefined4 *)(this + 0x3c) = 0;
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 4);
    break;
  case 4:
    AnimalAnimationSystem::setState((AnimalAnimationSystem *)(this + 0x78),9,0xffffffff,false,0.0);
    *(undefined4 *)(this + 0x48) = 0;
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 4);
    break;
  case 5:
    AnimalAnimationSystem::setState((AnimalAnimationSystem *)(this + 0x78),10,0xffffffff,false,0.0);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 4);
    break;
  case 6:
    pVVar4[0x19d] = (Vector3)0x1;
    AnimalAnimationSystem::setState((AnimalAnimationSystem *)(this + 0x78),5,0xffffffff,false,0.0);
    *(undefined4 *)(this + 0x40) = 0;
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 4);
    break;
  case 7:
    *(undefined4 *)(this + 0x2c) = *(undefined4 *)(this + 4);
    uVar3 = rotateToFreeDirection(this,true,(bool *)&local_60);
    if ((uVar3 & 1) == 0) {
      AnimalAnimationSystem::setState((AnimalAnimationSystem *)(this + 0x78),0,0xffffffff,false,0.0)
      ;
      *(undefined4 *)(this + 0x50) = 1;
      pfVar5 = *(float **)(this + 0x3b8);
      *(undefined4 *)(this + 0x428) = 1;
      *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 0x2c);
      fVar9 = *pfVar5;
      fVar6 = pfVar5[2];
      *(float *)(this + 0x42c) = fVar9;
      *(float *)(this + 0x430) = fVar6;
      fVar12 = pfVar5[5];
      fVar13 = pfVar5[3];
      fVar15 = (float)NEON_fmadd(fVar13,fVar13,fVar12 * fVar12);
      fVar14 = 1.0;
      if (1e-06 < fVar15) {
        fVar14 = 1.0 / SQRT(fVar15);
      }
      *(float *)(this + 0x434) = fVar13 * fVar14;
      *(float *)(this + 0x438) = fVar12 * fVar14;
      uVar16 = *(undefined4 *)(*(long *)(this + 0x68) + 0xc);
      *(undefined8 *)(this + 0x494) = 0;
      *(float *)(this + 0x44c) = fVar9 + fVar13 * fVar14;
      *(undefined2 *)(this + 0x4a5) = 1;
      *(undefined4 *)(this + 0x48c) = uVar16;
      *(float *)(this + 0x450) = fVar6 + fVar12 * fVar14;
      *(ulong *)(this + 0x43c) =
           CONCAT44((float)((ulong)*(undefined8 *)(this + 0x434) >> 0x20) * 0.0001,
                    (float)*(undefined8 *)(this + 0x434) * 0.0001);
      *(undefined4 *)(this + 0x3fc) = 0;
      uVar16 = AnimalAnimationSystem::getActiveAnimationSpeed();
      *(undefined4 *)(this + 0x4a0) = uVar16;
      *(undefined8 *)(this + 0x454) = *(undefined8 *)(this + 0x42c);
    }
    else {
      *(undefined4 *)(this + 0x50) = 0;
    }
    *(undefined4 *)(this + 0x404) = 0;
    break;
  case 8:
    pVVar4[0x19d] = (Vector3)0x1;
    AnimalAnimationSystem::setState((AnimalAnimationSystem *)(this + 0x78),6,0xffffffff,false,0.0);
    *(undefined4 *)(this + 0x44) = 0;
    *(undefined4 *)(this + 0x28) = *(undefined4 *)(this + 4);
  }
  if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


