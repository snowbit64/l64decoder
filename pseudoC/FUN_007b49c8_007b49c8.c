// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b49c8
// Entry Point: 007b49c8
// Size: 172 bytes
// Signature: undefined FUN_007b49c8(void)


void FUN_007b49c8(ConditionalAnimationEntity *param_1,uint *param_2)

{
  long lVar1;
  byte bVar2;
  EntityRegistryManager *this;
  CharacterSet *pCVar3;
  DomXMLFile aDStack_120 [216];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  DomXMLFile::DomXMLFile(aDStack_120);
                    /* try { // try from 007b49fc to 007b4a3f has its CatchHandler @ 007b4a74 */
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  pCVar3 = (CharacterSet *)EntityRegistryManager::getEntityById(this,*param_2);
  bVar2 = DomXMLFile::loadFromFile(aDStack_120,*(char **)(param_2 + 4),true);
  if ((pCVar3 == (CharacterSet *)0x0 | (bVar2 ^ 0xff) & 1) == 0) {
    ConditionalAnimationEntity::LoadXML(param_1,pCVar3,aDStack_120,*(char **)(param_2 + 8));
  }
  DomXMLFile::~DomXMLFile(aDStack_120);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


