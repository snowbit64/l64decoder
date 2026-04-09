// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clear
// Entry Point: 008bdac8
// Size: 276 bytes
// Signature: undefined clear(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* std::__ndk1::__deque_base<SoundPlayer::SampleLoadInfo,
   std::__ndk1::allocator<SoundPlayer::SampleLoadInfo> >::clear() */

void std::__ndk1::
     __deque_base<SoundPlayer::SampleLoadInfo,std::__ndk1::allocator<SoundPlayer::SampleLoadInfo>>::
     clear(void)

{
  long lVar1;
  long in_x0;
  void **ppvVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  void **ppvVar5;
  
  ppvVar2 = *(void ***)(in_x0 + 8);
  ppvVar5 = *(void ***)(in_x0 + 0x10);
  if (ppvVar5 != ppvVar2) {
    uVar6 = *(ulong *)(in_x0 + 0x20);
    uVar4 = *(long *)(in_x0 + 0x28) + uVar6;
    plVar7 = (long *)((long)ppvVar2 + (uVar6 >> 4 & 0xffffffffffffff8));
    lVar8 = *plVar7 + (uVar6 & 0x7f) * 0x20;
    lVar1 = *(long *)((long)ppvVar2 + (uVar4 >> 4 & 0xffffffffffffff8)) + (uVar4 & 0x7f) * 0x20;
    if (lVar8 != lVar1) {
      do {
        if ((*(byte *)(lVar8 + 8) & 1) != 0) {
          operator_delete(*(void **)(lVar8 + 0x18));
        }
        lVar8 = lVar8 + 0x20;
        if (lVar8 - *plVar7 == 0x1000) {
          plVar7 = plVar7 + 1;
          lVar8 = *plVar7;
        }
      } while (lVar8 != lVar1);
      ppvVar2 = *(void ***)(in_x0 + 8);
      ppvVar5 = *(void ***)(in_x0 + 0x10);
    }
  }
  *(undefined8 *)(in_x0 + 0x28) = 0;
  uVar4 = (long)ppvVar5 - (long)ppvVar2;
  while (0x10 < uVar4) {
    operator_delete(*ppvVar2);
    ppvVar2 = (void **)(*(long *)(in_x0 + 8) + 8);
    *(void ***)(in_x0 + 8) = ppvVar2;
    uVar4 = *(long *)(in_x0 + 0x10) - (long)ppvVar2;
  }
  if (uVar4 >> 3 == 1) {
    uVar3 = 0x40;
  }
  else {
    if (uVar4 >> 3 != 2) {
      return;
    }
    uVar3 = 0x80;
  }
  *(undefined8 *)(in_x0 + 0x20) = uVar3;
  return;
}


