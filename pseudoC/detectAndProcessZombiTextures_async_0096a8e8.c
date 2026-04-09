// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: detectAndProcessZombiTextures_async
// Entry Point: 0096a8e8
// Size: 496 bytes
// Signature: undefined detectAndProcessZombiTextures_async(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* TextureStreamingManager::detectAndProcessZombiTextures_async() */

void TextureStreamingManager::detectAndProcessZombiTextures_async(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  void *pvVar6;
  int iVar7;
  long in_x0;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long **pplVar11;
  long *plVar12;
  undefined2 uVar13;
  double dVar14;
  undefined8 uVar15;
  long *local_78;
  void *local_70;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar8 = Watch::getCurrentTicks();
  pplVar11 = *(long ***)(in_x0 + 0x160);
  if (pplVar11 != (long **)0x0) {
    do {
      while( true ) {
        local_78 = pplVar11[2];
        dVar14 = (double)Watch::convertTicksToMs(lVar8 - (long)pplVar11[3]);
        if ((float)dVar14 <= *(float *)(in_x0 + 0x1c0)) break;
        std::__ndk1::
        __hash_table<unsigned_long_long,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
        ::__emplace_unique_key_args<unsigned_long_long,unsigned_long_long_const&>
                  ((__hash_table<unsigned_long_long,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                    *)(in_x0 + 0x1c8),(ulonglong *)&local_78,(ulonglong *)&local_78);
        pplVar11 = (long **)*pplVar11;
        std::__ndk1::
        __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,TextureStreamingManager::TextureUsageInternal>>>
        ::remove((int)in_x0 + 0x150);
        pvVar6 = local_70;
        local_70 = (void *)0x0;
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
        }
        if (pplVar11 == (long **)0x0) goto LAB_0096a9ac;
      }
      DAT_0210ee24 = DAT_0210ee24 + *(int *)(pplVar11 + 4);
      pplVar11 = (long **)*pplVar11;
    } while (pplVar11 != (long **)0x0);
  }
LAB_0096a9ac:
  DAT_0210ee20 = (undefined4)*(undefined8 *)(in_x0 + 0x168);
  pplVar11 = *(long ***)(in_x0 + 0x1d8);
  if (pplVar11 != (long **)0x0) {
    do {
      while( true ) {
        plVar12 = pplVar11[2];
        iVar7 = CommonPipelineData::getTextureStatus_async
                          ((CommonPipelineData *)(in_x0 + 0x218),(ulonglong)plVar12);
        if (iVar7 != 0) break;
        plVar9 = *(long **)(in_x0 + 0x230);
        uVar15 = NEON_cnt(plVar9,1);
        uVar13 = NEON_uaddlv(uVar15,1);
        if ((uint)CONCAT62((int6)((ulong)uVar15 >> 0x10),uVar13) < 2) {
          plVar10 = (long *)((long)plVar9 - 1U & (ulong)plVar12);
        }
        else {
          plVar10 = plVar12;
          if (plVar9 <= plVar12) {
            uVar4 = 0;
            if (plVar9 != (long *)0x0) {
              uVar4 = (ulong)plVar12 / (ulong)plVar9;
            }
            plVar10 = (long *)((long)plVar12 - uVar4 * (long)plVar9);
          }
        }
        plVar9 = *(long **)(*(long *)(in_x0 + 0x228) + (long)plVar10 * 8);
        do {
          do {
            plVar9 = (long *)*plVar9;
          } while ((long *)plVar9[1] != plVar12);
        } while ((long *)plVar9[2] != plVar12);
        uVar2 = *(uint *)(plVar9 + 0x16);
        uVar3 = *(int *)(plVar9 + 8) - 1;
        if ((uVar3 < uVar2) && (*(char *)(in_x0 + 9) == '\0')) {
          uVar1 = 0;
          if (uVar3 <= uVar2) {
            uVar1 = uVar2 - uVar3;
          }
          DowngradePipeline::tryCreateRequest_async
                    ((DowngradePipeline *)(in_x0 + 0x688),(ulonglong)plVar12,uVar1);
        }
        pplVar11 = (long **)*pplVar11;
        std::__ndk1::
        __hash_table<unsigned_long_long,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
        ::remove((__hash_const_iterator)
                 (__hash_table<unsigned_long_long,std::__ndk1::hash<unsigned_long_long>,std::__ndk1::equal_to<unsigned_long_long>,std::__ndk1::allocator<unsigned_long_long>>
                  *)(in_x0 + 0x1c8));
        pvVar6 = local_70;
        local_70 = (void *)0x0;
        if (pvVar6 != (void *)0x0) {
          operator_delete(pvVar6);
        }
        if (pplVar11 == (long **)0x0) goto LAB_0096aaa0;
      }
      pplVar11 = (long **)*pplVar11;
    } while (pplVar11 != (long **)0x0);
  }
LAB_0096aaa0:
  DAT_0210ee38 = (undefined4)*(undefined8 *)(in_x0 + 0x1e0);
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


