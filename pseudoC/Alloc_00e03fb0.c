// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Alloc
// Entry Point: 00e03fb0
// Size: 556 bytes
// Signature: undefined Alloc(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::MemPoolT<112>::Alloc() */

undefined8 * tinyxml2::MemPoolT<112>::Alloc(void)

{
  uint uVar1;
  int iVar2;
  long in_x0;
  ulong uVar3;
  undefined8 *__s;
  void *__dest;
  void *__src;
  int iVar4;
  
  __s = *(undefined8 **)(in_x0 + 0x68);
  if (__s == (undefined8 *)0x0) {
    __s = (undefined8 *)operator_new(0xfc0);
    memset(__s,0,0xfc0);
    iVar4 = *(int *)(in_x0 + 100);
    if (iVar4 < *(int *)(in_x0 + 0x60)) {
      __dest = *(void **)(in_x0 + 8);
    }
    else {
      uVar1 = iVar4 * 2 + 2;
      uVar3 = -(ulong)(uVar1 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar1 << 3;
      if ((ulong)(long)(int)uVar1 >> 0x3d != 0) {
        uVar3 = 0xffffffffffffffff;
      }
      __dest = operator_new__(uVar3);
      __src = *(void **)(in_x0 + 8);
      memcpy(__dest,__src,(long)iVar4 << 3);
      if ((__src != (void *)0x0) && ((void *)(in_x0 + 0x10) != __src)) {
        operator_delete__(__src);
        iVar4 = *(int *)(in_x0 + 100);
      }
      *(void **)(in_x0 + 8) = __dest;
      *(uint *)(in_x0 + 0x60) = uVar1;
    }
    *(undefined8 **)((long)__dest + (long)iVar4 * 8) = __s;
    __s[0x1ea] = 0;
    __s[0x1c] = __s + 0x2a;
    *(undefined8 **)(in_x0 + 0x68) = __s;
    __s[0xe] = __s + 0x1c;
    *__s = __s + 0xe;
    *(int *)(in_x0 + 100) = iVar4 + 1;
    __s[0x2a] = __s + 0x38;
    __s[0x38] = __s + 0x46;
    __s[0x46] = __s + 0x54;
    __s[0x54] = __s + 0x62;
    __s[0x62] = __s + 0x70;
    __s[0x70] = __s + 0x7e;
    __s[0x7e] = __s + 0x8c;
    __s[0x8c] = __s + 0x9a;
    __s[0x9a] = __s + 0xa8;
    __s[0xa8] = __s + 0xb6;
    __s[0xb6] = __s + 0xc4;
    __s[0xc4] = __s + 0xd2;
    __s[0xd2] = __s + 0xe0;
    __s[0xe0] = __s + 0xee;
    __s[0xee] = __s + 0xfc;
    __s[0xfc] = __s + 0x10a;
    __s[0x10a] = __s + 0x118;
    __s[0x118] = __s + 0x126;
    __s[0x126] = __s + 0x134;
    __s[0x134] = __s + 0x142;
    __s[0x142] = __s + 0x150;
    __s[0x150] = __s + 0x15e;
    __s[0x15e] = __s + 0x16c;
    __s[0x16c] = __s + 0x17a;
    __s[0x17a] = __s + 0x188;
    __s[0x188] = __s + 0x196;
    __s[0x196] = __s + 0x1a4;
    __s[0x1a4] = __s + 0x1b2;
    __s[0x1b2] = __s + 0x1c0;
    __s[0x1c0] = __s + 0x1ce;
    __s[0x1ce] = __s + 0x1dc;
    __s[0x1dc] = __s + 0x1ea;
  }
  iVar2 = *(int *)(in_x0 + 0x70);
  iVar4 = iVar2 + 1;
  *(undefined8 *)(in_x0 + 0x68) = *__s;
  *(int *)(in_x0 + 0x70) = iVar4;
  if (*(int *)(in_x0 + 0x78) <= iVar2) {
    *(int *)(in_x0 + 0x78) = iVar4;
  }
  *(int *)(in_x0 + 0x74) = *(int *)(in_x0 + 0x74) + 1;
  *(int *)(in_x0 + 0x7c) = *(int *)(in_x0 + 0x7c) + 1;
  return __s;
}


