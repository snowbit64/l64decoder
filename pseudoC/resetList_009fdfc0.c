// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: resetList
// Entry Point: 009fdfc0
// Size: 292 bytes
// Signature: undefined resetList(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* LightList::resetList() */

void LightList::resetList(void)

{
  uint uVar1;
  long in_x0;
  long lVar2;
  void *__dest;
  void *pvVar3;
  size_t __n;
  ulong uVar4;
  
  if (*(long *)(in_x0 + 0x58) != *(long *)(in_x0 + 0x50)) {
    *(long *)(in_x0 + 0x58) = *(long *)(in_x0 + 0x50);
  }
  if (*(long *)(in_x0 + 0x70) != *(long *)(in_x0 + 0x68)) {
    *(long *)(in_x0 + 0x70) = *(long *)(in_x0 + 0x68);
  }
  if (*(long *)(in_x0 + 0xa0) != *(long *)(in_x0 + 0x98)) {
    *(long *)(in_x0 + 0xa0) = *(long *)(in_x0 + 0x98);
  }
  if (*(long *)(in_x0 + 0x88) != *(long *)(in_x0 + 0x80)) {
    *(long *)(in_x0 + 0x88) = *(long *)(in_x0 + 0x80);
  }
  lVar2 = EngineManager::getInstance();
  uVar1 = *(uint *)(lVar2 + 500);
  if (*(uint *)(in_x0 + 8) != uVar1) {
    *(uint *)(in_x0 + 8) = uVar1;
    pvVar3 = *(void **)(in_x0 + 0x18);
    if ((ulong)(*(long *)(in_x0 + 0x28) - (long)pvVar3 >> 3) < (ulong)uVar1) {
      uVar4 = (ulong)uVar1 * 8;
      __n = *(long *)(in_x0 + 0x20) - (long)pvVar3;
      __dest = operator_new(uVar4);
      if (0 < (long)__n) {
        memcpy(__dest,pvVar3,__n);
      }
      *(void **)(in_x0 + 0x18) = __dest;
      *(size_t *)(in_x0 + 0x20) = (long)__dest + __n;
      *(void **)(in_x0 + 0x28) = (void *)((long)__dest + uVar4);
      if (pvVar3 != (void *)0x0) {
        operator_delete(pvVar3);
      }
    }
    if (*(void **)(in_x0 + 0x10) != (void *)0x0) {
      operator_delete__(*(void **)(in_x0 + 0x10));
    }
    pvVar3 = operator_new__((ulong)*(uint *)(in_x0 + 8) * 0x78);
    *(void **)(in_x0 + 0x10) = pvVar3;
  }
  if (*(long *)(in_x0 + 0x20) != *(long *)(in_x0 + 0x18)) {
    *(long *)(in_x0 + 0x20) = *(long *)(in_x0 + 0x18);
  }
  *(undefined4 *)(in_x0 + 0x34) = 0;
  *(undefined4 *)(in_x0 + 0x38) = 0;
  *(undefined *)(in_x0 + 0x30) = 0;
  *(undefined8 *)(in_x0 + 0x40) = 0;
  *(undefined8 *)(in_x0 + 0xb8) = 0;
  *(undefined8 *)(in_x0 + 0xc0) = 0;
  return;
}


