// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadDefaultImageOverlayTexture
// Entry Point: 00962e34
// Size: 144 bytes
// Signature: undefined __cdecl loadDefaultImageOverlayTexture(char * param_1, bool param_2)


/* TextureUtil::loadDefaultImageOverlayTexture(char const*, bool) */

void TextureUtil::loadDefaultImageOverlayTexture(char *param_1,bool param_2)

{
  long lVar1;
  ResourceManager *this;
  undefined **local_50;
  undefined local_48;
  undefined4 local_44;
  undefined2 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_48 = 1;
  local_50 = &PTR__ResourceDesc_00fd99b0;
  local_44 = 0;
  local_40 = 0;
  this = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::get(this,param_1,2,(ResourceDesc *)&local_50,1,true,param_2);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


