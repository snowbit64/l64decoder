// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrAddProgramIdEntry
// Entry Point: 00bf6df8
// Size: 352 bytes
// Signature: undefined __thiscall getOrAddProgramIdEntry(CompiledShaderArchive * this, uint param_1, uchar * param_2, bool * param_3, __map_iterator * param_4)


/* CompiledShaderArchive::getOrAddProgramIdEntry(unsigned int, unsigned char const*, bool&,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId, unsigned
   int>, void*>*, long> >&) */

void __thiscall
CompiledShaderArchive::getOrAddProgramIdEntry
          (CompiledShaderArchive *this,uint param_1,uchar *param_2,bool *param_3,
          __map_iterator *param_4)

{
  long lVar1;
  long lVar2;
  int iVar3;
  pair pVar4;
  void *__dest;
  uint uVar6;
  ulong __n;
  CompiledShaderArchive **ppCVar7;
  CompiledShaderArchive **ppCVar8;
  uint local_80 [2];
  void *local_78;
  undefined4 local_70;
  long local_68;
  CompiledShaderArchive **ppCVar5;
  
  lVar2 = tpidr_el0;
  __n = (ulong)param_1;
  local_68 = *(long *)(lVar2 + 0x28);
  if (0xfe < param_1) goto LAB_00bf6f1c;
  *param_3 = false;
  ppCVar7 = (CompiledShaderArchive **)(this + 0x50);
  ppCVar8 = (CompiledShaderArchive **)*ppCVar7;
  ppCVar5 = ppCVar7;
  if (ppCVar8 == (CompiledShaderArchive **)0x0) {
LAB_00bf6ed4:
    __dest = operator_new__(__n);
    memcpy(__dest,param_2,__n);
    local_70 = 0xffffffff;
    local_80[0] = param_1;
    local_78 = __dest;
    pVar4 = std::__ndk1::
            __tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>>
            ::
            __emplace_unique_key_args<CompiledShaderArchive::ProgramId,std::__ndk1::pair<CompiledShaderArchive::ProgramId,unsigned_int>>
                      ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ProgramId,std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ProgramId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ProgramId,unsigned_int>>>
                        *)(this + 0x48),(ProgramId *)local_80,local_80);
    ppCVar5 = (CompiledShaderArchive **)(ulong)pVar4;
    *param_3 = true;
  }
  else {
    do {
      if (*(uint *)(ppCVar8 + 4) == param_1) {
        uVar6 = memcmp(ppCVar8[5],param_2,__n);
        uVar6 = uVar6 >> 0x1f;
      }
      else {
        uVar6 = (uint)(*(uint *)(ppCVar8 + 4) < param_1);
      }
      lVar1 = 8;
      if (uVar6 == 0) {
        lVar1 = 0;
        ppCVar5 = ppCVar8;
      }
      ppCVar8 = *(CompiledShaderArchive ***)((long)ppCVar8 + lVar1);
    } while (ppCVar8 != (CompiledShaderArchive **)0x0);
    if (ppCVar5 == ppCVar7) goto LAB_00bf6ed4;
    if (*(uint *)(ppCVar5 + 4) == param_1) {
      iVar3 = memcmp(param_2,ppCVar5[5],__n);
      if (iVar3 < 0) goto LAB_00bf6ed4;
    }
    else if (param_1 < *(uint *)(ppCVar5 + 4)) goto LAB_00bf6ed4;
  }
  *(CompiledShaderArchive ***)param_4 = ppCVar5;
LAB_00bf6f1c:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1 < 0xff);
}


