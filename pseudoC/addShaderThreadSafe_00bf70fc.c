// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addShaderThreadSafe
// Entry Point: 00bf70fc
// Size: 584 bytes
// Signature: undefined __thiscall addShaderThreadSafe(CompiledShaderArchive * this, __map_iterator param_1, ShaderHash * param_2, uint param_3, uchar * param_4)


/* CompiledShaderArchive::addShaderThreadSafe(std::__ndk1::__map_iterator<std::__ndk1::__tree_iterator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId,
   unsigned int>,
   std::__ndk1::__tree_node<std::__ndk1::__value_type<CompiledShaderArchive::ShaderId, unsigned
   int>, void*>*, long> >, CompiledShaderArchive::ShaderHash const&, unsigned int, unsigned char
   const*) */

undefined8 __thiscall
CompiledShaderArchive::addShaderThreadSafe
          (CompiledShaderArchive *this,__map_iterator param_1,ShaderHash *param_2,uint param_3,
          uchar *param_4)

{
  undefined4 uVar1;
  long lVar2;
  pair pVar3;
  pair pVar4;
  ulong uVar5;
  void *__dest;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  void *__src;
  ulong __n;
  uint uVar9;
  undefined8 local_a0;
  uchar *puStack_98;
  uint local_90;
  char cStack_8c;
  undefined uStack_8b;
  undefined uStack_8a;
  undefined uStack_89;
  undefined2 uStack_88;
  undefined5 uStack_86;
  undefined uStack_81;
  undefined8 local_78;
  uchar *puStack_70;
  long local_68;
  
  uVar6 = (ulong)param_1;
  puVar7 = &local_a0;
  puVar8 = &local_a0;
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  MD5Hash::getMD5Hash(param_4,param_3,(uchar *)&local_78);
  Mutex::enterCriticalSection();
  puStack_98 = *(uchar **)(param_2 + 8);
  local_a0 = *(undefined8 *)param_2;
  uVar9 = (uint)((ulong)(*(long *)(this + 8) - *(long *)this) >> 5);
  local_90 = uVar9;
  pVar3 = std::__ndk1::
          __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
          ::
          __emplace_unique_key_args<CompiledShaderArchive::ShaderHash,std::__ndk1::pair<CompiledShaderArchive::ShaderHash,unsigned_int>>
                    ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
                      *)(this + 0xa0),(ShaderHash *)&local_a0,(pair *)&local_a0);
  if (((ulong)puVar7 & 0xff) == 0) {
    *(undefined4 *)(uVar6 + 0x30) = *(undefined4 *)((ulong)pVar3 + 0x2c);
  }
  else {
    puStack_98 = puStack_70;
    local_a0 = local_78;
    local_90 = uVar9;
    pVar4 = std::__ndk1::
            __tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
            ::
            __emplace_unique_key_args<CompiledShaderArchive::ShaderHash,std::__ndk1::pair<CompiledShaderArchive::ShaderHash,unsigned_int>>
                      ((__tree<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::__map_value_compare<CompiledShaderArchive::ShaderHash,std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>,std::__ndk1::less<CompiledShaderArchive::ShaderHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<CompiledShaderArchive::ShaderHash,unsigned_int>>>
                        *)(this + 0xb8),(ShaderHash *)&local_a0,(pair *)&local_a0);
    if (((ulong)puVar8 & 0xff) == 0) {
      uVar1 = *(undefined4 *)((ulong)pVar4 + 0x2c);
      *(undefined4 *)(uVar6 + 0x30) = uVar1;
      *(undefined4 *)((ulong)pVar3 + 0x2c) = uVar1;
    }
    else {
      local_a0 = 0;
      puStack_98 = (uchar *)0x0;
      uStack_88 = 0;
      uStack_86 = 0;
      local_90 = 0;
      cStack_8c = '\0';
      uStack_8b = 0;
      uStack_8a = 0;
      uStack_89 = 0;
      if ((this[0x104] != (CompiledShaderArchive)0x0) && (param_3 != 0)) {
        uVar5 = LZMACompressionUtil::compressIfSmaller(param_4,param_3,&puStack_98,&local_90);
        if ((uVar5 & 1) == 0) {
          puStack_98 = (uchar *)operator_new__((ulong)param_3);
          memcpy(puStack_98,param_4,(ulong)param_3);
          local_90 = param_3;
        }
        else {
          uStack_8b = 0;
          uStack_8a = (undefined)param_3;
          uStack_89 = (undefined)(param_3 >> 8);
          uStack_88 = (undefined2)(param_3 >> 0x10);
          cStack_8c = cStack_8c + '\x01';
        }
      }
      puVar7 = *(undefined8 **)(this + 8);
      if (puVar7 == *(undefined8 **)(this + 0x10)) {
        __src = *(void **)this;
        __n = (long)puVar7 - (long)__src;
        uVar5 = ((long)__n >> 5) + 1;
        if (uVar5 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar5 <= (ulong)((long)__n >> 4)) {
          uVar5 = (long)__n >> 4;
        }
        if (0x7fffffffffffffdf < __n) {
          uVar5 = 0x7ffffffffffffff;
        }
        if (uVar5 == 0) {
          __dest = (void *)0x0;
        }
        else {
          if (uVar5 >> 0x3b != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = operator_new(uVar5 << 5);
        }
        puVar7 = (undefined8 *)((long)__dest + ((long)__n >> 5) * 0x20);
        puVar7[1] = puStack_98;
        *puVar7 = local_a0;
        puVar7[3] = CONCAT17(uStack_81,CONCAT52(uStack_86,uStack_88));
        puVar7[2] = CONCAT17(uStack_89,
                             CONCAT16(uStack_8a,CONCAT15(uStack_8b,CONCAT14(cStack_8c,local_90))));
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        *(void **)this = __dest;
        *(undefined8 **)(this + 8) = puVar7 + 4;
        *(void **)(this + 0x10) = (void *)((long)__dest + uVar5 * 0x20);
        if (__src != (void *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        puVar7[1] = puStack_98;
        *puVar7 = local_a0;
        puVar7[3] = CONCAT17(uStack_81,CONCAT52(uStack_86,uStack_88));
        puVar7[2] = CONCAT17(uStack_89,
                             CONCAT16(uStack_8a,CONCAT15(uStack_8b,CONCAT14(cStack_8c,local_90))));
        *(undefined8 **)(this + 8) = puVar7 + 4;
      }
      *(uint *)(uVar6 + 0x30) = uVar9;
    }
  }
  Mutex::leaveCriticalSection();
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


