// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: VorbisFileWrap
// Entry Point: 00b07d60
// Size: 68 bytes
// Signature: undefined __thiscall VorbisFileWrap(VorbisFileWrap * this, char * param_1)


/* AudioLoaderOGG::VorbisFileWrap::VorbisFileWrap(char const*) */

void __thiscall AudioLoaderOGG::VorbisFileWrap::VorbisFileWrap(VorbisFileWrap *this,char *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__VorbisFileWrap_00fe7268;
  *(undefined8 *)(this + 8) = 0;
  uVar1 = FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,0,false);
  *(undefined8 *)(this + 0x10) = uVar1;
  return;
}


