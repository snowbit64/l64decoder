// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: move_backward<TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l>
// Entry Point: 009772c8
// Size: 400 bytes
// Signature: __deque_iterator __cdecl move_backward<TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l>(ChangeRequest * param_1, ChangeRequest * param_2, __deque_iterator param_3, type * param_4)


/* std::__ndk1::__deque_iterator<TextureStreamingManager::ChangeRequest,
   TextureStreamingManager::ChangeRequest*, TextureStreamingManager::ChangeRequest&,
   TextureStreamingManager::ChangeRequest**, long, 170l>
   std::__ndk1::move_backward<TextureStreamingManager::ChangeRequest*,
   TextureStreamingManager::ChangeRequest, TextureStreamingManager::ChangeRequest*,
   TextureStreamingManager::ChangeRequest&, TextureStreamingManager::ChangeRequest**, long,
   170l>(TextureStreamingManager::ChangeRequest*, TextureStreamingManager::ChangeRequest*,
   std::__ndk1::__deque_iterator<TextureStreamingManager::ChangeRequest,
   TextureStreamingManager::ChangeRequest*, TextureStreamingManager::ChangeRequest&,
   TextureStreamingManager::ChangeRequest**, long, 170l>,
   std::__ndk1::enable_if<__is_cpp17_random_access_iterator<TextureStreamingManager::ChangeRequest*>::value,
   void>::type*) */

__deque_iterator
std::__ndk1::
move_backward<TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l>
          (ChangeRequest *param_1,ChangeRequest *param_2,__deque_iterator param_3,type *param_4)

{
  long lVar1;
  ChangeRequest *__src;
  size_t __n;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  
  plVar2 = (long *)(ulong)param_3;
  if (param_2 != param_1) {
    do {
      lVar4 = (long)param_4 - *plVar2 >> 3;
      if ((long)param_4 - *plVar2 < 0x19) {
        uVar8 = lVar4 * 0x5555555555555555 + 0xaa;
        uVar3 = uVar8 / 0xaa;
        lVar5 = plVar2[-uVar3];
        lVar4 = lVar5 + (uVar3 * 0xaa - uVar8) * 0x18 + 0xfd8;
      }
      else {
        uVar8 = lVar4 * -0x5555555555555555 - 1;
        lVar5 = plVar2[uVar8 / 0xaa];
        lVar4 = lVar5 + (uVar8 % 0xaa) * 0x18;
      }
      lVar6 = (lVar4 + 0x18) - lVar5 >> 3;
      lVar9 = ((long)param_2 - (long)param_1 >> 3) * -0x5555555555555555;
      lVar7 = lVar6 * -0x5555555555555555;
      lVar5 = lVar9 + lVar6 * 0x5555555555555555;
      lVar1 = lVar7;
      if (lVar5 == 0 || lVar9 < lVar7) {
        lVar1 = lVar9;
      }
      __src = param_2 + lVar6 * -8;
      if (lVar5 == 0 || lVar5 < 0 != SBORROW8(lVar9,lVar7)) {
        __src = param_1;
      }
      __n = (long)param_2 - (long)__src;
      if (__n != 0) {
        memmove((void *)((lVar4 + 0x18) - __n),__src,__n);
      }
      if (lVar1 != 0) {
        uVar8 = ((long)param_4 - *plVar2 >> 3) * -0x5555555555555555 - lVar1;
        if ((long)uVar8 < 1) {
          uVar3 = (0xa9 - uVar8) / 0xaa;
          plVar2 = plVar2 + -uVar3;
          param_4 = (type *)(*plVar2 + (uVar3 * 0xaa - (0xa9 - uVar8)) * 0x18 + 0xfd8);
        }
        else {
          plVar2 = plVar2 + uVar8 / 0xaa;
          param_4 = (type *)(*plVar2 + (uVar8 % 0xaa) * 0x18);
        }
      }
      param_2 = __src;
    } while (__src != param_1);
  }
  return (__deque_iterator)plVar2;
}


