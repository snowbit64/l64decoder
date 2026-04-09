// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getPipelineState
// Entry Point: 00ad09a0
// Size: 376 bytes
// Signature: undefined __thiscall getPipelineState(VulkanCommandBuffer * this, PIPELINE_TYPE param_1, PRIMITIVE_TYPE param_2)


/* VulkanCommandBuffer::getPipelineState(VulkanCommandBuffer::PIPELINE_TYPE,
   ICommandBuffer::PRIMITIVE_TYPE) */

long __thiscall
VulkanCommandBuffer::getPipelineState
          (VulkanCommandBuffer *this,PIPELINE_TYPE param_1,PRIMITIVE_TYPE param_2)

{
  long *plVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  long lVar5;
  pair pVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long **pplVar11;
  long *plVar12;
  ulong uVar13;
  long lVar14;
  undefined2 uVar15;
  undefined8 uVar16;
  ulong local_58;
  long lStack_50;
  long local_48;
  
  lVar5 = tpidr_el0;
  local_48 = *(long *)(lVar5 + 0x28);
  uVar7 = *(ulong *)(this + (ulong)param_1 * 8 + 0x5f8);
  lVar14 = *(long *)(this + (ulong)param_1 * 8 + 0x618);
  if (uVar7 != *(ulong *)(this + (ulong)param_1 * 8 + 0x608)) {
    plVar1 = (long *)(this + (ulong)param_1 * 8 + 0x618);
    puVar2 = (ulong *)(this + (ulong)param_1 * 8 + 0x608);
    uVar8 = *(ulong *)(this + (ulong)param_1 * 0x28 + 0x630);
    if (uVar8 != 0) {
      uVar16 = NEON_cnt(uVar8,1);
      uVar15 = NEON_uaddlv(uVar16,1);
      uVar9 = CONCAT62((int6)((ulong)uVar16 >> 0x10),uVar15) & 0xffffffff;
      if (uVar9 < 2) {
        uVar10 = uVar8 - 1 & uVar7;
      }
      else {
        uVar10 = uVar7;
        if (uVar8 <= uVar7) {
          uVar10 = 0;
          if (uVar8 != 0) {
            uVar10 = uVar7 / uVar8;
          }
          uVar10 = uVar7 - uVar10 * uVar8;
        }
      }
      pplVar11 = *(long ***)(*(long *)(this + (ulong)param_1 * 0x28 + 0x628) + uVar10 * 8);
      if ((pplVar11 != (long **)0x0) && (plVar12 = *pplVar11, plVar12 != (long *)0x0)) {
        do {
          uVar13 = plVar12[1];
          if (uVar13 == uVar7) {
            if (plVar12[2] == uVar7) {
              lVar14 = plVar12[3];
              goto LAB_00ad0ad8;
            }
          }
          else {
            if (uVar9 < 2) {
              uVar13 = uVar13 & uVar8 - 1;
            }
            else if (uVar8 <= uVar13) {
              uVar4 = 0;
              if (uVar8 != 0) {
                uVar4 = uVar13 / uVar8;
              }
              uVar13 = uVar13 - uVar4 * uVar8;
            }
            if (uVar13 != uVar10) break;
          }
          plVar12 = (long *)*plVar12;
        } while (plVar12 != (long *)0x0);
      }
    }
    puVar3 = (ulong *)(this + (ulong)param_1 * 8 + 0x5f8);
    if (param_1 == 1) {
      lVar14 = createComputePipelineState();
    }
    else if (param_1 == 0) {
      lVar14 = createGraphicsPipelineState(this,param_2);
    }
    local_58 = *puVar3;
    lStack_50 = lVar14;
    pVar6 = std::__ndk1::
            __hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,VkPipeline_T*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,VkPipeline_T*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,VkPipeline_T*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,VkPipeline_T*>>>
            ::
            __emplace_unique_key_args<unsigned_long_long,std::__ndk1::pair<unsigned_long_long,VkPipeline_T*>>
                      ((__hash_table<std::__ndk1::__hash_value_type<unsigned_long_long,VkPipeline_T*>,std::__ndk1::__unordered_map_hasher<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,VkPipeline_T*>,std::__ndk1::hash<unsigned_long_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long_long,std::__ndk1::__hash_value_type<unsigned_long_long,VkPipeline_T*>,std::__ndk1::equal_to<unsigned_long_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long_long,VkPipeline_T*>>>
                        *)(this + (ulong)param_1 * 0x28 + 0x628),&local_58,(pair *)&local_58);
    this = (VulkanCommandBuffer *)(ulong)pVar6;
    uVar7 = *puVar3;
LAB_00ad0ad8:
    *puVar2 = uVar7;
    *plVar1 = lVar14;
  }
  if (*(long *)(lVar5 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return lVar14;
}


