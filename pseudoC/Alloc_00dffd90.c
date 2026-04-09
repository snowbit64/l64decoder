// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Alloc
// Entry Point: 00dffd90
// Size: 676 bytes
// Signature: undefined Alloc(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::MemPoolT<80>::Alloc() */

undefined8 * tinyxml2::MemPoolT<80>::Alloc(void)

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
    __s = (undefined8 *)operator_new(0xff0);
    memset(__s,0,0xff0);
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
    __s[500] = 0;
    __s[0x1e] = __s + 0x28;
    *(undefined8 **)(in_x0 + 0x68) = __s;
    __s[0x14] = __s + 0x1e;
    __s[10] = __s + 0x14;
    *__s = __s + 10;
    *(int *)(in_x0 + 100) = iVar4 + 1;
    __s[0x28] = __s + 0x32;
    __s[0x32] = __s + 0x3c;
    __s[0x3c] = __s + 0x46;
    __s[0x46] = __s + 0x50;
    __s[0x50] = __s + 0x5a;
    __s[0x5a] = __s + 100;
    __s[100] = __s + 0x6e;
    __s[0x6e] = __s + 0x78;
    __s[0x78] = __s + 0x82;
    __s[0x82] = __s + 0x8c;
    __s[0x8c] = __s + 0x96;
    __s[0x96] = __s + 0xa0;
    __s[0xa0] = __s + 0xaa;
    __s[0xaa] = __s + 0xb4;
    __s[0xb4] = __s + 0xbe;
    __s[0xbe] = __s + 200;
    __s[200] = __s + 0xd2;
    __s[0xd2] = __s + 0xdc;
    __s[0xdc] = __s + 0xe6;
    __s[0xe6] = __s + 0xf0;
    __s[0xf0] = __s + 0xfa;
    __s[0xfa] = __s + 0x104;
    __s[0x104] = __s + 0x10e;
    __s[0x10e] = __s + 0x118;
    __s[0x118] = __s + 0x122;
    __s[0x122] = __s + 300;
    __s[300] = __s + 0x136;
    __s[0x136] = __s + 0x140;
    __s[0x140] = __s + 0x14a;
    __s[0x14a] = __s + 0x154;
    __s[0x154] = __s + 0x15e;
    __s[0x15e] = __s + 0x168;
    __s[0x168] = __s + 0x172;
    __s[0x172] = __s + 0x17c;
    __s[0x17c] = __s + 0x186;
    __s[0x186] = __s + 400;
    __s[400] = __s + 0x19a;
    __s[0x19a] = __s + 0x1a4;
    __s[0x1a4] = __s + 0x1ae;
    __s[0x1ae] = __s + 0x1b8;
    __s[0x1b8] = __s + 0x1c2;
    __s[0x1c2] = __s + 0x1cc;
    __s[0x1cc] = __s + 0x1d6;
    __s[0x1d6] = __s + 0x1e0;
    __s[0x1e0] = __s + 0x1ea;
    __s[0x1ea] = __s + 500;
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


