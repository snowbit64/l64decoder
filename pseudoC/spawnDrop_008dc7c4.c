// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: spawnDrop
// Entry Point: 008dc7c4
// Size: 624 bytes
// Signature: undefined __thiscall spawnDrop(Precipitation * this, Drop * param_1, float * param_2, float * param_3, bool param_4)


/* Precipitation::spawnDrop(Precipitation::Drop&, float*, float*, bool) */

void __thiscall
Precipitation::spawnDrop
          (Precipitation *this,Drop *param_1,float *param_2,float *param_3,bool param_4)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  if (*(uint *)(this + 0x6c) < *(uint *)(this + 0xb0)) {
    bVar2 = false;
  }
  else {
    uVar4 = MathUtil::getRandom();
    uVar4 = NEON_fmadd(uVar4,*(undefined4 *)(this + 0x70),*param_2);
    *(undefined4 *)param_1 = uVar4;
    *(float *)(param_1 + 4) = param_3[1];
    uVar4 = MathUtil::getRandom();
    uVar4 = NEON_fmadd(uVar4,*(undefined4 *)(this + 0x70),param_2[2]);
    *(undefined4 *)(param_1 + 8) = uVar4;
    uVar4 = MathUtil::getRandomMinMax(0,*(int *)(this + 0x80) + -1);
    *(undefined4 *)(param_1 + 0x1c) = uVar4;
    fVar5 = (float)MathUtil::getRandomMinMax(*(float *)(this + 0x84),*(float *)(this + 0x88));
    *(float *)(param_1 + 0xc) = -fVar5;
    fVar6 = (float)MathUtil::getRandomMinMax(*(float *)(this + 0x8c),*(float *)(this + 0x90));
    fVar9 = *(float *)(param_1 + 4);
    fVar5 = 0.0;
    fVar6 = 1.0 / fVar6;
    *(float *)(param_1 + 0x10) = fVar6;
    fVar11 = param_2[1];
    fVar12 = (float)NEON_fmadd(*(undefined4 *)(this + 0x98),fVar6,*(undefined4 *)(param_1 + 0xc));
    if ((fVar11 <= fVar9) && (fVar9 <= param_3[1])) {
      if ((fVar12 < 0.0) || (fVar11 = param_3[1], 0.0 < fVar12)) {
        fVar5 = (fVar11 - fVar9) / fVar12;
      }
      else {
        fVar5 = 9999.0;
      }
    }
    fVar11 = fVar6 * *(float *)(this + 0x94);
    fVar6 = fVar6 * *(float *)(this + 0x9c);
    if (!param_4) {
      fVar9 = (float)MathUtil::getRandom();
      fVar9 = fVar5 * fVar9;
      fVar10 = (float)NEON_fmadd(fVar9,fVar6,*(undefined4 *)(param_1 + 8));
      fVar5 = fVar5 - fVar9;
      fVar7 = (float)NEON_fmadd(fVar9,fVar11,*(undefined4 *)param_1);
      uVar4 = NEON_fmadd(fVar9,fVar12,*(undefined4 *)(param_1 + 4));
      *(float *)(param_1 + 8) = fVar10;
      *(float *)param_1 = fVar7;
      *(undefined4 *)(param_1 + 4) = uVar4;
      fVar8 = *param_2;
      fVar9 = (fVar7 - fVar8) / (*param_3 - fVar8);
      fVar7 = (fVar10 - param_2[2]) / (param_3[2] - param_2[2]);
      uVar4 = NEON_fmadd(*param_3 - fVar8,fVar9 - (float)(int)fVar9,fVar8);
      *(undefined4 *)param_1 = uVar4;
      uVar4 = NEON_fmadd(param_3[2] - param_2[2],fVar7 - (float)(int)fVar7,param_2[2]);
      *(undefined4 *)(param_1 + 8) = uVar4;
    }
    lVar3 = ScenegraphPhysicsContextManager::getInstance();
    if (*(long *)(lVar3 + 8) != 0) {
      uVar4 = NEON_fmadd(fVar11,fVar11,fVar12 * fVar12);
      fVar9 = (float)NEON_fmadd(fVar6,fVar6,uVar4);
      fVar7 = SQRT(fVar9);
      local_90 = 1.0 / fVar7;
      if (fVar9 <= 1e-06) {
        local_90 = 1.0;
      }
      local_88 = *(undefined8 *)param_1;
      local_80 = *(undefined4 *)(param_1 + 8);
      local_98 = fVar11 * local_90;
      fStack_94 = fVar12 * local_90;
      local_90 = fVar6 * local_90;
      lVar3 = ScenegraphPhysicsContextManager::getInstance();
      fVar5 = (float)PlayerCenteredCollisionSystem::raycastClip
                               (*(PlayerCenteredCollisionSystem **)(lVar3 + 8),(Vector3 *)&local_88,
                                (Vector3 *)&local_98,fVar7 * fVar5);
      fVar5 = fVar5 / fVar7;
    }
    *(float *)(param_1 + 0x14) = fVar5;
    *(float *)(param_1 + 0x18) = fVar5;
    bVar2 = 0.0 < fVar5;
  }
  if (*(long *)(lVar1 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(bVar2);
  }
  return;
}


