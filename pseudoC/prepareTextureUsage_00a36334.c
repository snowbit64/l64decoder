// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: prepareTextureUsage
// Entry Point: 00a36334
// Size: 1124 bytes
// Signature: undefined __cdecl prepareTextureUsage(GsMaterial * param_1, UvDensitySet * param_2, float param_3, float param_4, float param_5, float param_6, ulonglong param_7, float param_8, float param_9, unordered_map * param_10)


/* RenderQueueUtil::prepareTextureUsage(GsMaterial const*, UvDensitySet const&, float, float, float,
   float, unsigned long long, float, float, std::__ndk1::unordered_map<Texture const*, TextureUsage,
   std::__ndk1::hash<Texture const*>, std::__ndk1::equal_to<Texture const*>,
   std::__ndk1::allocator<std::__ndk1::pair<Texture const* const, TextureUsage> > >&) */

void RenderQueueUtil::prepareTextureUsage
               (GsMaterial *param_1,UvDensitySet *param_2,float param_3,float param_4,float param_5,
               float param_6,ulonglong param_7,float param_8,float param_9,unordered_map *param_10)

{
  long *plVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  pair pVar7;
  long lVar8;
  CustomShader *this;
  uint *puVar9;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  long local_c0 [2];
  long *local_b0;
  long local_a8 [4];
  long local_88;
  ulong uVar10;
  
  fVar18 = param_3 - param_8;
  if (param_3 - param_8 <= param_6) {
    fVar18 = param_6;
  }
  lVar5 = tpidr_el0;
  local_88 = *(long *)(lVar5 + 0x28);
  fVar18 = param_5 / (fVar18 * param_4);
  lVar8 = GsMaterial::getAlbedoMap();
  local_a8[0] = lVar8;
  local_a8[1] = GsMaterial::getNormalMap();
  local_a8[2] = GsMaterial::getGlossMap();
  local_a8[3] = GsMaterial::getEmissiveMap();
  this = (CustomShader *)GsMaterial::getCustomShader();
  if (this == (CustomShader *)0x0) {
    lVar11 = 8;
    fVar18 = fVar18 / (*(float *)param_2 * param_9);
    fVar17 = param_3 / param_8;
    lVar6 = local_c0[0];
    if (*(float *)param_2 * param_9 <= 0.0001) {
      fVar18 = 3.402823e+38;
    }
    while( true ) {
      local_c0[0] = lVar8;
      if ((local_c0[0] != 0) && ((*(ushort *)(local_c0[0] + 0x48) >> 4 & 1) != 0)) {
        local_b0 = local_c0;
        pVar7 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::__unordered_map_hasher<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::hash<Texture_const*>,true>,std::__ndk1::__unordered_map_equal<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::equal_to<Texture_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>>>
                ::
                __emplace_unique_key_args<Texture_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<Texture_const*&&>,std::__ndk1::tuple<>>
                          ((Texture **)param_10,(piecewise_construct_t *)local_c0,
                           (tuple *)&DAT_0051d6a9,(tuple *)&local_b0);
        uVar12 = (ulong)pVar7;
        lVar6 = local_c0[0];
        if (*(int *)(uVar12 + 0x20) == 0) {
          *(undefined4 *)(uVar12 + 0x20) = 1;
          *(float *)(uVar12 + 0x24) = fVar18;
          *(float *)(uVar12 + 0x28) = fVar17;
          *(ulonglong *)(uVar12 + 0x18) = param_7;
        }
        else {
          *(int *)(uVar12 + 0x20) = *(int *)(uVar12 + 0x20) + 1;
          fVar15 = fVar18;
          if (fVar18 <= *(float *)(uVar12 + 0x24)) {
            fVar15 = *(float *)(uVar12 + 0x24);
          }
          fVar16 = fVar17;
          if (*(float *)(uVar12 + 0x28) <= fVar17) {
            fVar16 = *(float *)(uVar12 + 0x28);
          }
          uVar2 = param_7;
          if (param_7 <= *(ulong *)(uVar12 + 0x18)) {
            uVar2 = *(ulong *)(uVar12 + 0x18);
          }
          *(float *)(uVar12 + 0x24) = fVar15;
          *(float *)(uVar12 + 0x28) = fVar16;
          *(ulonglong *)(uVar12 + 0x18) = uVar2;
        }
      }
      local_c0[0] = lVar6;
      if (lVar11 == 0x20) break;
      plVar1 = (long *)((long)local_a8 + lVar11);
      lVar11 = lVar11 + 8;
      lVar8 = *plVar1;
      lVar6 = local_c0[0];
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x88);
    uVar13 = (ulong)uVar3;
    uVar12 = (*(long *)(this + 0x118) - *(long *)(this + 0x110) >> 5) * 0x6db6db6db6db6db7;
    if (uVar13 <= uVar12 && uVar12 - uVar13 != 0) {
      lVar11 = *(long *)(this + 0x110) + uVar13 * 0xe0;
      fVar17 = param_3 / param_8;
      uVar12 = *(long *)(lVar11 + 0x60) - *(long *)(lVar11 + 0x58);
      if ((int)(uVar12 >> 3) != 0) {
        uVar14 = 0;
        do {
          if (((*(long *)(param_1 + 0x70) != 0) &&
              (lVar11 = *(long *)(*(long *)(param_1 + 0x70) + uVar14 * 8), lVar11 != 0)) &&
             ((*(ushort *)(lVar11 + 0x48) >> 4 & 1) != 0)) {
            puVar9 = (uint *)CustomShader::getTextureStreamingParams(this,uVar3,(uint)uVar14);
            uVar4 = *puVar9;
            if (uVar4 == 5) {
              fVar15 = 0.0;
            }
            else {
              if (uVar4 == 4) {
                fVar15 = (float)puVar9[1];
              }
              else {
                fVar15 = *(float *)(param_2 + (ulong)uVar4 * 4) * (float)puVar9[1];
              }
              fVar15 = fVar15 * param_9;
            }
            fVar16 = fVar18 / fVar15;
            local_b0 = local_c0;
            if (fVar15 <= 0.0001) {
              fVar16 = 3.402823e+38;
            }
            local_c0[0] = lVar11;
            pVar7 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::__unordered_map_hasher<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::hash<Texture_const*>,true>,std::__ndk1::__unordered_map_equal<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::equal_to<Texture_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>>>
                    ::
                    __emplace_unique_key_args<Texture_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<Texture_const*&&>,std::__ndk1::tuple<>>
                              ((Texture **)param_10,(piecewise_construct_t *)local_c0,
                               (tuple *)&DAT_0051d6a9,(tuple *)&local_b0);
            uVar10 = (ulong)pVar7;
            if (*(int *)(uVar10 + 0x20) == 0) {
              *(float *)(uVar10 + 0x24) = fVar16;
              *(float *)(uVar10 + 0x28) = fVar17;
              *(ulonglong *)(uVar10 + 0x18) = param_7;
              *(undefined4 *)(uVar10 + 0x20) = 1;
            }
            else {
              *(int *)(uVar10 + 0x20) = *(int *)(uVar10 + 0x20) + 1;
              if (fVar16 <= *(float *)(uVar10 + 0x24)) {
                fVar16 = *(float *)(uVar10 + 0x24);
              }
              fVar15 = fVar17;
              if (*(float *)(uVar10 + 0x28) <= fVar17) {
                fVar15 = *(float *)(uVar10 + 0x28);
              }
              uVar2 = param_7;
              if (param_7 <= *(ulong *)(uVar10 + 0x18)) {
                uVar2 = *(ulong *)(uVar10 + 0x18);
              }
              *(float *)(uVar10 + 0x24) = fVar16;
              *(float *)(uVar10 + 0x28) = fVar15;
              *(ulonglong *)(uVar10 + 0x18) = uVar2;
            }
          }
          uVar14 = uVar14 + 1;
        } while ((uVar12 >> 3 & 0xffffffff) != uVar14);
      }
    }
    fVar17 = param_3 / param_8;
    uVar12 = 0;
    while( true ) {
      if ((lVar8 != 0) && ((*(ushort *)(lVar8 + 0x48) >> 4 & 1) != 0)) {
        puVar9 = (uint *)CustomShader::getStandardTextureStreamingParams
                                   (this,uVar13,uVar12 & 0xffffffff);
        uVar3 = *puVar9;
        if (uVar3 == 5) {
          fVar15 = 0.0;
        }
        else {
          if (uVar3 == 4) {
            fVar15 = (float)puVar9[1];
          }
          else {
            fVar15 = *(float *)(param_2 + (ulong)uVar3 * 4) * (float)puVar9[1];
          }
          fVar15 = fVar15 * param_9;
        }
        fVar16 = fVar18 / fVar15;
        if (fVar15 <= 0.0001) {
          fVar16 = 3.402823e+38;
        }
        local_c0[0] = lVar8;
        local_b0 = local_c0;
        pVar7 = std::__ndk1::
                __hash_table<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::__unordered_map_hasher<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::hash<Texture_const*>,true>,std::__ndk1::__unordered_map_equal<Texture_const*,std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>,std::__ndk1::equal_to<Texture_const*>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<Texture_const*,TextureUsage>>>
                ::
                __emplace_unique_key_args<Texture_const*,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<Texture_const*&&>,std::__ndk1::tuple<>>
                          ((Texture **)param_10,(piecewise_construct_t *)local_c0,
                           (tuple *)&DAT_0051d6a9,(tuple *)&local_b0);
        uVar14 = (ulong)pVar7;
        if (*(int *)(uVar14 + 0x20) == 0) {
          *(float *)(uVar14 + 0x24) = fVar16;
          *(float *)(uVar14 + 0x28) = fVar17;
          *(ulonglong *)(uVar14 + 0x18) = param_7;
          *(undefined4 *)(uVar14 + 0x20) = 1;
        }
        else {
          *(int *)(uVar14 + 0x20) = *(int *)(uVar14 + 0x20) + 1;
          if (fVar16 <= *(float *)(uVar14 + 0x24)) {
            fVar16 = *(float *)(uVar14 + 0x24);
          }
          fVar15 = fVar17;
          if (*(float *)(uVar14 + 0x28) <= fVar17) {
            fVar15 = *(float *)(uVar14 + 0x28);
          }
          uVar2 = param_7;
          if (param_7 <= *(ulong *)(uVar14 + 0x18)) {
            uVar2 = *(ulong *)(uVar14 + 0x18);
          }
          *(float *)(uVar14 + 0x24) = fVar16;
          *(float *)(uVar14 + 0x28) = fVar15;
          *(ulonglong *)(uVar14 + 0x18) = uVar2;
        }
      }
      if (uVar12 == 3) break;
      lVar8 = local_a8[uVar12 + 1];
      uVar12 = uVar12 + 1;
    }
  }
  if (*(long *)(lVar5 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


