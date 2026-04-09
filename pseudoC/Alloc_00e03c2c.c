// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Alloc
// Entry Point: 00e03c2c
// Size: 540 bytes
// Signature: undefined Alloc(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::MemPoolT<120>::Alloc() */

undefined8 * tinyxml2::MemPoolT<120>::Alloc(void)

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
    __s[0x1ef] = 0;
    __s[0x1e] = __s + 0x2d;
    *(undefined8 **)(in_x0 + 0x68) = __s;
    __s[0xf] = __s + 0x1e;
    *__s = __s + 0xf;
    *(int *)(in_x0 + 100) = iVar4 + 1;
    __s[0x2d] = __s + 0x3c;
    __s[0x3c] = __s + 0x4b;
    __s[0x4b] = __s + 0x5a;
    __s[0x5a] = __s + 0x69;
    __s[0x69] = __s + 0x78;
    __s[0x78] = __s + 0x87;
    __s[0x87] = __s + 0x96;
    __s[0x96] = __s + 0xa5;
    __s[0xa5] = __s + 0xb4;
    __s[0xb4] = __s + 0xc3;
    __s[0xc3] = __s + 0xd2;
    __s[0xd2] = __s + 0xe1;
    __s[0xe1] = __s + 0xf0;
    __s[0xf0] = __s + 0xff;
    __s[0xff] = __s + 0x10e;
    __s[0x10e] = __s + 0x11d;
    __s[0x11d] = __s + 300;
    __s[300] = __s + 0x13b;
    __s[0x13b] = __s + 0x14a;
    __s[0x14a] = __s + 0x159;
    __s[0x159] = __s + 0x168;
    __s[0x168] = __s + 0x177;
    __s[0x177] = __s + 0x186;
    __s[0x186] = __s + 0x195;
    __s[0x195] = __s + 0x1a4;
    __s[0x1a4] = __s + 0x1b3;
    __s[0x1b3] = __s + 0x1c2;
    __s[0x1c2] = __s + 0x1d1;
    __s[0x1d1] = __s + 0x1e0;
    __s[0x1e0] = __s + 0x1ef;
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


