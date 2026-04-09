// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getFrameImage
// Entry Point: 00c72c68
// Size: 776 bytes
// Signature: undefined __thiscall getFrameImage(TheoraVideoDecoder * this, void * param_1, uint param_2, void * param_3, uint param_4, void * param_5, uint param_6)


/* TheoraVideoDecoder::getFrameImage(void*, unsigned int, void*, unsigned int, void*, unsigned int)
    */

void __thiscall
TheoraVideoDecoder::getFrameImage
          (TheoraVideoDecoder *this,void *param_1,uint param_2,void *param_3,uint param_4,
          void *param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  void **ppvVar4;
  void **ppvVar5;
  void **ppvVar6;
  void *__src;
  uint uVar7;
  void **ppvVar8;
  void *pvVar9;
  
  if (*(int *)(*(long *)(this + 0x40) + 0x1d0) != 0) {
    DebugUtil::message("Error","TheoraVideoDecoder::getFrameImage: Unsupported pixel format",
                       (char *)0x0,"T:/src/base/video/theora/TheoraVideoDecoder.cpp",0x1ea);
    return;
  }
  ppvVar5 = (void **)(this + 0xa8);
  ppvVar8 = (void **)*ppvVar5;
  while (ppvVar8 == (void **)0x0) {
    ppvVar6 = *(void ***)(this + 0xa0);
    do {
      ppvVar8 = (void **)*ppvVar6;
      ppvVar4 = (void **)FUN_00f275d0(ppvVar8,0,ppvVar6);
    } while (ppvVar8 != ppvVar4);
    *ppvVar5 = ppvVar8;
    if (ppvVar8 != (void **)0x0) break;
    ThreadUtil::usleep(100);
    ppvVar8 = (void **)*ppvVar5;
  }
  do {
    ppvVar4 = ppvVar8;
    ppvVar6 = ppvVar5;
    ppvVar8 = (void **)ppvVar4[1];
    ppvVar5 = ppvVar4 + 1;
  } while (ppvVar8 != (void **)0x0);
  *ppvVar6 = (void *)0x0;
  FUN_00f27700(0xffffffff,*(long *)(this + 0xa0) + 8);
  Semaphore::post();
  if (*ppvVar4 == (void *)0x0) {
    this[0x50] = (TheoraVideoDecoder)0x1;
    operator_delete(ppvVar4);
    pvVar9 = **(void ***)(this + 0x88);
  }
  else {
    ppvVar8 = *(void ***)(this + 0x88);
    if (ppvVar8 != (void **)0x0) {
      if (*ppvVar8 != (void *)0x0) {
        operator_delete__(*ppvVar8);
      }
      operator_delete(ppvVar8);
    }
    *(void ***)(this + 0x88) = ppvVar4;
    pvVar9 = *ppvVar4;
  }
  if (pvVar9 == (void *)0x0) {
    if (param_1 != (void *)0x0) {
      memset(param_1,0x10,(ulong)(*(int *)(this + 0x108) * param_2));
      memset(param_3,0x80,(ulong)(*(int *)(this + 0x108) * param_4 >> 1));
      memset(param_5,0x80,(ulong)(*(int *)(this + 0x108) * param_6 >> 1));
    }
  }
  else if (param_1 != (void *)0x0) {
    uVar1 = *(uint *)(this + 0x104);
    uVar7 = *(uint *)(this + 0x108);
    uVar3 = uVar1 >> 1;
    uVar2 = uVar7 >> 1;
    __src = (void *)((long)pvVar9 + (ulong)(uVar7 * uVar1));
    if (uVar1 == param_2) {
      memcpy(param_1,pvVar9,(ulong)(uVar7 * uVar1));
    }
    else {
      for (; uVar7 != 0; uVar7 = uVar7 - 1) {
        memcpy(param_1,pvVar9,(ulong)uVar1);
        pvVar9 = (void *)((long)pvVar9 + (ulong)uVar1);
        param_1 = (void *)((long)param_1 + (ulong)param_2);
      }
    }
    uVar1 = *(uint *)(this + 0x104);
    uVar7 = *(uint *)(this + 0x108) >> 1;
    pvVar9 = (void *)((long)__src + (ulong)(uVar2 * uVar3));
    if ((uVar3 == param_4) && (uVar3 == uVar1 >> 1)) {
      memcpy(param_3,__src,(ulong)(uVar7 * param_4));
    }
    else if (1 < *(uint *)(this + 0x108)) {
      do {
        memcpy(param_3,__src,(ulong)(uVar1 >> 1));
        __src = (void *)((long)__src + (ulong)uVar3);
        param_3 = (void *)((long)param_3 + (ulong)param_4);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar1 = *(uint *)(this + 0x104);
    uVar7 = *(uint *)(this + 0x108) >> 1;
    if ((uVar3 == param_6) && (uVar3 == uVar1 >> 1)) {
      memcpy(param_5,pvVar9,(ulong)(uVar7 * param_6));
    }
    else if (1 < *(uint *)(this + 0x108)) {
      do {
        memcpy(param_5,pvVar9,(ulong)(uVar1 >> 1));
        pvVar9 = (void *)((long)pvVar9 + (ulong)uVar3);
        param_5 = (void *)((long)param_5 + (ulong)param_6);
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
  }
  *(int *)(this + 0x118) = *(int *)(this + 0x118) + 1;
  return;
}


