// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: AnimalCompanionManager
// Entry Point: 00873c68
// Size: 1160 bytes
// Signature: undefined __thiscall AnimalCompanionManager(AnimalCompanionManager * this, char * param_1, TransformGroup * param_2, Vector3 * param_3, TerrainTransformGroup * param_4, bool param_5, bool param_6, uint param_7, uint param_8)


/* AnimalCompanionManager::AnimalCompanionManager(char const*, TransformGroup*, Vector3 const&,
   TerrainTransformGroup*, bool, bool, unsigned int, unsigned int) */

void __thiscall
AnimalCompanionManager::AnimalCompanionManager
          (AnimalCompanionManager *this,char *param_1,TransformGroup *param_2,Vector3 *param_3,
          TerrainTransformGroup *param_4,bool param_5,bool param_6,uint param_7,uint param_8)

{
  AnimalAnimationSystemSource *this_00;
  int iVar1;
  TransformGroup *this_01;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  ObstacleWallDetector *this_02;
  AnimalAnimationSystem *this_03;
  AnimalSoundSystem *this_04;
  ObstacleWallDetector *pOVar7;
  AnimalAnimationSystemSource *pAVar8;
  AnimalAnimationSystem *pAVar9;
  AnimalSoundSystem *pAVar10;
  
  Entity::Entity((Entity *)this,param_1,true);
  this[0x28] = (AnimalCompanionManager)0x0;
  *(undefined ***)this = &PTR__AnimalCompanionManager_00fdc238;
  *(undefined ***)(this + 0x20) = &PTR__AnimalCompanionManager_00fdc268;
  *(undefined ***)(this + 0x30) = &PTR_onAssetLoaded_00fdc290;
  *(undefined8 *)(this + 0x38) = 0;
                    /* try { // try from 00873cdc to 00873ce3 has its CatchHandler @ 00874100 */
  I3DAssetPtr::I3DAssetPtr((I3DAssetPtr *)(this + 0x40));
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(AnimalCompanionManager **)(this + 0x80) = this + 0x88;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x90) = 0;
  *(AnimalCompanionManager **)(this + 0x98) = this + 0xa0;
  *(undefined8 *)(this + 0x118) = 0;
  *(undefined8 *)(this + 0x110) = 0;
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined8 *)(this + 0x170) = 0;
  this[0x188] = (AnimalCompanionManager)param_5;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x1a8) = 0;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined8 *)(this + 0x1c8) = 0;
  *(undefined8 *)(this + 0x1c0) = 0;
  this[0x189] = (AnimalCompanionManager)param_6;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined8 *)(this + 0x1d8) = 0;
  *(undefined8 *)(this + 0x1d0) = 0;
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1b0) = 0;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x78) = 0;
  *(ulong *)(this + 0x10) = *(ulong *)(this + 0x10) | 0x4000000;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xe8) = 0;
  *(undefined8 *)(this + 0xe0) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xd8) = 0;
  *(undefined8 *)(this + 0xd0) = 0;
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0xf0) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x150) = 0;
  *(undefined8 *)(this + 0x168) = 0;
  *(undefined8 *)(this + 0x160) = 0;
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined2 *)(this + 0x18a) = 0;
  *(uint *)(this + 0x18c) = param_7;
  this[0x212] = (AnimalCompanionManager)0x0;
  *(undefined4 *)(this + 0x220) = 0;
  *(undefined8 *)(this + 0x228) = 0;
  *(undefined8 *)(this + 0x198) = 0;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x1f8) = 0;
  *(undefined8 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x200) = 0;
  *(uint *)(this + 0x230) = param_8;
  this[0x238] = (AnimalCompanionManager)0x1;
  *(TerrainTransformGroup **)(this + 0x60) = param_4;
  uVar4 = *(undefined8 *)param_3;
  *(undefined4 *)(this + 0x21c) = *(undefined4 *)(param_3 + 8);
  *(undefined8 *)(this + 0x214) = uVar4;
                    /* try { // try from 00873e1c to 0087404b has its CatchHandler @ 00874108 */
  std::__ndk1::
  vector<AnimalCompanionManager::AnimalData,std::__ndk1::allocator<AnimalCompanionManager::AnimalData>>
  ::resize((vector<AnimalCompanionManager::AnimalData,std::__ndk1::allocator<AnimalCompanionManager::AnimalData>>
            *)(this + 0xb0),(ulong)param_7);
  this_02 = *(ObstacleWallDetector **)(this + 0xd0);
  lVar5 = (long)this_02 - *(long *)(this + 200) >> 4;
  uVar3 = (ulong)*(uint *)(this + 0x18c);
  uVar6 = lVar5 * -0x34115b1e5f75270d;
  if (uVar3 <= uVar6) {
    if (uVar3 <= uVar6 && uVar6 - uVar3 != 0) {
      pOVar7 = (ObstacleWallDetector *)(*(long *)(this + 200) + uVar3 * 0x3b0);
      while (this_02 != pOVar7) {
        this_02 = this_02 + -0x3b0;
        ObstacleWallDetector::~ObstacleWallDetector(this_02);
      }
      *(ObstacleWallDetector **)(this + 0xd0) = pOVar7;
    }
  }
  else {
    std::__ndk1::vector<ObstacleWallDetector,std::__ndk1::allocator<ObstacleWallDetector>>::__append
              ((vector<ObstacleWallDetector,std::__ndk1::allocator<ObstacleWallDetector>> *)
               (this + 200),uVar3 + lVar5 * 0x34115b1e5f75270d);
  }
  std::__ndk1::vector<ObstacleAvoidance,std::__ndk1::allocator<ObstacleAvoidance>>::resize
            ((vector<ObstacleAvoidance,std::__ndk1::allocator<ObstacleAvoidance>> *)(this + 0xe0),
             (ulong)*(uint *)(this + 0x18c));
  std::__ndk1::vector<AnimalSteering,std::__ndk1::allocator<AnimalSteering>>::resize
            ((vector<AnimalSteering,std::__ndk1::allocator<AnimalSteering>> *)(this + 0xf8),
             (ulong)*(uint *)(this + 0x18c));
  this_00 = *(AnimalAnimationSystemSource **)(this + 0x118);
  lVar5 = (long)this_00 - *(long *)(this + 0x110) >> 5;
  uVar3 = (ulong)*(uint *)(this + 0x18c);
  uVar6 = lVar5 * 0xa7868b41708e659;
  if (uVar3 <= uVar6) {
    if (uVar3 <= uVar6 && uVar6 - uVar3 != 0) {
      pAVar8 = (AnimalAnimationSystemSource *)(*(long *)(this + 0x110) + uVar3 * 0x3d20);
      while (this_00 != pAVar8) {
        this_00 = this_00 + -0x3d20;
        AnimalAnimationSystemSource::~AnimalAnimationSystemSource(this_00);
      }
      *(AnimalAnimationSystemSource **)(this + 0x118) = pAVar8;
    }
  }
  else {
    std::__ndk1::
    vector<AnimalAnimationSystemSource,std::__ndk1::allocator<AnimalAnimationSystemSource>>::
    __append((vector<AnimalAnimationSystemSource,std::__ndk1::allocator<AnimalAnimationSystemSource>>
              *)(this + 0x110),uVar3 + lVar5 * -0xa7868b41708e659);
  }
  this_03 = *(AnimalAnimationSystem **)(this + 0x130);
  lVar5 = (long)this_03 - *(long *)(this + 0x128) >> 3;
  uVar3 = (ulong)*(uint *)(this + 0x18c);
  uVar6 = lVar5 * -0x254813e22cbce4a9;
  if (uVar3 <= uVar6) {
    if (uVar3 <= uVar6 && uVar6 - uVar3 != 0) {
      pAVar9 = (AnimalAnimationSystem *)(*(long *)(this + 0x128) + uVar3 * 0x338);
      while (this_03 != pAVar9) {
        this_03 = this_03 + -0x338;
        AnimalAnimationSystem::~AnimalAnimationSystem(this_03);
      }
      *(AnimalAnimationSystem **)(this + 0x130) = pAVar9;
    }
  }
  else {
    std::__ndk1::vector<AnimalAnimationSystem,std::__ndk1::allocator<AnimalAnimationSystem>>::
    __append((vector<AnimalAnimationSystem,std::__ndk1::allocator<AnimalAnimationSystem>> *)
             (this + 0x128),uVar3 + lVar5 * 0x254813e22cbce4a9);
  }
  this_04 = *(AnimalSoundSystem **)(this + 0x148);
  lVar5 = (long)this_04 - *(long *)(this + 0x140) >> 3;
  uVar3 = (ulong)*(uint *)(this + 0x18c);
  uVar6 = lVar5 * 0x2e8ba2e8ba2e8ba3;
  if (uVar3 <= uVar6) {
    if (uVar3 <= uVar6 && uVar6 - uVar3 != 0) {
      pAVar10 = (AnimalSoundSystem *)(*(long *)(this + 0x140) + uVar3 * 0x58);
      while (this_04 != pAVar10) {
        this_04 = this_04 + -0x58;
        AnimalSoundSystem::~AnimalSoundSystem(this_04);
      }
      *(AnimalSoundSystem **)(this + 0x148) = pAVar10;
    }
  }
  else {
    std::__ndk1::vector<AnimalSoundSystem,std::__ndk1::allocator<AnimalSoundSystem>>::__append
              ((vector<AnimalSoundSystem,std::__ndk1::allocator<AnimalSoundSystem>> *)(this + 0x140)
               ,uVar3 + lVar5 * -0x2e8ba2e8ba2e8ba3);
  }
  uVar3 = (ulong)*(uint *)(this + 0x18c);
  uVar6 = *(long *)(this + 0x160) - *(long *)(this + 0x158) >> 3;
  if (uVar6 < uVar3) {
    std::__ndk1::vector<BehaviorContext*,std::__ndk1::allocator<BehaviorContext*>>::__append
              ((vector<BehaviorContext*,std::__ndk1::allocator<BehaviorContext*>> *)(this + 0x158),
               uVar3 - uVar6);
    uVar3 = (ulong)*(uint *)(this + 0x18c);
  }
  else if (uVar3 < uVar6) {
    *(ulong *)(this + 0x160) = *(long *)(this + 0x158) + uVar3 * 8;
  }
  std::__ndk1::vector<bool,std::__ndk1::allocator<bool>>::resize
            ((vector<bool,std::__ndk1::allocator<bool>> *)(this + 0x170),uVar3,false);
  memset(*(void **)(this + 0x158),0,(ulong)*(uint *)(this + 0x18c) << 3);
                    /* try { // try from 00874060 to 00874067 has its CatchHandler @ 00874108 */
  this_01 = (TransformGroup *)operator_new(0x158);
                    /* try { // try from 0087406c to 00874073 has its CatchHandler @ 008740f0 */
  TransformGroup::TransformGroup(this_01,param_1);
  *(TransformGroup **)(this + 0x38) = this_01;
                    /* try { // try from 00874084 to 0087408f has its CatchHandler @ 00874108 */
  (**(code **)(*(long *)param_2 + 0x18))(param_2,this_01,0xffffffff);
  iVar1 = strcasecmp(param_1,"dog");
  if (iVar1 == 0) {
    uVar2 = 1;
  }
  else {
    iVar1 = strcasecmp(param_1,"deer");
    if (iVar1 != 0) {
      *(undefined4 *)(this + 0x234) = 0;
      return;
    }
    uVar2 = 2;
  }
  *(undefined4 *)(this + 0x234) = uVar2;
  return;
}


