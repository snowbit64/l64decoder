// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007bd318
// Entry Point: 007bd318
// Size: 140 bytes
// Signature: undefined FUN_007bd318(void)


TrafficSystem * FUN_007bd318(char **param_1)

{
  EntityRegistryManager *this;
  TransformGroup *pTVar1;
  TransformGroup *pTVar2;
  TrafficSystem *this_00;
  char *pcVar3;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pTVar1 = (TransformGroup *)EntityRegistryManager::getEntityById(this,*(uint *)(param_1 + 2));
  if ((pTVar1 == (TransformGroup *)0x0) || (((byte)pTVar1[0x10] >> 5 & 1) == 0)) {
    this_00 = (TrafficSystem *)0x0;
  }
  else {
    this_00 = (TrafficSystem *)operator_new(0x7278);
    pcVar3 = *param_1;
                    /* try { // try from 007bd360 to 007bd38f has its CatchHandler @ 007bd3a4 */
    EngineManager::getInstance();
    pTVar2 = (TransformGroup *)Renderer::getRootNode();
    TrafficSystem::TrafficSystem
              (this_00,pcVar3,pTVar1,pTVar2,*(bool *)(param_1 + 4),*(bool *)(param_1 + 6),
               *(bool *)(param_1 + 8),*(uint *)(param_1 + 10));
  }
  return this_00;
}


