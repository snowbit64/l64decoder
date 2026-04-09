// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: erase
// Entry Point: 0096e2b8
// Size: 1084 bytes
// Signature: undefined __cdecl erase(__deque_iterator param_1)


/* std::__ndk1::deque<TextureStreamingManager::ChangeRequest,
   std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>
   >::erase(std::__ndk1::__deque_iterator<TextureStreamingManager::ChangeRequest,
   TextureStreamingManager::ChangeRequest const*, TextureStreamingManager::ChangeRequest const&,
   TextureStreamingManager::ChangeRequest const* const*, long, 170l>) */

void std::__ndk1::
     deque<TextureStreamingManager::ChangeRequest,std::__ndk1::allocator<TextureStreamingManager::ChangeRequest>>
     ::erase(__deque_iterator param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  __deque_iterator _Var5;
  long *in_x1;
  long lVar6;
  long in_x2;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar3 = (ulong)param_1;
  uVar9 = *(ulong *)(uVar3 + 0x20);
  lVar2 = *(long *)(uVar3 + 8);
  plVar1 = (long *)(lVar2 + (uVar9 / 0xaa) * 8);
  plVar4 = plVar1;
  if (*(long *)(uVar3 + 0x10) == lVar2) {
    lVar6 = 0;
    if (in_x2 == 0) goto LAB_0096e454;
  }
  else {
    lVar6 = *plVar1 + (uVar9 % 0xaa) * 0x18;
    if (in_x2 == lVar6) goto LAB_0096e454;
  }
  lVar7 = lVar6 - *plVar1 >> 3;
  uVar12 = ((long)in_x1 - (long)plVar1 >> 3) * 0xaa + (in_x2 - *in_x1 >> 3) * -0x5555555555555555 +
           lVar7 * 0x5555555555555555;
  if (uVar12 != 0) {
    uVar8 = uVar12 + lVar7 * -0x5555555555555555;
    if ((long)uVar8 < 1) {
      uVar11 = (0xa9 - uVar8) / 0xaa;
      plVar4 = plVar1 + -uVar11;
      lVar10 = *plVar4;
      lVar7 = lVar10 + (uVar11 * 0xaa - (0xa9 - uVar8)) * 0x18 + 0xfd8;
    }
    else {
      plVar4 = plVar1 + uVar8 / 0xaa;
      lVar10 = *plVar4;
      lVar7 = lVar10 + (uVar8 % 0xaa) * 0x18;
    }
    if (*(long *)(uVar3 + 0x28) - 1U >> 1 < uVar12) {
      lVar7 = lVar7 - lVar10;
      if (lVar7 + 0x17 < 0 == SCARRY8(lVar7,0x17)) {
        uVar12 = (lVar7 >> 3) * -0x5555555555555555 + 1;
        plVar4 = plVar4 + uVar12 / 0xaa;
        _Var5 = (int)*plVar4 + (int)(uVar12 % 0xaa) * 0x18;
      }
      else {
        uVar12 = (lVar7 >> 3) * 0x5555555555555555 + 0xa8;
        uVar8 = uVar12 / 0xaa;
        plVar4 = plVar4 + -uVar8;
        _Var5 = (int)*plVar4 + ((int)uVar8 * 0xaa - (int)uVar12) * 0x18 + 0xfd8;
      }
      move<TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l,TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l>
                ((__deque_iterator)plVar4,_Var5,
                 (int)lVar2 + (int)((*(long *)(uVar3 + 0x28) + uVar9) / 0xaa << 3));
      lVar6 = *(long *)(uVar3 + 0x10) - *(long *)(uVar3 + 8);
      lVar2 = 0;
      if (lVar6 != 0) {
        lVar2 = (lVar6 >> 3) * 0xaa + -1;
      }
      lVar6 = *(long *)(uVar3 + 0x28) + -1;
      *(long *)(uVar3 + 0x28) = lVar6;
      if ((ulong)(lVar2 - (lVar6 + *(long *)(uVar3 + 0x20))) < 0x154) {
        return;
      }
      operator_delete(*(void **)(*(long *)(uVar3 + 0x10) + -8));
      *(long *)(uVar3 + 0x10) = *(long *)(uVar3 + 0x10) + -8;
      return;
    }
  }
LAB_0096e454:
  move_backward<TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l,TextureStreamingManager::ChangeRequest,TextureStreamingManager::ChangeRequest*,TextureStreamingManager::ChangeRequest&,TextureStreamingManager::ChangeRequest**,long,170l>
            ((__deque_iterator)plVar1,(__deque_iterator)lVar6,(__deque_iterator)plVar4);
  uVar9 = *(long *)(uVar3 + 0x20) + 1;
  *(ulong *)(uVar3 + 0x20) = uVar9;
  *(long *)(uVar3 + 0x28) = *(long *)(uVar3 + 0x28) + -1;
  if (0x153 < uVar9) {
    operator_delete(**(void ***)(uVar3 + 8));
    *(long *)(uVar3 + 8) = *(long *)(uVar3 + 8) + 8;
    *(long *)(uVar3 + 0x20) = *(long *)(uVar3 + 0x20) + -0xaa;
  }
  return;
}


