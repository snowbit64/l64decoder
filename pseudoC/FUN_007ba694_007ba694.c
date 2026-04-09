// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007ba694
// Entry Point: 007ba694
// Size: 172 bytes
// Signature: undefined FUN_007ba694(void)


long * FUN_007ba694(char **param_1)

{
  EntityRegistryManager *this;
  NavigationMeshScenegraphNode *pNVar1;
  long *this_00;
  TransformGroup *pTVar2;
  ulong uVar3;
  char *pcVar4;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pNVar1 = (NavigationMeshScenegraphNode *)
           EntityRegistryManager::getEntityById(this,*(uint *)(param_1 + 2));
  if ((pNVar1 != (NavigationMeshScenegraphNode *)0x0) && (((byte)pNVar1[0x12] & 1) != 0)) {
    this_00 = (long *)operator_new(0x1fd20);
    pcVar4 = *param_1;
                    /* try { // try from 007ba6d8 to 007ba707 has its CatchHandler @ 007ba740 */
    EngineManager::getInstance();
    pTVar2 = (TransformGroup *)Renderer::getRootNode();
    AnimalHusbandry::AnimalHusbandry
              ((AnimalHusbandry *)this_00,pcVar4,pTVar2,pNVar1,*(float *)(param_1 + 6),
               *(uint *)(param_1 + 8),*(uint *)(param_1 + 10),*(uint *)(param_1 + 0xc));
    uVar3 = AnimalHusbandry::load((AnimalHusbandry *)this_00,param_1[4]);
    if ((uVar3 & 1) != 0) {
      return this_00;
    }
    (**(code **)(*this_00 + 8))(this_00);
  }
  return (long *)0x0;
}


