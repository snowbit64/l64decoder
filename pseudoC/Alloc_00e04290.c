// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: Alloc
// Entry Point: 00e04290
// Size: 580 bytes
// Signature: undefined Alloc(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* tinyxml2::MemPoolT<104>::Alloc() */

undefined8 * tinyxml2::MemPoolT<104>::Alloc(void)

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
    __s = (undefined8 *)operator_new(0xfd8);
    memset(__s,0,0xfd8);
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
    __s[0x1ee] = 0;
    __s[0x1a] = __s + 0x27;
    *(undefined8 **)(in_x0 + 0x68) = __s;
    __s[0xd] = __s + 0x1a;
    *__s = __s + 0xd;
    *(int *)(in_x0 + 100) = iVar4 + 1;
    __s[0x27] = __s + 0x34;
    __s[0x34] = __s + 0x41;
    __s[0x41] = __s + 0x4e;
    __s[0x4e] = __s + 0x5b;
    __s[0x5b] = __s + 0x68;
    __s[0x68] = __s + 0x75;
    __s[0x75] = __s + 0x82;
    __s[0x82] = __s + 0x8f;
    __s[0x8f] = __s + 0x9c;
    __s[0x9c] = __s + 0xa9;
    __s[0xa9] = __s + 0xb6;
    __s[0xb6] = __s + 0xc3;
    __s[0xc3] = __s + 0xd0;
    __s[0xd0] = __s + 0xdd;
    __s[0xdd] = __s + 0xea;
    __s[0xea] = __s + 0xf7;
    __s[0xf7] = __s + 0x104;
    __s[0x104] = __s + 0x111;
    __s[0x111] = __s + 0x11e;
    __s[0x11e] = __s + 299;
    __s[299] = __s + 0x138;
    __s[0x138] = __s + 0x145;
    __s[0x145] = __s + 0x152;
    __s[0x152] = __s + 0x15f;
    __s[0x15f] = __s + 0x16c;
    __s[0x16c] = __s + 0x179;
    __s[0x179] = __s + 0x186;
    __s[0x186] = __s + 0x193;
    __s[0x193] = __s + 0x1a0;
    __s[0x1a0] = __s + 0x1ad;
    __s[0x1ad] = __s + 0x1ba;
    __s[0x1ba] = __s + 0x1c7;
    __s[0x1c7] = __s + 0x1d4;
    __s[0x1d4] = __s + 0x1e1;
    __s[0x1e1] = __s + 0x1ee;
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


