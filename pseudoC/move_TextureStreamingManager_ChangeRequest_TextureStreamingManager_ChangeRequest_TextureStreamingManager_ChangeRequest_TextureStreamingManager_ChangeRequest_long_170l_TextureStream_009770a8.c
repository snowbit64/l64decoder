// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: move<TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l,TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l>
// Entry Point: 009770a8
// Size: 544 bytes
// Signature: __deque_iterator __cdecl move<TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l,TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l>(__deque_iterator param_1, __deque_iterator param_2, __deque_iterator param_3)


/* std::__ndk1::__deque_iterator<TextureStreamingManager::ChangeRequest,
   TextureStreamingManager::ChangeRequest*, TextureStreamingManager::ChangeRequest&,
   TextureStreamingManager::ChangeRequest**, long, 170l>
   std::__ndk1::move<TextureStreamingManager::ChangeRequest,
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
move<TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l,TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l>
          (__deque_iterator param_1,__deque_iterator param_2,__deque_iterator param_3)

{
  void *pvVar1;
  void *pvVar2;
  long lVar3;
  void *__src;
  long *plVar4;
  void *pvVar5;
  void *in_x3;
  long *in_x4;
  void *in_x5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  pvVar5 = (void *)(ulong)param_2;
  plVar4 = (long *)(ulong)param_1;
  if (in_x3 != pvVar5) {
    lVar12 = ((long)(long *)(ulong)param_3 - (long)plVar4 >> 3) * 0xaa +
             ((long)in_x3 - *(long *)(ulong)param_3 >> 3) * -0x5555555555555555 +
             ((long)pvVar5 - *plVar4 >> 3) * 0x5555555555555555;
    while (0 < lVar12) {
      lVar8 = ((long)(void *)(*plVar4 + 0xff0) - (long)pvVar5 >> 3) * -0x5555555555555555;
      __src = pvVar5;
      lVar3 = lVar12;
      pvVar1 = (void *)((long)pvVar5 + lVar12 * 0x18);
      if (lVar8 - lVar12 == 0 || lVar8 < lVar12) {
        lVar3 = lVar8;
        pvVar1 = (void *)(*plVar4 + 0xff0);
      }
      while (__src != pvVar1) {
        lVar9 = ((long)pvVar1 - (long)__src >> 3) * -0x5555555555555555;
        lVar8 = (*in_x4 - (long)in_x5) + 0xff0;
        lVar10 = lVar8 >> 3;
        lVar11 = lVar10 * -0x5555555555555555;
        lVar10 = lVar9 + lVar10 * 0x5555555555555555;
        pvVar2 = (void *)((long)__src + lVar8);
        if (lVar10 == 0 || lVar9 < lVar11) {
          pvVar2 = pvVar1;
        }
        if (lVar10 == 0 || lVar10 < 0 != SBORROW8(lVar9,lVar11)) {
          lVar11 = lVar9;
        }
        if ((long)pvVar2 - (long)__src != 0) {
          memmove(in_x5,__src,(long)pvVar2 - (long)__src);
        }
        __src = pvVar2;
        if (lVar11 != 0) {
          uVar6 = lVar11 + ((long)in_x5 - *in_x4 >> 3) * -0x5555555555555555;
          if ((long)uVar6 < 1) {
            uVar7 = (0xa9 - uVar6) / 0xaa;
            in_x4 = in_x4 + -uVar7;
            in_x5 = (void *)(*in_x4 + (uVar7 * 0xaa - (0xa9 - uVar6)) * 0x18 + 0xfd8);
          }
          else {
            in_x4 = in_x4 + uVar6 / 0xaa;
            in_x5 = (void *)(*in_x4 + (uVar6 % 0xaa) * 0x18);
          }
        }
      }
      lVar12 = lVar12 - lVar3;
      if (lVar3 != 0) {
        uVar6 = lVar3 + ((long)pvVar5 - *plVar4 >> 3) * -0x5555555555555555;
        if ((long)uVar6 < 1) {
          uVar7 = (0xa9 - uVar6) / 0xaa;
          plVar4 = plVar4 + -uVar7;
          pvVar5 = (void *)(*plVar4 + (uVar7 * 0xaa - (0xa9 - uVar6)) * 0x18 + 0xfd8);
        }
        else {
          plVar4 = plVar4 + uVar6 / 0xaa;
          pvVar5 = (void *)(*plVar4 + (uVar6 % 0xaa) * 0x18);
        }
      }
    }
  }
  return (__deque_iterator)in_x4;
}


