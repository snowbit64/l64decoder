// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_007b7dc4
// Entry Point: 007b7dc4
// Size: 288 bytes
// Signature: undefined FUN_007b7dc4(void)


void FUN_007b7dc4(undefined8 param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  EntityRegistryManager *this;
  long lVar4;
  GsBitStream *pGVar5;
  LuauScriptSystem *this_00;
  uchar *puVar6;
  char acStack_448 [1024];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  this = (EntityRegistryManager *)EntityRegistryManager::getInstance();
  lVar4 = EntityRegistryManager::getEntityById(this,*param_2);
  if (lVar4 == 0) {
    FUN_0079f4f0(acStack_448);
    DebugUtil::message(acStack_448,"","pStreamSrc != __null",
                       "T:/src/engine/app/ReflectionAndScriptBinding.cpp",0x17e1);
    ScriptSystemManager::getInstance();
    this_00 = (LuauScriptSystem *)ScriptSystemManager::getCurrentScriptSystem();
    LuauScriptSystem::handleInternalError(this_00,"handleInternalError");
  }
  else {
    if (*(char *)(param_2 + 8) == '\0') {
      pGVar5 = (GsBitStream *)NetworkStream::getWriteStream();
    }
    else {
      pGVar5 = (GsBitStream *)NetworkStream::getReadStream();
    }
    uVar3 = GsBitStream::getNumUnreadBits();
    uVar1 = param_2[4];
    if (uVar3 <= param_2[4]) {
      uVar1 = uVar3;
    }
    puVar6 = (uchar *)operator_new__((ulong)(uVar1 + 7 >> 3));
    GsBitStream::readBits(pGVar5,puVar6,uVar1,false);
    pGVar5 = (GsBitStream *)NetworkStream::getWriteStream();
    GsBitStream::writeBits(pGVar5,puVar6,uVar1,false);
    operator_delete__(puVar6);
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


