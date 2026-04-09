// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadXMLFile
// Entry Point: 008751f4
// Size: 1116 bytes
// Signature: undefined __thiscall loadXMLFile(AnimalCompanionManager * this, DomXMLFile * param_1, char * param_2)


/* AnimalCompanionManager::loadXMLFile(DomXMLFile&, char const*) */

void __thiscall
AnimalCompanionManager::loadXMLFile(AnimalCompanionManager *this,DomXMLFile *param_1,char *param_2)

{
  long *plVar1;
  BehaviorDataSource *this_00;
  long lVar2;
  byte bVar3;
  undefined4 uVar4;
  DeerBehaviorContext *this_01;
  DogBehaviorContext *this_02;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  uint uVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  char acStack_e8 [128];
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  FUN_00875158(acStack_e8,param_1,param_2,"%s.asset#skeletonNode",param_2);
  Properties::getString((Properties *)param_1,acStack_e8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x1a8));
  FUN_00875158(acStack_e8);
  Properties::getString((Properties *)param_1,acStack_e8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x1c0));
  FUN_00875158(acStack_e8);
  Properties::getString((Properties *)param_1,acStack_e8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x1d8));
  FUN_00875158(acStack_e8);
  Properties::getString((Properties *)param_1,acStack_e8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)(this + 0x1f0));
  FUN_00876b58(acStack_e8,extraout_x1,"%s.asset.texture#multi",param_2);
  bVar3 = Properties::getBoolDefault((Properties *)param_1,acStack_e8,false);
  this[0x210] = (AnimalCompanionManager)(bVar3 & 1);
  FUN_00876b58(acStack_e8,extraout_x1_00,"%s.asset.texture#tileU",param_2);
  uVar4 = Properties::getInt((Properties *)param_1,acStack_e8,0);
  *(undefined4 *)(this + 0x208) = uVar4;
  FUN_00876b58(acStack_e8,extraout_x1_01,"%s.asset.texture#tileV",param_2);
  uVar4 = Properties::getInt((Properties *)param_1,acStack_e8,0);
  *(undefined4 *)(this + 0x20c) = uVar4;
  FUN_00876b58(acStack_e8,extraout_x1_02,"%s.asset.texture#mirrorV",param_2);
  bVar3 = Properties::getBoolDefault((Properties *)param_1,acStack_e8,false);
  this[0x211] = (AnimalCompanionManager)(bVar3 & 1);
  FUN_00875158(acStack_e8);
  AnimalAnimationSystemSource::loadFromXml
            (*(AnimalAnimationSystemSource **)(this + 0x110),param_1,acStack_e8);
  FUN_00875158(acStack_e8);
  AnimalSoundSource::loadXML((AnimalSoundSource *)(this + 0x68),param_1,acStack_e8);
  FUN_00875158(acStack_e8);
  this_00 = (BehaviorDataSource *)(this + 0x80);
  BehaviorDataSource::loadXML(this_00,param_1,acStack_e8);
  uVar5 = *(uint *)(this + 0x18c);
  if (uVar5 != 0) {
    lVar9 = 0;
    lVar10 = 0;
    lVar11 = 0;
    lVar12 = 0;
    uVar13 = 0;
    do {
      AnimalSoundSystem::init
                ((AnimalSoundSystem *)(*(long *)(this + 0x140) + lVar12),
                 (AnimalSoundSource *)(this + 0x68),*(TransformGroup **)(this + 0x38),
                 *(uint *)(this + 0x230),(bool)this[0x238]);
      AnimalAnimationSystemSource::operator=
                (*(AnimalAnimationSystemSource **)(this + 0x110) + lVar11,
                 *(AnimalAnimationSystemSource **)(this + 0x110));
      AnimalSteering::setWallDetector
                ((AnimalSteering *)(*(long *)(this + 0xf8) + lVar10),
                 (ObstacleWallDetector *)(*(long *)(this + 200) + lVar9));
      uVar5 = *(uint *)(this + 0x18c);
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x58;
      lVar11 = lVar11 + 0x3d20;
      lVar10 = lVar10 + 0xe0;
      lVar9 = lVar9 + 0x3b0;
    } while (uVar13 < uVar5);
  }
  if (*(int *)(this + 0x234) == 1) {
    if (uVar5 == 0) goto LAB_0087561c;
    lVar9 = 0;
    lVar10 = 0;
    lVar12 = 0;
    uVar13 = 0;
    do {
      this_02 = (DogBehaviorContext *)operator_new(0x198);
                    /* try { // try from 00875550 to 00875553 has its CatchHandler @ 00875650 */
      DogBehaviorContext::DogBehaviorContext(this_02);
      lVar14 = uVar13 * 8;
      *(DogBehaviorContext **)(*(long *)(this + 0x158) + lVar14) = this_02;
      BehaviorContext::init
                (*(BehaviorContext **)(*(long *)(this + 0x158) + lVar14),this_00,
                 (AnimalAnimationSystem *)(*(long *)(this + 0x128) + lVar12),
                 (AnimalSoundSystem *)(*(long *)(this + 0x140) + lVar10),
                 (AnimalSteering *)(*(long *)(this + 0xf8) + lVar9));
      lVar11 = *(long *)(this + 0x158);
      lVar12 = lVar12 + 0x338;
      lVar10 = lVar10 + 0x58;
      lVar9 = lVar9 + 0xe0;
      *(AnimalCompanionManager **)(*(long *)(lVar11 + lVar14) + 0xb8) = this;
      *(int *)(*(long *)(lVar11 + lVar14) + 200) = (int)uVar13;
      uVar13 = uVar13 + 1;
      uVar5 = *(uint *)(this + 0x18c);
    } while (uVar13 < uVar5);
  }
  else if (*(int *)(this + 0x234) == 2) {
    if (uVar5 == 0) goto LAB_0087561c;
    lVar11 = 0;
    lVar9 = 0;
    lVar10 = 0;
    lVar12 = 0;
    uVar13 = 0;
    do {
      this_01 = (DeerBehaviorContext *)operator_new(0x140);
                    /* try { // try from 008754c4 to 008754c7 has its CatchHandler @ 00875654 */
      DeerBehaviorContext::DeerBehaviorContext(this_01);
      *(DeerBehaviorContext **)(*(long *)(this + 0x158) + uVar13 * 8) = this_01;
      BehaviorContext::init
                (*(BehaviorContext **)(*(long *)(this + 0x158) + uVar13 * 8),this_00,
                 (AnimalAnimationSystem *)(*(long *)(this + 0x128) + lVar12),
                 (AnimalSoundSystem *)(*(long *)(this + 0x140) + lVar10),
                 (AnimalSteering *)(*(long *)(this + 0xf8) + lVar9));
      ObstacleWallDetector::enableWaterDetection
                ((ObstacleWallDetector *)(*(long *)(this + 200) + lVar11),true);
      uVar5 = *(uint *)(this + 0x18c);
      uVar13 = uVar13 + 1;
      lVar12 = lVar12 + 0x338;
      lVar10 = lVar10 + 0x58;
      lVar9 = lVar9 + 0xe0;
      lVar11 = lVar11 + 0x3b0;
    } while (uVar13 < uVar5);
  }
  if (uVar5 != 0) {
    lVar12 = *(long *)(this + 0x158);
    uVar13 = (ulong)uVar5;
    uVar4 = *(undefined4 *)(this + 0x224);
    if (uVar5 == 1) {
      uVar6 = 0;
    }
    else {
      uVar6 = uVar13 & 0xfffffffe;
      plVar7 = (long *)(lVar12 + 8);
      uVar8 = uVar6;
      do {
        plVar1 = plVar7 + -1;
        lVar10 = *plVar7;
        plVar7 = plVar7 + 2;
        uVar8 = uVar8 - 2;
        *(undefined4 *)(*plVar1 + 0xec) = uVar4;
        *(undefined4 *)(lVar10 + 0xec) = uVar4;
      } while (uVar8 != 0);
      if (uVar6 == uVar13) goto LAB_0087561c;
    }
    lVar10 = uVar13 - uVar6;
    plVar7 = (long *)(lVar12 + uVar6 * 8);
    do {
      lVar10 = lVar10 + -1;
      *(undefined4 *)(*plVar7 + 0xec) = uVar4;
      plVar7 = plVar7 + 1;
    } while (lVar10 != 0);
  }
LAB_0087561c:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


