// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: pushParts
// Entry Point: 00ea767c
// Size: 188 bytes
// Signature: undefined __thiscall pushParts(PrimitiveSetBase * this, PrimitiveSet * param_1)


/* VHACD::PrimitiveSetBase::pushParts(VHACD::PrimitiveSet*) */

void __thiscall VHACD::PrimitiveSetBase::pushParts(PrimitiveSetBase *this,PrimitiveSet *param_1)

{
  void *pvVar1;
  void *__dest;
  ulong uVar2;
  void *pvVar3;
  void *pvVar4;
  ulong uVar5;
  ulong uVar6;
  
  std::__ndk1::mutex::lock();
  pvVar4 = *(void **)(this + 0x58);
  uVar5 = *(ulong *)((long)pvVar4 + 0x208);
  uVar6 = *(ulong *)((long)pvVar4 + 0x210);
  if (uVar5 == uVar6) {
    uVar6 = uVar5 << 1;
    uVar2 = uVar5 << 4;
    if (uVar6 >> 0x3d != 0) {
      uVar2 = 0xffffffffffffffff;
    }
    __dest = operator_new__(uVar2);
    pvVar3 = *(void **)((long)pvVar4 + 0x200);
    pvVar1 = pvVar4;
    if (uVar5 != 0x40) {
      pvVar1 = pvVar3;
    }
    memcpy(__dest,pvVar1,uVar5 << 3);
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
      uVar5 = *(ulong *)((long)pvVar4 + 0x208);
    }
    *(void **)((long)pvVar4 + 0x200) = __dest;
    *(ulong *)((long)pvVar4 + 0x210) = uVar6;
  }
  else {
    __dest = *(void **)((long)pvVar4 + 0x200);
  }
  pvVar1 = pvVar4;
  if (uVar6 != 0x40) {
    pvVar1 = __dest;
  }
  *(ulong *)((long)pvVar4 + 0x208) = uVar5 + 1;
  *(PrimitiveSet **)((long)pvVar1 + uVar5 * 8) = param_1;
  std::__ndk1::mutex::unlock();
  return;
}


