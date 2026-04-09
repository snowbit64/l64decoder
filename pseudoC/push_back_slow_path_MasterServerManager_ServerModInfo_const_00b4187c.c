// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<MasterServerManager::ServerModInfo_const&>
// Entry Point: 00b4187c
// Size: 456 bytes
// Signature: void __thiscall __push_back_slow_path<MasterServerManager::ServerModInfo_const&>(vector<MasterServerManager::ServerModInfo,std::__ndk1::allocator<MasterServerManager::ServerModInfo>> * this, ServerModInfo * param_1)


/* void std::__ndk1::vector<MasterServerManager::ServerModInfo,
   std::__ndk1::allocator<MasterServerManager::ServerModInfo>
   >::__push_back_slow_path<MasterServerManager::ServerModInfo
   const&>(MasterServerManager::ServerModInfo const&) */

void __thiscall
std::__ndk1::
vector<MasterServerManager::ServerModInfo,std::__ndk1::allocator<MasterServerManager::ServerModInfo>>
::__push_back_slow_path<MasterServerManager::ServerModInfo_const&>
          (vector<MasterServerManager::ServerModInfo,std::__ndk1::allocator<MasterServerManager::ServerModInfo>>
           *this,ServerModInfo *param_1)

{
  ulong uVar1;
  basic_string *pbVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  ulong uVar9;
  byte *pbVar10;
  byte *pbVar11;
  basic_string *pbVar12;
  basic_string *pbVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar6 * -0x3333333333333333 + 1;
  if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar9 = lVar7 * -0x6666666666666666;
  if (uVar1 <= uVar9) {
    uVar1 = uVar9;
  }
  if (0x333333333333332 < (ulong)(lVar7 * -0x3333333333333333)) {
    uVar1 = 0x666666666666666;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x666666666666666 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x28);
  }
  pbVar12 = (basic_string *)((long)pvVar4 + lVar6 * 8);
                    /* try { // try from 00b41944 to 00b4194f has its CatchHandler @ 00b41a44 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(pbVar12);
  uVar14 = *(undefined8 *)(param_1 + 0x18);
  pbVar11 = *(byte **)this;
  pbVar8 = *(byte **)(this + 8);
  pbVar2 = pbVar12 + 10;
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)((long)pvVar4 + lVar6 * 8 + 0x18) = uVar14;
  pbVar10 = pbVar11;
  pbVar13 = pbVar12;
  if (pbVar8 != pbVar11) {
    do {
      uVar15 = *(undefined8 *)(pbVar8 + -0x20);
      uVar14 = *(undefined8 *)(pbVar8 + -0x28);
      *(undefined8 *)(pbVar13 + -6) = *(undefined8 *)(pbVar8 + -0x18);
      pbVar10 = pbVar8 + -0x28;
      *(undefined8 *)(pbVar13 + -8) = uVar15;
      *(undefined8 *)(pbVar13 + -10) = uVar14;
      pbVar12 = pbVar13 + -10;
      *(undefined8 *)(pbVar8 + -0x20) = 0;
      *(undefined8 *)(pbVar8 + -0x18) = 0;
      uVar14 = *(undefined8 *)(pbVar8 + -0x10);
      *(undefined8 *)(pbVar8 + -0x28) = 0;
      *(undefined8 *)(pbVar13 + -2) = *(undefined8 *)(pbVar8 + -8);
      *(undefined8 *)(pbVar13 + -4) = uVar14;
      pbVar8 = pbVar10;
      pbVar13 = pbVar12;
    } while (pbVar10 != pbVar11);
    pbVar11 = *(byte **)(this + 8);
    pbVar10 = *(byte **)this;
  }
  *(basic_string **)this = pbVar12;
  *(basic_string **)(this + 8) = pbVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x28);
  while (pbVar8 = pbVar11, pbVar8 != pbVar10) {
    pbVar11 = pbVar8 + -0x28;
    if ((*pbVar11 & 1) != 0) {
      operator_delete(*(void **)(pbVar8 + -0x18));
    }
  }
  if (pbVar10 != (byte *)0x0) {
    operator_delete(pbVar10);
  }
  if (*(long *)(lVar3 + 0x28) != lVar5) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


