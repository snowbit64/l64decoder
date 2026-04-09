// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: erase
// Entry Point: 00a4cb44
// Size: 388 bytes
// Signature: undefined __thiscall erase(SmallVector<AudioSourceSample::Element,1u> * this, uint param_1, bool param_2)


/* SmallVector<AudioSourceSample::Element, 1u>::erase(unsigned int, bool) */

void __thiscall
SmallVector<AudioSourceSample::Element,1u>::erase
          (SmallVector<AudioSourceSample::Element,1u> *this,uint param_1,bool param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  SmallVector<AudioSourceSample::Element,1u> *pSVar5;
  uint uVar6;
  long lVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  byte local_98;
  void *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  uVar6 = *(uint *)this;
  if (param_1 + 1 < uVar6) {
    lVar7 = (ulong)(param_1 + 1) * 0x38;
    do {
      pSVar5 = this + 4;
      if (1 < uVar6) {
        pSVar5 = *(SmallVector<AudioSourceSample::Element,1u> **)(this + 0x40);
      }
      puVar2 = (undefined4 *)(pSVar5 + lVar7);
      puVar3 = (undefined4 *)(this + (ulong)param_1 * 0x38 + 4);
      if (1 < uVar6) {
        puVar3 = (undefined4 *)
                 (*(SmallVector<AudioSourceSample::Element,1u> **)(this + 0x40) +
                 (ulong)param_1 * 0x38);
      }
      uVar8 = *puVar3;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string((basic_string *)&local_98);
      local_70 = *(undefined8 *)(puVar3 + 0xc);
      uStack_78 = *(undefined8 *)(puVar3 + 10);
      local_80 = *(undefined8 *)(puVar3 + 8);
      *puVar3 = *puVar2;
                    /* try { // try from 00a4cc24 to 00a4cc57 has its CatchHandler @ 00a4ccc8 */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (puVar3 + 2),puVar2 + 2);
      uVar10 = *(undefined8 *)(puVar2 + 10);
      uVar9 = *(undefined8 *)(puVar2 + 8);
      *(undefined8 *)(puVar3 + 0xc) = *(undefined8 *)(puVar2 + 0xc);
      *(undefined8 *)(puVar3 + 10) = uVar10;
      *(undefined8 *)(puVar3 + 8) = uVar9;
      *puVar2 = uVar8;
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                (puVar2 + 2),(basic_string *)&local_98);
      *(undefined8 *)(puVar2 + 10) = uStack_78;
      *(undefined8 *)(puVar2 + 8) = local_80;
      *(undefined8 *)(puVar2 + 0xc) = local_70;
      if ((local_98 & 1) != 0) {
        operator_delete(local_88);
      }
      uVar6 = *(uint *)this;
      uVar1 = param_1 + 2;
      lVar7 = lVar7 + 0x38;
      param_1 = param_1 + 1;
    } while (uVar1 < uVar6);
  }
  pop_back(this,param_2);
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


