// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: __push_back_slow_path<VoiceChatManager::VoiceConnection_const&>
// Entry Point: 00b18d28
// Size: 592 bytes
// Signature: void __thiscall __push_back_slow_path<VoiceChatManager::VoiceConnection_const&>(vector<VoiceChatManager::VoiceConnection,std::__ndk1::allocator<VoiceChatManager::VoiceConnection>> * this, VoiceConnection * param_1)


/* void std::__ndk1::vector<VoiceChatManager::VoiceConnection,
   std::__ndk1::allocator<VoiceChatManager::VoiceConnection>
   >::__push_back_slow_path<VoiceChatManager::VoiceConnection
   const&>(VoiceChatManager::VoiceConnection const&) */

void __thiscall
std::__ndk1::
vector<VoiceChatManager::VoiceConnection,std::__ndk1::allocator<VoiceChatManager::VoiceConnection>>
::__push_back_slow_path<VoiceChatManager::VoiceConnection_const&>
          (vector<VoiceChatManager::VoiceConnection,std::__ndk1::allocator<VoiceChatManager::VoiceConnection>>
           *this,VoiceConnection *param_1)

{
  ulong uVar1;
  VoiceConnection *pVVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  VoiceConnection *pVVar12;
  long *plVar13;
  long lVar14;
  
  lVar3 = tpidr_el0;
  lVar5 = *(long *)(lVar3 + 0x28);
  lVar6 = *(long *)(this + 8) - *(long *)this >> 4;
  uVar1 = lVar6 * 0x6db6db6db6db6db7 + 1;
  if (0x249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__vector_base_common<true>::__throw_length_error();
  }
  lVar10 = *(long *)(this + 0x10) - *(long *)this >> 4;
  uVar11 = lVar10 * -0x2492492492492492;
  if (uVar1 <= uVar11) {
    uVar1 = uVar11;
  }
  if (0x124924924924923 < (ulong)(lVar10 * 0x6db6db6db6db6db7)) {
    uVar1 = 0x249249249249249;
  }
  if (uVar1 == 0) {
    pvVar4 = (void *)0x0;
  }
  else {
    if (0x249249249249249 < uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_006d1f18("allocator<T>::allocate(size_t n) \'n\' exceeds maximum supported size");
    }
    pvVar4 = operator_new(uVar1 * 0x70);
  }
  pVVar12 = (VoiceConnection *)((long)pvVar4 + lVar6 * 0x10);
                    /* try { // try from 00b18e00 to 00b18e0f has its CatchHandler @ 00b18f78 */
  allocator<VoiceChatManager::VoiceConnection>::
  construct<VoiceChatManager::VoiceConnection,VoiceChatManager::VoiceConnection_const&>
            ((allocator<VoiceChatManager::VoiceConnection> *)(this + 0x10),pVVar12,param_1);
  plVar13 = *(long **)this;
  pVVar2 = pVVar12 + 0x70;
  plVar7 = plVar13;
  if (*(long **)(this + 8) != plVar13) {
    plVar7 = *(long **)(this + 8) + -7;
    do {
      lVar10 = plVar7[-6];
      lVar6 = plVar7[-7];
      *(long *)(pVVar12 + -0x60) = plVar7[-5];
      *(long *)(pVVar12 + -0x68) = lVar10;
      *(long *)(pVVar12 + -0x70) = lVar6;
      plVar7[-6] = 0;
      plVar7[-5] = 0;
      lVar10 = plVar7[-3];
      lVar6 = plVar7[-4];
      plVar7[-7] = 0;
      *(long *)(pVVar12 + -0x48) = plVar7[-2];
      *(long *)(pVVar12 + -0x50) = lVar10;
      *(long *)(pVVar12 + -0x58) = lVar6;
      plVar7[-3] = 0;
      plVar7[-2] = 0;
      plVar7[-4] = 0;
      *(long *)(pVVar12 + -0x40) = plVar7[-1];
      lVar6 = *plVar7;
      *(long *)(pVVar12 + -0x38) = lVar6;
      lVar10 = plVar7[1];
      *(long *)(pVVar12 + -0x30) = lVar10;
      if (lVar10 == 0) {
        *(VoiceConnection **)(pVVar12 + -0x40) = pVVar12 + -0x38;
      }
      else {
        *(VoiceConnection **)(lVar6 + 0x10) = pVVar12 + -0x38;
        plVar7[-1] = (long)plVar7;
        *plVar7 = 0;
        plVar7[1] = 0;
      }
      lVar14 = plVar7[2];
      lVar10 = plVar7[5];
      lVar6 = plVar7[4];
      uVar8 = *(undefined8 *)((long)plVar7 + 0x2f);
      *(long *)(pVVar12 + -0x20) = plVar7[3];
      *(long *)(pVVar12 + -0x28) = lVar14;
      *(undefined8 *)(pVVar12 + -9) = uVar8;
      *(long *)(pVVar12 + -0x10) = lVar10;
      *(long *)(pVVar12 + -0x18) = lVar6;
      pVVar12 = pVVar12 + -0x70;
      plVar9 = plVar7 + -7;
      plVar7 = plVar7 + -0xe;
    } while (plVar9 != plVar13);
    plVar13 = *(long **)this;
    plVar7 = *(long **)(this + 8);
  }
  *(VoiceConnection **)this = pVVar12;
  *(VoiceConnection **)(this + 8) = pVVar2;
  *(void **)(this + 0x10) = (void *)((long)pvVar4 + uVar1 * 0x70);
  while (plVar9 = plVar7, plVar9 != plVar13) {
    __tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>::
    destroy((__tree<unsigned_char,std::__ndk1::less<unsigned_char>,std::__ndk1::allocator<unsigned_char>>
             *)(plVar9 + -8),(__tree_node *)plVar9[-7]);
    if ((*(byte *)(plVar9 + -0xb) & 1) != 0) {
      operator_delete((void *)plVar9[-9]);
    }
    plVar7 = plVar9 + -0xe;
    if ((*(byte *)(plVar9 + -0xe) & 1) != 0) {
      operator_delete((void *)plVar9[-0xc]);
    }
  }
  if (plVar13 != (long *)0x0) {
    operator_delete(plVar13);
  }
  if (*(long *)(lVar3 + 0x28) == lVar5) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


