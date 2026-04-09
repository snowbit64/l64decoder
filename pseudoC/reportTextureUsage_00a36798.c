// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: reportTextureUsage
// Entry Point: 00a36798
// Size: 248 bytes
// Signature: undefined __cdecl reportTextureUsage(Texture * param_1, float param_2, float param_3, float param_4, float param_5, ulonglong param_6, unordered_map * param_7)


/* RenderQueueUtil::reportTextureUsage(Texture const&, float, float, float, float, unsigned long
   long, std::__ndk1::unordered_map<Texture const*, TextureUsage, std::__ndk1::hash<Texture const*>,
   std::__ndk1::equal_to<Texture const*>, std::__ndk1::allocator<std::__ndk1::pair<Texture const*
   const, TextureUsage> > >&) */

void RenderQueueUtil::reportTextureUsage
               (Texture *param_1,float param_2,float param_3,float param_4,float param_5,
               ulonglong param_6,unordered_map *param_7)

{
  long lVar1;
  pair pVar2;
  float fVar4;
  float fVar5;
  Texture *local_50 [2];
  Texture **local_40;
  long local_38;
  ulong uVar3;
  
  local_40 = local_50;
  fVar4 = param_3 / param_2;
  lVar1 = tpidr_el0;
  if (param_5 <= 0.01) {
    param_5 = 0.01;
  }
  fVar5 = param_4 / param_5;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_2 <= 0.0001) {
    fVar4 = 3.402823e+38;
  }
  local_50[0] = param_1;
  pVar2 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::__unordered_map_hasher<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::hash<Texture_const*>,true>,std::__ndk1::__unordered_map_equal<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::equal_to<Texture_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>>>
          ::
          __emplace_unique_key_args<Texture_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<Texture_const*&&>,std::__ndk1::tuple<>>
                    ((Texture **)param_7,(piecewise_construct_t *)local_50,(tuple *)&DAT_0051d6a9,
                     (tuple *)&local_40);
  uVar3 = (ulong)pVar2;
  if (*(int *)(uVar3 + 0x20) == 0) {
    *(float *)(uVar3 + 0x24) = fVar4;
    *(float *)(uVar3 + 0x28) = fVar5;
    *(ulonglong *)(uVar3 + 0x18) = param_6;
    *(undefined4 *)(uVar3 + 0x20) = 1;
  }
  else {
    *(int *)(uVar3 + 0x20) = *(int *)(uVar3 + 0x20) + 1;
    if (fVar4 <= *(float *)(uVar3 + 0x24)) {
      fVar4 = *(float *)(uVar3 + 0x24);
    }
    if (*(float *)(uVar3 + 0x28) <= fVar5) {
      fVar5 = *(float *)(uVar3 + 0x28);
    }
    if (param_6 <= *(ulong *)(uVar3 + 0x18)) {
      param_6 = *(ulong *)(uVar3 + 0x18);
    }
    *(float *)(uVar3 + 0x24) = fVar4;
    *(float *)(uVar3 + 0x28) = fVar5;
    *(ulonglong *)(uVar3 + 0x18) = param_6;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


