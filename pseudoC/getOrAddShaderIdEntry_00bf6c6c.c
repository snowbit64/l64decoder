// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getOrAddShaderIdEntry
// Entry Point: 00bf6c6c
// Size: 396 bytes
// Signature: undefined __thiscall getOrAddShaderIdEntry(CompiledShaderArchive * this, uint param_1, uchar * param_2, SHADER_STAGE param_3, bool * param_4, __map_iterator * param_5)


/* CompiledShaderArchive::getOrAddShaderIdEntry(unsigned int, unsigned char const*,
   IProgramObject::SHADER_STAGE, bool&,
   std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned
   int>, void*>*, long> >&) */

void __thiscall
CompiledShaderArchive::getOrAddShaderIdEntry
          (CompiledShaderArchive *this,uint param_1,uchar *param_2,SHADER_STAGE param_3,
          bool *param_4,__map_iterator *param_5)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  pair pVar5;
  void *__dest;
  ulong __n;
  CompiledShaderArchive **ppCVar7;
  CompiledShaderArchive **ppCVar8;
  SHADER_STAGE local_80;
  uint uStack_7c;
  void *local_78;
  undefined4 local_70;
  long local_68;
  CompiledShaderArchive **ppCVar6;
  
  lVar2 = tpidr_el0;
  __n = (ulong)param_1;
  local_68 = *(long *)(lVar2 + 0x28);
  if (0xfe < param_1) goto LAB_00bf6db4;
  *param_4 = false;
  ppCVar7 = (CompiledShaderArchive **)(this + 0x68);
  ppCVar8 = (CompiledShaderArchive **)*ppCVar7;
  ppCVar6 = ppCVar7;
  if (ppCVar8 == (CompiledShaderArchive **)0x0) {
LAB_00bf6d68:
    __dest = operator_new__(__n);
    memcpy(__dest,param_2,__n);
    local_70 = 0xffffffff;
    local_80 = param_3;
    uStack_7c = param_1;
    local_78 = __dest;
    pVar5 = std::__ndk1::
            __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>>
            ::
            __emplace_unique_key_args<CompiledShaderArchive::ShaderId,std::__ndk1::pair<CompiledShaderArchive::ShaderId,unsigned_int>>
                      ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderId,std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderId>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,unsigned_int>>>
                        *)(this + 0x60),(ShaderId *)&local_80,&local_80);
    ppCVar6 = (CompiledShaderArchive **)(ulong)pVar5;
    *param_4 = true;
  }
  else {
    do {
      if (*(SHADER_STAGE *)(ppCVar8 + 4) == param_3) {
        if (*(uint *)((long)ppCVar8 + 0x24) == param_1) {
          uVar3 = memcmp(ppCVar8[5],param_2,__n);
          uVar3 = uVar3 >> 0x1f;
        }
        else {
          uVar3 = (uint)(*(uint *)((long)ppCVar8 + 0x24) < param_1);
        }
      }
      else {
        uVar3 = (uint)((int)*(SHADER_STAGE *)(ppCVar8 + 4) < (int)param_3);
      }
      lVar1 = 8;
      if (uVar3 == 0) {
        lVar1 = 0;
        ppCVar6 = ppCVar8;
      }
      ppCVar8 = *(CompiledShaderArchive ***)((long)ppCVar8 + lVar1);
    } while (ppCVar8 != (CompiledShaderArchive **)0x0);
    if (ppCVar6 == ppCVar7) goto LAB_00bf6d68;
    if (*(SHADER_STAGE *)(ppCVar6 + 4) != param_3) {
      if ((int)*(SHADER_STAGE *)(ppCVar6 + 4) <= (int)param_3) goto LAB_00bf6db0;
      goto LAB_00bf6d68;
    }
    if (*(uint *)((long)ppCVar6 + 0x24) == param_1) {
      iVar4 = memcmp(param_2,ppCVar6[5],__n);
      if (iVar4 < 0) goto LAB_00bf6d68;
    }
    else if (param_1 < *(uint *)((long)ppCVar6 + 0x24)) goto LAB_00bf6d68;
  }
LAB_00bf6db0:
  *(CompiledShaderArchive ***)param_5 = ppCVar6;
LAB_00bf6db4:
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(param_1 < 0xff);
}


