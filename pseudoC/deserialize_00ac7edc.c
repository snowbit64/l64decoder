// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: deserialize
// Entry Point: 00ac7edc
// Size: 564 bytes
// Signature: undefined __cdecl deserialize(uchar * * param_1, uint * param_2, uchar * param_3, uint param_4)


/* VulkanShaderSerializer::deserialize(unsigned char*&, unsigned int&, unsigned char*, unsigned int)
    */

void VulkanShaderSerializer::deserialize(uchar **param_1,uint *param_2,uchar *param_3,uint param_4)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  uchar *__dest;
  uint *puVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  uchar *__src;
  ulong __n;
  ulong uVar10;
  uint local_90 [2];
  ulong local_88;
  undefined8 uStack_80;
  void *local_78;
  uint local_70;
  long local_68;
  
  puVar6 = (uint *)(ulong)param_4;
  lVar5 = tpidr_el0;
  local_68 = *(long *)(lVar5 + 0x28);
  uVar8 = (uint)*(byte *)(puVar6 + 1);
  uVar3 = *puVar6;
  if (*(byte *)(puVar6 + 1) != 0) {
    pbVar7 = (byte *)((long)puVar6 + 5);
    do {
      uVar10 = (ulong)*pbVar7;
      local_88 = 0;
      uStack_80 = 0;
      local_78 = (void *)0x0;
                    /* try { // try from 00ac7f50 to 00ac7f5b has its CatchHandler @ 00ac811c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)&local_88);
      puVar2 = (uint *)param_1[2];
      local_90[0] = (uint)pbVar7[uVar10 + 3];
      local_70 = (uint)pbVar7[uVar10 + 2];
      if (puVar2 == (uint *)param_1[3]) {
                    /* try { // try from 00ac7fa0 to 00ac7fab has its CatchHandler @ 00ac811c */
        std::__ndk1::
        vector<VulkanShaderSerializer::GlobalVarInfo,std::__ndk1::allocator<VulkanShaderSerializer::GlobalVarInfo>>
        ::__push_back_slow_path<VulkanShaderSerializer::GlobalVarInfo_const&>
                  ((vector<VulkanShaderSerializer::GlobalVarInfo,std::__ndk1::allocator<VulkanShaderSerializer::GlobalVarInfo>>
                    *)(param_1 + 1),(GlobalVarInfo *)local_90);
      }
      else {
        *puVar2 = local_90[0];
                    /* try { // try from 00ac7f84 to 00ac7f8b has its CatchHandler @ 00ac8110 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(puVar2 + 2);
        puVar2[8] = local_70;
        param_1[2] = (uchar *)(puVar2 + 10);
      }
      if ((local_88 & 1) != 0) {
        operator_delete(local_78);
      }
      pbVar7 = pbVar7 + uVar10 + 4;
      uVar8 = uVar8 - 1;
    } while (uVar8 != 0);
  }
  puVar2 = (uint *)((long)puVar6 + (ulong)uVar3);
  uVar9 = (uint)*(byte *)(puVar2 + 1);
  uVar8 = *puVar2;
  if (*(byte *)(puVar2 + 1) != 0) {
    pbVar7 = (byte *)((long)puVar6 + (ulong)uVar3 + 5);
    do {
      puVar6 = (uint *)param_1[5];
      bVar4 = *pbVar7;
      if (puVar6 == (uint *)param_1[6]) {
        __src = param_1[4];
        __n = (long)puVar6 - (long)__src;
        uVar10 = ((long)__n >> 2) + 1;
        if (uVar10 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__vector_base_common<true>::__throw_length_error();
        }
        if (uVar10 <= (ulong)((long)__n >> 1)) {
          uVar10 = (long)__n >> 1;
        }
        if (0x7ffffffffffffffb < __n) {
          uVar10 = 0x3fffffffffffffff;
        }
        if (uVar10 == 0) {
          __dest = (uchar *)0x0;
        }
        else {
          if (uVar10 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
          }
          __dest = (uchar *)operator_new(uVar10 << 2);
        }
        *(uint *)(__dest + ((long)__n >> 2) * 4) = (uint)bVar4;
        if (0 < (long)__n) {
          memcpy(__dest,__src,__n);
        }
        param_1[4] = __dest;
        param_1[5] = (uchar *)((long)(__dest + ((long)__n >> 2) * 4) + 4);
        param_1[6] = __dest + uVar10 * 4;
        if (__src != (uchar *)0x0) {
          operator_delete(__src);
        }
      }
      else {
        *puVar6 = (uint)bVar4;
        param_1[5] = (uchar *)(puVar6 + 1);
      }
      pbVar7 = pbVar7 + 1;
      uVar9 = uVar9 - 1;
    } while (uVar9 != 0);
  }
  puVar1 = (undefined4 *)((long)puVar2 + (ulong)uVar8);
  *(undefined4 *)((long)param_1 + 0x3c) = *puVar1;
  *(undefined4 *)param_3 = puVar1[1];
  *(undefined4 **)param_2 = puVar1 + 2;
  if (*(long *)(lVar5 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


