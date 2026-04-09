// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: doCompileShaderAsync
// Entry Point: 00bf2068
// Size: 720 bytes
// Signature: undefined __thiscall doCompileShaderAsync(ShaderManager * this, char * param_1, SHADER_STAGE param_2, basic_string * param_3, __map_iterator param_4, uchar * param_5, uint param_6, uint * param_7, ShaderHash * param_8)


/* ShaderManager::doCompileShaderAsync(char const*, IProgramObject::SHADER_STAGE,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned
   int>, void*>*, long> >, unsigned char const*, unsigned int, unsigned int&,
   CompiledShaderArchive::ShaderHash&) */

void __thiscall
ShaderManager::doCompileShaderAsync
          (ShaderManager *this,char *param_1,SHADER_STAGE param_2,basic_string *param_3,
          __map_iterator param_4,uchar *param_5,uint param_6,uint *param_7,ShaderHash *param_8)

{
  long lVar1;
  ulong uVar2;
  uchar *puVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  byte local_398;
  void *local_388;
  uint local_37c;
  uchar *local_378;
  uint local_36c;
  char acStack_368 [512];
  char *local_168;
  undefined4 local_160;
  undefined local_15c [256];
  SHADER_STAGE local_5c;
  long local_58;
  uint *puVar7;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_5c = 3;
  local_15c[0] = 0;
  local_160 = **(undefined4 **)(this + 0x18);
  local_168 = param_1;
  __strcpy_chk(local_15c,(&PTR_s_main_vp_00fecef8)[param_2],0x100);
  local_5c = param_2;
  CompiledShaderArchive::getShaderSourceHash
            (*(CompiledShaderArchive **)this,(ShaderObjectDesc *)&local_168,param_8);
  puVar7 = &local_37c;
  local_36c = 0;
  local_378 = (uchar *)0x0;
  uVar2 = CompiledShaderArchive::getShaderHandleThreadSafe
                    (*(CompiledShaderArchive **)this,param_8,puVar7);
  uVar6 = (uint)puVar7;
  if ((uVar2 & 1) == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar4 = Watch::getCurrentTicks();
      uVar2 = CompiledShaderArchive::compileShaderThreadSafe
                        (*(CompiledShaderArchive **)this,param_8,(ShaderObjectDesc *)&local_168,
                         &local_36c,&local_378);
      if ((uVar2 & 1) == 0) {
        this[0x90] = (ShaderManager)0x1;
      }
      else {
        CompiledShaderArchive::addShaderThreadSafe
                  (*(CompiledShaderArchive **)this,param_4,param_8,local_36c,local_378);
      }
      lVar5 = Watch::getCurrentTicks();
      FUN_00f27730(lVar5 - lVar4,this + 0x1a8);
      FUN_00f27700(1,this + 0x1b0);
    }
    else {
      puVar3 = (uchar *)strlen(param_1);
      getMD5asBase64((ShaderManager *)param_1,puVar3,uVar6);
                    /* try { // try from 00bf2168 to 00bf21fb has its CatchHandler @ 00bf2340 */
      (**(code **)(**(long **)(this + 0x10) + 0x30))();
      FUN_00bf09e0(acStack_368);
      uVar2 = KeyValueCacheClient::getValue
                        (*(KeyValueCacheClient **)(this + 8),KeyValueCacheClient::APP_SHADER,
                         acStack_368,&local_36c,&local_378);
      if ((uVar2 & 1) == 0) {
                    /* try { // try from 00bf2248 to 00bf229b has its CatchHandler @ 00bf233c */
        lVar4 = Watch::getCurrentTicks();
        uVar2 = CompiledShaderArchive::compileShaderThreadSafe
                          (*(CompiledShaderArchive **)this,param_8,(ShaderObjectDesc *)&local_168,
                           &local_36c,&local_378);
        if ((uVar2 & 1) == 0) {
          this[0x90] = (ShaderManager)0x1;
        }
        else {
          CompiledShaderArchive::addShaderThreadSafe
                    (*(CompiledShaderArchive **)this,param_4,param_8,local_36c,local_378);
          KeyValueCacheClient::setValue
                    (*(KeyValueCacheClient **)(this + 8),KeyValueCacheClient::APP_SHADER,acStack_368
                     ,local_36c,local_378);
        }
                    /* try { // try from 00bf22d0 to 00bf22d3 has its CatchHandler @ 00bf2338 */
        lVar5 = Watch::getCurrentTicks();
        FUN_00f27730(lVar5 - lVar4,this + 0x1a8);
        FUN_00f27700(1,this + 0x1b0);
      }
      else {
        CompiledShaderArchive::addShaderThreadSafe
                  (*(CompiledShaderArchive **)this,param_4,param_8,local_36c,local_378);
      }
      if ((local_398 & 1) != 0) {
        operator_delete(local_388);
      }
    }
  }
  else {
    CompiledShaderArchive::setShaderThreadSafe(*(CompiledShaderArchive **)this,param_4,local_37c);
    CompiledShaderArchive::getCompiledShaderDataThreadSafe
              (*(CompiledShaderArchive **)this,local_37c,&local_36c,&local_378);
  }
  *param_7 = local_36c;
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_378);
}


