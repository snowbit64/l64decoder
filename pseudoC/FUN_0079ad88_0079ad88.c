// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_0079ad88
// Entry Point: 0079ad88
// Size: 104 bytes
// Signature: undefined FUN_0079ad88(void)


void FUN_0079ad88(uint *param_1)

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
    VoiceChatManager::writeVoiceChatServerUpdateToStream(this_00,pGVar2,param_1[4],param_1[8]);
    return;
  }
  return;
}


