// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ad20
// Entry Point: 0079ad20
// Size: 104 bytes
// Signature: undefined FUN_0079ad20(void)


void FUN_0079ad20(uint *param_1)

{
  uint uVar1;
  EntityRegistryManager *this;
  long lVar2;
  GsBitStream *pGVar3;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar2 = EntityRegistryManager::getEntityById(this,*param_1);
  if (lVar2 != 0) {
    pGVar3 = (GsBitStream *)VoiceChatManager::getInstance();
    uVar1 = NetworkStream::getReadStream();
    VoiceChatManager::readVoiceChatServerUpdateFromStream(pGVar3,(float)param_1[4],uVar1);
    return;
  }
  return;
}


