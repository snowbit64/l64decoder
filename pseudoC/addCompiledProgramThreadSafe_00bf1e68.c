// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addCompiledProgramThreadSafe
// Entry Point: 00bf1e68
// Size: 484 bytes
// Signature: undefined __thiscall addCompiledProgramThreadSafe(ShaderManager * this, __map_iterator param_1, ShaderHash * param_2, uint param_3, uchar * param_4, __map_iterator param_5, ShaderHash * param_6, uint param_7, uchar * param_8, __map_iterator param_9, ShaderHash * param_10, uint param_11, uchar * param_12, __map_iterator param_13, vector * param_14)


/* ShaderManager::addCompiledProgramThreadSafe(std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned
   int>, void*>*, long> >, CompiledShaderArchive::ShaderHash const&, unsigned int, unsigned char
   const*,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned
   int>, void*>*, long> >, CompiledShaderArchive::ShaderHash const&, unsigned int, unsigned char
   const*,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned
   int>, void*>*, long> >, CompiledShaderArchive::ShaderHash const&, unsigned int, unsigned char
   const*,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId, unsigned
   int>, void*>*, long> >, std::__ndk1::vector<ShaderStructLayout,
   std::__ndk1::allocator<ShaderStructLayout> >&) */

void __thiscall
ShaderManager::addCompiledProgramThreadSafe
          (ShaderManager *this,__map_iterator param_1,ShaderHash *param_2,uint param_3,
          uchar *param_4,__map_iterator param_5,ShaderHash *param_6,uint param_7,uchar *param_8,
          __map_iterator param_9,ShaderHash *param_10,uint param_11,uchar *param_12,
          __map_iterator param_13,vector *param_14)

{
  int iVar1;
  ulong uVar2;
  
  if (param_11 == 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0)) {
                    /* try { // try from 00bf2014 to 00bf201f has its CatchHandler @ 00bf204c */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Adding compiled graphics program with missing vertex or fragment shader.\n"
                      );
    if ((param_3 == 0) || (param_7 == 0)) goto LAB_00bf1f98;
LAB_00bf1f10:
    uVar2 = CompiledShaderArchive::addShaderThreadSafe
                      (*(CompiledShaderArchive **)this,param_1,param_2,param_3,param_4);
    if ((uVar2 & 1) == 0) goto LAB_00bf1f98;
  }
  else {
    if ((param_7 | param_3) != 0) {
      if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
         (iVar1 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar1 != 0))
      {
                    /* try { // try from 00bf1fcc to 00bf1fd7 has its CatchHandler @ 00bf2050 */
        LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
        __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                     &PTR_LOOP_00fd8de0);
        __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
      }
      LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                         "Error: Adding compiled compute program with vertex and fragment shader.\n"
                        );
      goto LAB_00bf1f98;
    }
    if (param_3 != 0) goto LAB_00bf1f10;
  }
  if (((param_7 == 0) ||
      (uVar2 = CompiledShaderArchive::addShaderThreadSafe
                         (*(CompiledShaderArchive **)this,param_5,param_6,param_7,param_8),
      (uVar2 & 1) != 0)) &&
     ((param_11 == 0 ||
      (uVar2 = CompiledShaderArchive::addShaderThreadSafe
                         (*(CompiledShaderArchive **)this,param_9,param_10,param_11,param_12),
      (uVar2 & 1) != 0)))) {
    CompiledShaderArchive::compileProgramThreadSafe
              (*(CompiledShaderArchive **)this,param_13,param_1,param_5,param_9,
               (uint)((ulong)(*(long *)(param_14 + 8) - (long)*(ShaderStructLayout **)param_14) >> 6
                     ),*(ShaderStructLayout **)param_14);
    return;
  }
LAB_00bf1f98:
  this[0x90] = (ShaderManager)0x1;
  return;
}


