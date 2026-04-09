// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: move_backward<TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l,TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l>
// Entry Point: 00976f2c
// Size: 380 bytes
// Signature: __deque_iterator __cdecl move_backward<TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l,TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l>(__deque_iterator param_1, __deque_iterator param_2, __deque_iterator param_3)


/* std::__ndk1::__deque_iterator<TextureStreamingManager::ChangeRequest,
   TextureStreamingManager::ChangeRequest*, TextureStreamingManager::ChangeRequest&,
   TextureStreamingManager::ChangeRequest**, long, 170l>
   std::__ndk1::move_backward<TextureStreamingManager::ChangeRequest,
   TextureStreamingManager::ChangeRequest*, TextureStreamingManager::ChangeRequest&,
   TextureStreamingManager::ChangeRequest**, long, 170l, TextureStreamingManager::ChangeRequest,
   TextureStreamingManager::ChangeRequest*, TextureStreamingManager::ChangeRequest&,
   TextureStreamingManager::ChangeRequest**, long,
   170l>(std::__ndk1::__deque_iterator<TextureStreamingManager::ChangeRequest,
   TextureStreamingManager::ChangeRequest*, TextureStreamingManager::ChangeRequest&,
   TextureStreamingManager::ChangeRequest**, long, 170l>,
   std::__ndk1::__deque_iterator<TextureStreamingManager::ChangeRequest,
   TextureStreamingManager::ChangeRequest*, TextureStreamingManager::ChangeRequest&,
   TextureStreamingManager::ChangeRequest**, long, 170l>,
   std::__ndk1::__deque_iterator<TextureStreamingManager::ChangeRequest,
   TextureStreamingManager::ChangeRequest*, TextureStreamingManager::ChangeRequest&,
   TextureStreamingManager::ChangeRequest**, long, 170l>) */

__deque_iterator
std::__ndk1::
move_backward<TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l,TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l>
          (__deque_iterator param_1,__deque_iterator param_2,__deque_iterator param_3)

{
  long lVar1;
  ChangeRequest *pCVar2;
  ChangeRequest *pCVar3;
  ChangeRequest **ppCVar4;
  ChangeRequest *in_x3;
  __deque_iterator in_w4;
  type *in_x5;
  ChangeRequest *pCVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  ppCVar4 = (ChangeRequest **)(ulong)param_3;
  if (in_x3 != (ChangeRequest *)(ulong)param_2) {
    lVar9 = ((long)ppCVar4 - (long)(long *)(ulong)param_1 >> 3) * 0xaa +
            ((long)in_x3 - (long)*ppCVar4 >> 3) * -0x5555555555555555 +
            ((long)(ChangeRequest *)(ulong)param_2 - *(long *)(ulong)param_1 >> 3) *
            0x5555555555555555;
    while (pCVar3 = in_x3, 0 < lVar9) {
      pCVar5 = *ppCVar4;
      if (pCVar3 == pCVar5) {
        ppCVar4 = ppCVar4 + -1;
        pCVar5 = *ppCVar4;
        pCVar3 = pCVar5 + 0xff0;
      }
      in_x3 = pCVar3 + -0x18;
      lVar8 = ((long)pCVar3 - (long)pCVar5 >> 3) * -0x5555555555555555;
      lVar1 = lVar9;
      pCVar2 = pCVar3 + lVar9 * -0x18;
      if (lVar8 - lVar9 == 0 || lVar8 < lVar9) {
        lVar1 = lVar8;
        pCVar2 = pCVar5;
      }
      in_w4 = move_backward<TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l>
                        (pCVar2,pCVar3,in_w4,in_x5);
      lVar9 = lVar9 - lVar1;
      in_x5 = (type *)pCVar3;
      if (lVar1 + -1 != 0) {
        uVar6 = ((long)in_x3 - (long)*ppCVar4 >> 3) * -0x5555555555555555 - (lVar1 + -1);
        if ((long)uVar6 < 1) {
          uVar7 = (0xa9 - uVar6) / 0xaa;
          ppCVar4 = ppCVar4 + -uVar7;
          in_x3 = *ppCVar4 + (uVar7 * 0xaa - (0xa9 - uVar6)) * 0x18 + 0xfd8;
        }
        else {
          ppCVar4 = ppCVar4 + uVar6 / 0xaa;
          in_x3 = *ppCVar4 + (uVar6 % 0xaa) * 0x18;
        }
      }
    }
  }
  return in_w4;
}


