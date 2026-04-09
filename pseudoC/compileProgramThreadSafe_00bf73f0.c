// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compileProgramThreadSafe
// Entry Point: 00bf73f0
// Size: 300 bytes
// Signature: undefined __thiscall compileProgramThreadSafe(CompiledShaderArchive * this, __map_iterator param_1, __map_iterator param_2, __map_iterator param_3, __map_iterator param_4, uint param_5, ShaderStructLayout * param_6)


/* CompiledShaderArchive::compileProgramThreadSafe(std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId, unsigned
   int>, void*>*, long> >,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned
   int>, void*>*, long> >,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned
   int>, void*>*, long> >,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned
   int>, void*>*, long> >, unsigned int, ShaderStructLayout const*) */

uint __thiscall
CompiledShaderArchive::compileProgramThreadSafe
          (CompiledShaderArchive *this,__map_iterator param_1,__map_iterator param_2,
          __map_iterator param_3,__map_iterator param_4,uint param_5,ShaderStructLayout *param_6)

{
  long lVar1;
  uint uVar2;
  pair pVar3;
  undefined8 *puVar4;
  undefined8 local_88;
  undefined4 local_80;
  uint uStack_7c;
  int local_78;
  uint uStack_74;
  uint local_6c;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  Mutex::enterCriticalSection();
  uVar2 = addStructLayouts(this,param_5,param_6,&local_6c);
  if ((uVar2 & 1) != 0) {
    puVar4 = &local_88;
    local_80 = *(undefined4 *)((ulong)param_4 + 0x30);
    local_88 = CONCAT44(*(undefined4 *)((ulong)param_3 + 0x30),
                        *(undefined4 *)((ulong)param_2 + 0x30));
    local_78 = (int)((ulong)(*(long *)(this + 0x20) - *(long *)(this + 0x18)) >> 3) * -0x55555555;
    uStack_7c = local_6c;
    pVar3 = std::__ndk1::
            __tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
            ::
            __emplace_unique_key_args<CompiledShaderArchive::ProgramHash,std::__ndk1::pair<CompiledShaderArchive::ProgramHash,unsigned_int>>
                      ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramHash,std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramHash,unsigned_int>>>
                        *)(this + 0x88),(ProgramHash *)puVar4,(pair *)&local_88);
    if (((ulong)puVar4 & 0xff) != 0) {
      local_80 = *(undefined4 *)((ulong)param_2 + 0x30);
      uStack_7c = *(uint *)((ulong)param_3 + 0x30);
      local_78 = *(int *)((ulong)param_4 + 0x30);
      local_88 = 0;
      uStack_74 = local_6c;
      FUN_00bf5624(this + 0x18,&local_88);
    }
    *(undefined4 *)((ulong)param_1 + 0x30) = *(undefined4 *)((ulong)pVar3 + 0x2c);
  }
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


