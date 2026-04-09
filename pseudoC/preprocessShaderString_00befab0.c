// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: preprocessShaderString
// Entry Point: 00befab0
// Size: 328 bytes
// Signature: undefined __cdecl preprocessShaderString(uint param_1, char * param_2, basic_string * param_3, bool param_4)


/* ShaderManager::preprocessShaderString(unsigned int, char const*, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*, bool) */

uint ShaderManager::preprocessShaderString
               (uint param_1,char *param_2,basic_string *param_3,bool param_4)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  uint uVar4;
  Preprocessor aPStack_2e8 [312];
  PreprocessorDesc aPStack_1b0 [8];
  byte local_1a8 [16];
  void *local_198;
  char *local_190;
  uint local_188;
  basic_string *local_178;
  void *local_80;
  void *local_78;
  undefined local_65;
  undefined4 local_64;
  code *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  PreprocessorDesc::PreprocessorDesc(aPStack_1b0);
                    /* try { // try from 00befaf8 to 00befb17 has its CatchHandler @ 00befc0c */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((char *)local_1a8);
  local_190 = param_2;
  local_188 = param_1;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  reserve((ulong)param_3);
  local_60 = preprocessorIncludeFileHandler;
  if (param_4) {
    local_64 = 1;
    local_65 = 1;
  }
                    /* try { // try from 00befb38 to 00befb43 has its CatchHandler @ 00befc08 */
  local_178 = param_3;
  Preprocessor::Preprocessor(aPStack_2e8,aPStack_1b0);
                    /* try { // try from 00befb44 to 00befb4b has its CatchHandler @ 00befbf8 */
  uVar4 = Preprocessor::processContext();
  Preprocessor::~Preprocessor(aPStack_2e8);
  pvVar3 = local_80;
  if (local_80 != (void *)0x0) {
    while (pvVar2 = local_78, pvVar2 != pvVar3) {
      if ((*(byte *)((long)pvVar2 + -0x28) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x18));
      }
      local_78 = (void *)((long)pvVar2 + -0x40);
      if ((*(byte *)((long)pvVar2 + -0x40) & 1) != 0) {
        operator_delete(*(void **)((long)pvVar2 + -0x30));
      }
    }
    local_78 = pvVar3;
    operator_delete(local_80);
  }
  if ((local_1a8[0] & 1) != 0) {
    operator_delete(local_198);
  }
  if (*(long *)(lVar1 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4 & 1;
}


