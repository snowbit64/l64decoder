// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addAnimalsToWorld
// Entry Point: 00875b64
// Size: 1164 bytes
// Signature: undefined addAnimalsToWorld(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* AnimalCompanionManager::addAnimalsToWorld() */

void AnimalCompanionManager::addAnimalsToWorld(void)

{
  AnimalCompanionManager *pAVar1;
  CharacterSet *pCVar2;
  GsShape *this;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  AnimalCompanionManager *in_x0;
  undefined8 uVar9;
  ScenegraphNode *this_00;
  Bt2ScenegraphPhysicsContext *this_01;
  Logger *this_02;
  long lVar10;
  ulong uVar11;
  long lVar12;
  TransformGroup *pTVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  undefined4 uVar17;
  float fVar18;
  undefined8 local_98;
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  
  lVar7 = tpidr_el0;
  local_78 = *(long *)(lVar7 + 0x28);
  if (*(int *)(in_x0 + 0x18c) != 0) {
    lVar15 = 0;
    lVar16 = 0;
    lVar14 = 0;
    lVar12 = 0;
    uVar11 = 0;
    do {
      pTVar13 = *(TransformGroup **)(*(long *)(in_x0 + 0xb0) + lVar16 + 8);
      if ((pTVar13 == (TransformGroup *)0x0) ||
         ((int)((ulong)(*(long *)(pTVar13 + 0x30) - *(long *)(pTVar13 + 0x28)) >> 3) == 0)) {
        if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
           (iVar8 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar8 != 0
           )) {
                    /* try { // try from 00875f74 to 00875f7b has its CatchHandler @ 00876000 */
          this_02 = (Logger *)operator_new(0x38);
                    /* try { // try from 00875f80 to 00875f83 has its CatchHandler @ 00875ff0 */
          Logger::Logger(this_02);
          LogManager::getInstance()::singletonLogManager = this_02;
          __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                       &PTR_LOOP_00fd8de0);
          __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
        }
        LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                           "Error: Skeleton node or mesh node is incorrect for companion animals.\n"
                          );
      }
      else {
        pAVar1 = in_x0 + 0x1a9;
        if (((byte)in_x0[0x1a8] & 1) != 0) {
          pAVar1 = *(AnimalCompanionManager **)(in_x0 + 0x1b8);
        }
        uVar9 = ScenegraphUtil::parseIndexPath(pTVar13,(char *)pAVar1);
        *(undefined8 *)(*(long *)(in_x0 + 0xb0) + lVar16 + 0x10) = uVar9;
        pAVar1 = in_x0 + 0x1c1;
        if (((byte)in_x0[0x1c0] & 1) != 0) {
          pAVar1 = *(AnimalCompanionManager **)(in_x0 + 0x1d0);
        }
        this_00 = (ScenegraphNode *)ScenegraphUtil::parseIndexPath(pTVar13,(char *)pAVar1);
        lVar10 = *(long *)(in_x0 + 0xb0);
        *(ScenegraphNode **)(lVar10 + lVar16 + 0x18) = this_00;
        ScenegraphNode::setVisibility(this_00,*(bool *)(lVar10 + lVar16 + 0x50));
        pAVar1 = in_x0 + 0x1d9;
        if (((byte)in_x0[0x1d8] & 1) != 0) {
          pAVar1 = *(AnimalCompanionManager **)(in_x0 + 0x1e8);
        }
        uVar9 = ScenegraphUtil::parseIndexPath(pTVar13,(char *)pAVar1);
        lVar10 = *(long *)(in_x0 + 0xb0);
        *(undefined8 *)(lVar10 + lVar16 + 0x20) = uVar9;
        if (*(int *)(in_x0 + 0x234) == 2) {
          pTVar13 = *(TransformGroup **)(lVar10 + lVar16 + 0x18);
          if ((((byte)pTVar13[0x11] >> 3 & 1) == 0) &&
             ((int)((ulong)(*(long *)(pTVar13 + 0x30) - (long)*(TransformGroup ***)(pTVar13 + 0x28))
                   >> 3) != 0)) {
            pTVar13 = **(TransformGroup ***)(pTVar13 + 0x28);
          }
          DeerBehaviorContext::setVisibleMesh
                    (*(DeerBehaviorContext **)(*(long *)(in_x0 + 0x158) + uVar11 * 8),pTVar13);
        }
        else if (*(int *)(in_x0 + 0x234) == 1) {
          pAVar1 = in_x0 + 0x1f1;
          if (((byte)in_x0[0x1f0] & 1) != 0) {
            pAVar1 = *(AnimalCompanionManager **)(in_x0 + 0x200);
          }
          uVar9 = ScenegraphUtil::parseIndexPath(pTVar13,(char *)pAVar1);
          *(undefined8 *)(*(long *)(*(long *)(in_x0 + 0x158) + uVar11 * 8) + 0x110) = uVar9;
        }
        pTVar13 = *(TransformGroup **)(*(long *)(in_x0 + 0xb0) + lVar16 + 0x10);
        this = *(GsShape **)(*(long *)(in_x0 + 0xb0) + lVar16 + 0x18);
        (**(code **)(**(long **)(in_x0 + 0x38) + 0x18))(*(long **)(in_x0 + 0x38),pTVar13,0xffffffff)
        ;
        (**(code **)(**(long **)(in_x0 + 0x38) + 0x18))(*(long **)(in_x0 + 0x38),this,0xffffffff);
        if ((int)((ulong)(*(long *)(pTVar13 + 0x30) - (long)*(long **)(pTVar13 + 0x28)) >> 3) != 0)
        {
          lVar10 = *(long *)(**(long **)(pTVar13 + 0x28) + 0x110);
          pCVar2 = (CharacterSet *)0x0;
          if (lVar10 != 0) {
            pCVar2 = (CharacterSet *)(lVar10 + -0x20);
          }
          AnimalAnimationSystem::load
                    ((AnimalAnimationSystem *)(*(long *)(in_x0 + 0x128) + lVar12),
                     (AnimalAnimationSystemSource *)(*(long *)(in_x0 + 0x110) + lVar14),pTVar13,
                     pCVar2);
          AnimalAnimationSystem::setSoundSystem
                    ((AnimalAnimationSystem *)(*(long *)(in_x0 + 0x128) + lVar12),
                     (AnimalSoundSystem *)(*(long *)(in_x0 + 0x140) + lVar16));
        }
        if ((in_x0[0x210] != (AnimalCompanionManager)0x0) && (((byte)this[0x11] >> 3 & 1) != 0)) {
          uVar3 = *(uint *)(in_x0 + 0x208);
          uVar4 = *(uint *)(in_x0 + 0x20c) * uVar3;
          local_80 = 0;
          uVar17 = 0x3f800000;
          if (in_x0[0x211] != (AnimalCompanionManager)0x0) {
            uVar17 = 0xbf800000;
          }
          uVar5 = 1 - uVar4;
          if (1 < uVar4) {
            uVar5 = 1;
          }
          uVar6 = 0;
          if (uVar3 != 0) {
            uVar6 = uVar5 / uVar3;
          }
          if (1 < uVar4) {
            uVar17 = 0x3f800000;
          }
          local_88 = CONCAT44(uVar17,0x3f800000);
          local_90 = (float)(ulong)(uVar5 - uVar6 * uVar3) / (float)(ulong)uVar3;
          fVar18 = (float)(ulong)*(uint *)(in_x0 + 0x20c);
          fStack_8c = (float)(ulong)uVar6 / fVar18;
          local_98 = CONCAT44(1.0 / fVar18,1.0 / (float)(ulong)uVar3);
          GsShape::setCustomShaderParameter(this,"mirrorScaleAndOffsetUV",(float *)&local_88);
          GsShape::setCustomShaderParameter(this,"atlasInvSizeAndOffsetUV",(float *)&local_98);
        }
        local_88 = *(undefined8 *)(in_x0 + 0x214);
        local_80._0_4_ = *(float *)(in_x0 + 0x21c);
        fVar18 = (float)MathUtil::getRandomMinMax
                                  (-*(float *)(in_x0 + 0x220),*(float *)(in_x0 + 0x220));
        local_88 = CONCAT44(local_88._4_4_,fVar18 + (float)local_88);
        fVar18 = (float)MathUtil::getRandomMinMax
                                  (-*(float *)(in_x0 + 0x220),*(float *)(in_x0 + 0x220));
        local_98 = 0;
        local_90 = 1.0;
        local_80 = CONCAT44(local_80._4_4_,fVar18 + (float)local_80);
        TransformGroup::setTranslation(pTVar13,(Vector3 *)&local_88);
        adjustGroundLevel(in_x0,(uint)uVar11,true);
        AnimalSteering::setPositionAndDirection
                  ((AnimalSteering *)(*(long *)(in_x0 + 0xf8) + lVar15),(Vector3 *)&local_88,
                   (Vector3 *)&local_98);
        AnimalSteering::setRadius
                  ((AnimalSteering *)(*(long *)(in_x0 + 0xf8) + lVar15),
                   *(float *)(*(long *)(in_x0 + 0xb0) + lVar16));
        (**(code **)(**(long **)(*(long *)(in_x0 + 0x158) + uVar11 * 8) + 0x10))();
        AnimalSteering::getPositionAndDirection
                  ((AnimalSteering *)(*(long *)(in_x0 + 0xf8) + lVar15),(Vector3 *)&local_88,
                   (Vector3 *)&local_98);
        AnimalAnimationSystem::setPose
                  ((AnimalAnimationSystem *)(*(long *)(in_x0 + 0x128) + lVar12),(Vector3 *)&local_88
                   ,(Vector3 *)&local_98,false);
        AnimalAnimationSystem::update
                  ((AnimalAnimationSystem *)(*(long *)(in_x0 + 0x128) + lVar12),0.0,false);
        if (in_x0[0x213] != (AnimalCompanionManager)0x0) {
          ScenegraphPhysicsContextManager::getInstance();
          this_01 = (Bt2ScenegraphPhysicsContext *)ScenegraphPhysicsContextManager::getContext();
          Bt2ScenegraphPhysicsContext::enqueueAddTransformGroup(this_01,pTVar13);
        }
      }
      uVar11 = uVar11 + 1;
      lVar12 = lVar12 + 0x338;
      lVar14 = lVar14 + 0x3d20;
      lVar16 = lVar16 + 0x58;
      lVar15 = lVar15 + 0xe0;
    } while (uVar11 < *(uint *)(in_x0 + 0x18c));
  }
  if (*(long *)(lVar7 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


