// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createProgram
// Entry Point: 00beffb4
// Size: 1136 bytes
// Signature: undefined __thiscall createProgram(ShaderManager * this, uint param_1, uchar * param_2, uint param_3, char * param_4, map * param_5, IProgramObject * * param_6, uint * param_7, ShaderStructLayout * * param_8, uint * param_9, char * param_10)


/* ShaderManager::createProgram(unsigned int, unsigned char const*, unsigned int, char const*,
   std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, ShaderStructLayout,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, ShaderStructLayout> > >
   const&, IProgramObject*&, unsigned int&, ShaderStructLayout*&, unsigned int&, char const*) */

uint __thiscall
ShaderManager::createProgram
          (ShaderManager *this,uint param_1,uchar *param_2,uint param_3,char *param_4,map *param_5,
          IProgramObject **param_6,uint *param_7,ShaderStructLayout **param_8,uint *param_9,
          char *param_10)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  IShaderObject *local_218;
  IShaderObject *local_210;
  IShaderObject *pIStack_208;
  ulonglong local_200;
  long local_1f8;
  long lStack_1f0;
  undefined8 local_1e8;
  ulong local_1e0;
  ulong local_1d8;
  char *local_1d0;
  ulong local_1c8;
  ulong local_1c0;
  IShaderObject *local_1b8;
  ulong local_1b0;
  ulong local_1a8;
  IShaderObject *local_1a0;
  ulong local_198;
  undefined8 uStack_190;
  char *local_188;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  long local_160;
  undefined4 local_74;
  long local_70;
  
  lVar2 = tpidr_el0;
  local_70 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x168) != 0) {
    if (((LogManager::getInstance()::singletonLogManager & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(&LogManager::getInstance()::singletonLogManager), iVar4 != 0)) {
                    /* try { // try from 00bf03e8 to 00bf03f3 has its CatchHandler @ 00bf0424 */
      LogManager::LogManager((LogManager *)&LogManager::getInstance()::singletonLogManager);
      __cxa_atexit(LogManager::~LogManager,&LogManager::getInstance()::singletonLogManager,
                   &PTR_LOOP_00fd8de0);
      __cxa_guard_release(&LogManager::getInstance()::singletonLogManager);
    }
    LogManager::errorf((char *)&LogManager::getInstance()::singletonLogManager,
                       "Error: Mixing synchronous and asynchronous program creation is not supported.\n"
                      );
    uVar3 = 0;
    goto LAB_00bf0010;
  }
  uVar3 = 0;
  if (((*(long *)this == 0) || (uVar3 = 0, *(long *)(this + 0x10) == 0)) ||
     (this[0x24] != (ShaderManager)0x0)) goto LAB_00bf0010;
  local_198 = 0;
  uStack_190 = 0;
  local_188 = (char *)0x0;
                    /* try { // try from 00bf0088 to 00bf00a3 has its CatchHandler @ 00bf04b0 */
  lVar5 = Watch::getCurrentTicks();
  uVar6 = preprocessShaderString(param_3,param_4,(basic_string *)&local_198,false);
  if ((uVar6 & 1) == 0) {
    uVar3 = 0;
  }
  else {
                    /* try { // try from 00bf00a8 to 00bf00ab has its CatchHandler @ 00bf0440 */
    lVar7 = Watch::getCurrentTicks();
    local_1b0 = 0;
    local_1a8 = 0;
    local_1a0 = (IShaderObject *)0x0;
    local_1c8 = 0;
    local_1c0 = 0;
    local_1b8 = (IShaderObject *)0x0;
    local_1e0 = 0;
    local_1d8 = 0;
    *(long *)(this + 0x178) = (lVar7 - lVar5) + *(long *)(this + 0x178);
    *(int *)(this + 0x180) = *(int *)(this + 0x180) + 1;
    local_1d0 = (char *)0x0;
    local_1f8 = 0;
    lStack_1f0 = 0;
    local_1e8 = 0;
                    /* try { // try from 00bf00e8 to 00bf00eb has its CatchHandler @ 00bf0448 */
    lVar5 = Watch::getCurrentTicks();
    pcVar1 = (char *)((ulong)&local_198 | 1);
    if ((local_198 & 1) != 0) {
      pcVar1 = local_188;
    }
    local_180 = (IShaderObject *)CONCAT44(local_180._4_4_,**(undefined4 **)(this + 0x18));
                    /* try { // try from 00bf011c to 00bf0143 has its CatchHandler @ 00bf043c */
    puVar8 = &local_1c8;
    uVar6 = ShaderConverter::convertFromGISL
                      (*(ShaderConverter **)(this + 0x88),pcVar1,(ShaderLanguage *)&local_180,
                       param_5,(basic_string *)&local_1b0,(basic_string *)puVar8,
                       (basic_string *)&local_1e0,(vector *)&local_1f8,param_9,
                       (CodeStringStream *)0x0,&local_200,param_10);
    if ((uVar6 & 1) == 0) {
LAB_00bf036c:
      uVar3 = 0;
    }
    else {
                    /* try { // try from 00bf0148 to 00bf014b has its CatchHandler @ 00bf0448 */
      lVar7 = Watch::getCurrentTicks();
      local_210 = (IShaderObject *)0x0;
      pIStack_208 = (IShaderObject *)0x0;
      local_218 = (IShaderObject *)0x0;
      *(ulonglong *)(this + 0x188) = *(long *)(this + 0x188) + local_200;
      *(int *)(this + 400) = *(int *)(this + 400) + 1;
      *(int *)(this + 0x1a0) = *(int *)(this + 0x1a0) + 1;
      *(ulonglong *)(this + 0x198) = (lVar7 - (lVar5 + local_200)) + *(long *)(this + 0x198);
                    /* try { // try from 00bf0190 to 00bf02e3 has its CatchHandler @ 00bf0444 */
      lVar5 = Watch::getCurrentTicks();
      uVar6 = local_1b0 >> 1 & 0x7f;
      if ((local_1b0 & 1) != 0) {
        uVar6 = local_1a8;
      }
      if (uVar6 != 0) {
        local_180 = (IShaderObject *)((ulong)&local_1b0 | 1);
        if ((local_1b0 & 1) != 0) {
          local_180 = local_1a0;
        }
        local_178 = **(undefined4 **)(this + 0x18);
        local_74 = 0;
        local_174 = 0x6e69616d;
        uStack_170 = 0x70765f;
        uVar6 = CompiledShaderArchive::addShader
                          (*(CompiledShaderArchive **)this,param_1,param_2,
                           (ShaderObjectDesc *)&local_180,&pIStack_208);
        if ((uVar6 & 1) == 0) goto LAB_00bf036c;
      }
      uVar6 = local_1c8 >> 1 & 0x7f;
      if ((local_1c8 & 1) != 0) {
        uVar6 = local_1c0;
      }
      if (uVar6 != 0) {
        local_180 = (IShaderObject *)((ulong)&local_1c8 | 1);
        if ((local_1c8 & 1) != 0) {
          local_180 = local_1b8;
        }
        local_178 = **(undefined4 **)(this + 0x18);
        local_174 = 0x6e69616d;
        uStack_170 = 0x70665f;
        local_74 = 1;
        uVar6 = CompiledShaderArchive::addShader
                          (*(CompiledShaderArchive **)this,param_1,param_2,
                           (ShaderObjectDesc *)&local_180,&local_210);
        if ((uVar6 & 1) == 0) goto LAB_00bf036c;
      }
      uVar6 = local_1e0 >> 1 & 0x7f;
      if ((local_1e0 & 1) != 0) {
        uVar6 = local_1d8;
      }
      if (uVar6 != 0) {
        pcVar1 = (char *)((ulong)&local_1e0 | 1);
        if ((local_1e0 & 1) != 0) {
          pcVar1 = local_1d0;
        }
        uVar6 = compileShaderObject(this,param_1,param_2,2,pcVar1,(basic_string *)puVar8,&local_218)
        ;
        if ((uVar6 & 1) == 0) goto LAB_00bf036c;
      }
      lVar7 = Watch::getCurrentTicks();
      local_160 = 0;
      if (lStack_1f0 - local_1f8 != 0) {
        local_160 = local_1f8;
      }
      *(int *)(this + 0x1b0) = *(int *)(this + 0x1b0) + 1;
      *(long *)(this + 0x1a8) = (lVar7 - lVar5) + *(long *)(this + 0x1a8);
      local_168 = (undefined4)((ulong)(lStack_1f0 - local_1f8) >> 6);
      *(int *)(this + 0x20) = *(int *)(this + 0x20) + 1;
      local_180 = pIStack_208;
      local_178 = SUB84(local_210,0);
      local_174 = (undefined4)((ulong)local_210 >> 0x20);
      uStack_170 = SUB84(local_218,0);
      uStack_16c = (undefined4)((ulong)local_218 >> 0x20);
                    /* try { // try from 00bf033c to 00bf0353 has its CatchHandler @ 00bf0438 */
      uVar3 = CompiledShaderArchive::addProgram
                        (*(CompiledShaderArchive **)this,param_1,param_2,
                         (CompiledProgramObjectDesc *)&local_180,param_6,param_7,param_8);
    }
    std::__ndk1::__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>>::
    ~__vector_base((__vector_base<ShaderStructLayout,std::__ndk1::allocator<ShaderStructLayout>> *)
                   &local_1f8);
    if ((local_1e0 & 1) != 0) {
      operator_delete(local_1d0);
    }
    if ((local_1c8 & 1) != 0) {
      operator_delete(local_1b8);
    }
    if ((local_1b0 & 1) != 0) {
      operator_delete(local_1a0);
    }
  }
  if ((local_198 & 1) != 0) {
    operator_delete(local_188);
  }
LAB_00bf0010:
  if (*(long *)(lVar2 + 0x28) != local_70) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar3 & 1;
}


