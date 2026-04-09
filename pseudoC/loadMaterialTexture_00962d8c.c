// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadMaterialTexture
// Entry Point: 00962d8c
// Size: 168 bytes
// Signature: undefined __cdecl loadMaterialTexture(char * param_1, bool param_2, STREAM_QUEUE param_3)


/* TextureUtil::loadMaterialTexture(char const*, bool, StreamManager::STREAM_QUEUE) */

void TextureUtil::loadMaterialTexture(char *param_1,bool param_2,STREAM_QUEUE param_3)

{
  long lVar1;
  long lVar2;
  ResourceManager *this;
  undefined **local_50;
  undefined local_48;
  undefined4 local_44;
  undefined local_40;
  undefined local_3f;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  lVar2 = EngineManager::getInstance();
  local_3f = param_3 == 2;
  local_44 = *(undefined4 *)(lVar2 + 0x1fc);
  local_40 = 1;
  local_50 = &PTR__ResourceDesc_00fd99b0;
  local_48 = param_2;
  this = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::get(this,param_1,2,(ResourceDesc *)&local_50,param_3,true,true);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


