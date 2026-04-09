// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: init
// Entry Point: 00b07278
// Size: 48 bytes
// Signature: undefined __thiscall init(NgGameStats * this, char * param_1, IPostGameStat * param_2)


/* NgGameStats::init(char const*, NgGameStats::IPostGameStat*) */

uint __thiscall NgGameStats::init(NgGameStats *this,char *param_1,IPostGameStat *param_2)

{
  uint uVar1;
  
  uVar1 = JSONTranslationManager::init((JSONTranslationManager *)this,param_1);
  if ((uVar1 & 1) != 0) {
    *(IPostGameStat **)(this + 0x18) = param_2;
  }
  return uVar1 & 1;
}


