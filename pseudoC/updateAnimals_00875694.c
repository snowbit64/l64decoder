// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateAnimals
// Entry Point: 00875694
// Size: 1232 bytes
// Signature: undefined __thiscall updateAnimals(AnimalCompanionManager * this, float param_1)


/* AnimalCompanionManager::updateAnimals(float) */

void __thiscall AnimalCompanionManager::updateAnimals(AnimalCompanionManager *this,float param_1)

{
  AnimalSteering *pAVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined4 uVar13;
  float fVar14;
  float local_c0;
  float fStack_bc;
  undefined4 local_b8;
  float fStack_b4;
  undefined4 local_b0;
  Vector3 aVStack_a8 [16];
  long local_98;
  
  lVar2 = tpidr_el0;
  local_98 = *(long *)(lVar2 + 0x28);
  if ((this[0x188] == (AnimalCompanionManager)0x0) && (*(int *)(this + 0x234) != 2)) {
    uVar4 = *(uint *)(this + 0x18c);
  }
  else {
    if (*(int *)(this + 0x18c) == 0) goto LAB_00875b24;
    uVar6 = 0;
    do {
      (**(code **)(**(long **)(*(long *)(this + 0x158) + uVar6 * 8) + 0x18))(param_1);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x18c));
    if (*(uint *)(this + 0x18c) == 0) goto LAB_00875b24;
    uVar6 = 0;
    do {
      AnimalSteering::updateTargetProvider
                ((AnimalSteering *)(*(long *)(this + 0xf8) + uVar6 * 0xe0),param_1);
      if (*(int *)(*(long *)(this + 0xf8) + uVar6 * 0xe0) != 0) {
        ObstacleAvoidance::reset();
        AnimalSteering::getPositionAndDirection
                  ((AnimalSteering *)(*(long *)(this + 0xf8) + uVar6 * 0xe0),aVStack_a8,
                   (Vector3 *)&local_b8);
        ObstacleWallDetector::update
                  ((ObstacleWallDetector *)(*(long *)(this + 200) + uVar6 * 0x3b0),aVStack_a8,
                   (Vector3 *)&local_b8,(ObstacleAvoidance *)0x0);
        fVar14 = (float)ObstacleWallDetector::getMinDistance();
        fVar10 = *(float *)(*(long *)(this + 0xf8) + uVar6 * 0xe0 + 0x30);
        uVar4 = *(uint *)(this + 0x18c);
        fVar8 = 2.0;
        if (fVar10 + fVar10 <= fVar14) {
          fVar8 = 1.0;
        }
        if (uVar4 != 0) {
          lVar7 = 0;
          uVar3 = 0;
          do {
            if (uVar6 != uVar3) {
              lVar5 = *(long *)(this + 0xf8) + uVar6 * 0xe0;
              pAVar1 = (AnimalSteering *)(*(long *)(this + 0xf8) + lVar7);
              fVar14 = *(float *)(lVar5 + 4) - *(float *)(pAVar1 + 4);
              fVar10 = *(float *)(lVar5 + 8) - *(float *)(pAVar1 + 8);
              fVar14 = (float)NEON_fmadd(fVar10,fVar10,fVar14 * fVar14);
              if (fVar14 <= 25.0) {
                ObstacleAvoidance::addAgent
                          ((ObstacleAvoidance *)(*(long *)(this + 0xe0) + uVar6 * 0x58),pAVar1);
                uVar4 = *(uint *)(this + 0x18c);
              }
            }
            uVar3 = uVar3 + 1;
            lVar7 = lVar7 + 0xe0;
          } while (uVar3 < uVar4);
        }
        adjustGroundLevel(this,(uint)uVar6,false);
        lVar7 = *(long *)(this + 0xf8);
        lVar5 = uVar6 * 0xe0;
        fVar14 = (float)AnimalAnimationSystem::getMaxAngularVelocity();
        AnimalSteering::setMaxAngularVelocity((AnimalSteering *)(lVar7 + lVar5),fVar8 * fVar14);
        AnimalSteering::update((AnimalSteering *)(*(long *)(this + 0xf8) + lVar5),param_1);
        fVar8 = (float)NEON_fmadd(*(undefined4 *)(*(long *)(this + 0xf8) + lVar5 + 0x68),0x3f000000,
                                  0x3f000000);
        AnimalAnimationSystem::setCustomSubblend
                  ((AnimalAnimationSystem *)(*(long *)(this + 0x128) + uVar6 * 0x338),1.0 - fVar8);
        if ((*(int *)(this + 0x234) == 2) &&
           (*(char *)(*(long *)(*(long *)(this + 0x158) + uVar6 * 8) + 0x138) != '\0')) {
          lVar7 = *(long *)(this + 0xb0) + uVar6 * 0x58;
          *(undefined2 *)(lVar7 + 0x50) = 0;
          ScenegraphNode::setVisibility(*(ScenegraphNode **)(lVar7 + 0x18),false);
        }
        this[0x212] = (AnimalCompanionManager)0x1;
      }
      uVar4 = *(uint *)(this + 0x18c);
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar4);
  }
  if (uVar4 != 0) {
    uVar6 = 0;
    do {
      AnimalSoundSystem::update(param_1);
      if ((this[0x188] != (AnimalCompanionManager)0x0) &&
         (uVar3 = AnimalSoundSystem::isNetworkDirty(), (uVar3 & 1) != 0)) {
        uVar3 = uVar6 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(*(long *)(this + 0x170) + uVar3) =
             *(ulong *)(*(long *)(this + 0x170) + uVar3) | 1L << (uVar6 & 0x3f);
        this[0x212] = (AnimalCompanionManager)0x1;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(this + 0x18c));
    if (*(uint *)(this + 0x18c) != 0) {
      lVar5 = 0;
      lVar7 = 0;
      uVar6 = 0;
      do {
        AnimalSteering::getPositionAndDirection
                  ((AnimalSteering *)(*(long *)(this + 0xf8) + lVar7),aVStack_a8,
                   (Vector3 *)&local_b8);
        uVar3 = AnimalAnimationSystem::isMoveActive();
        if (((uVar3 & 1) != 0) && (*(int *)(this + 0x234) == 1)) {
          fVar14 = *(float *)(*(long *)(this + 0xf8) + lVar7 + 0x68);
          fVar8 = (float)MathUtil::degreeToRadian(15.0);
          sincosf(fVar14 * fVar8 * 0.5,&fStack_bc,&local_c0);
          fVar8 = fStack_bc * 0.0;
          fVar14 = fVar8 * fVar8;
          fVar11 = fStack_bc * fVar8 - local_c0 * fVar8;
          fVar10 = fStack_bc * fVar8 + local_c0 * fVar8;
          fVar12 = local_c0 * fStack_bc + fVar14;
          fVar8 = fVar14 - local_c0 * fStack_bc;
          fVar11 = fVar11 + fVar11;
          fVar10 = fVar10 + fVar10;
          uVar9 = NEON_fmadd(fStack_bc * fStack_bc + fVar14,0xc0000000,0x3f800000);
          uVar13 = NEON_fmadd(local_b8,uVar9,fStack_b4 * fVar11);
          fVar14 = (float)NEON_fmadd(fVar14 + fVar14,0xc0000000,0x3f800000);
          local_b8 = NEON_fmadd(local_b0,fVar12 + fVar12,uVar13);
          uVar13 = NEON_fmadd(local_b8,fVar10,fStack_b4 * fVar14);
          fStack_b4 = (float)NEON_fmadd(local_b0,fVar11,uVar13);
          uVar13 = NEON_fmadd(local_b8,fVar8 + fVar8,fVar10 * fStack_b4);
          local_b0 = NEON_fmadd(local_b0,uVar9,uVar13);
        }
        AnimalAnimationSystem::setPose
                  ((AnimalAnimationSystem *)(*(long *)(this + 0x128) + lVar5),aVStack_a8,
                   (Vector3 *)&local_b8,false);
        if (this[0x188] == (AnimalCompanionManager)0x0) {
          AnimalAnimationSystem::updateClient
                    ((AnimalAnimationSystem *)(*(long *)(this + 0x128) + lVar5),param_1,false);
        }
        else {
          AnimalAnimationSystem::update
                    ((AnimalAnimationSystem *)(*(long *)(this + 0x128) + lVar5),param_1,false);
        }
        uVar3 = (ulong)*(uint *)(this + 0x18c);
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0xe0;
        lVar5 = lVar5 + 0x338;
      } while (uVar6 < uVar3);
      if (*(uint *)(this + 0x18c) != 0) {
        lVar7 = 0;
        uVar6 = 0;
        do {
          if (*(char *)(*(long *)(this + 0xb0) + lVar7 + 0x48) != '\0' &&
              *(int *)(*(long *)(this + 0xb0) + lVar7 + 0x4c) == 0) {
            addTrigger(this,(uint)uVar6);
            uVar3 = (ulong)*(uint *)(this + 0x18c);
          }
          uVar6 = uVar6 + 1;
          lVar7 = lVar7 + 0x58;
        } while (uVar6 < uVar3);
      }
    }
  }
LAB_00875b24:
  if (*(long *)(lVar2 + 0x28) != local_98) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


