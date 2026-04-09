// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ae5c
// Entry Point: 0079ae5c
// Size: 100 bytes
// Signature: undefined FUN_0079ae5c(void)


void FUN_0079ae5c(uint *param_1)

{
  EntityRegistryManager *this;
  long lVar1;
  VoiceChatManager *this_00;
  GsBitStream *pGVar2;
  
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar1 = EntityRegistryManager::getEntityById(this,*param_1);
  if (lVar1 != 0) {
    this_00 = (VoiceChatManager *)VoiceChatManager::getInstance();
    pGVar2 = (GsBitStream *)NetworkStream::getWriteStream();
    VoiceChatManager::writeVoiceChatClientUpdateToStream(this_00,pGVar2,param_1[4]);
    return;
  }
  return;
}


