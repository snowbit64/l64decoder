// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: lua_newstate
// Entry Point: 00f120ac
// Size: 496 bytes
// Signature: undefined __cdecl lua_newstate(_func_void_ptr_void_ptr_void_ptr_ulong_ulong * param_1, void * param_2)


/* lua_newstate(void* (*)(void*, void*, unsigned long, unsigned long), void*) */

undefined2 * lua_newstate(_func_void_ptr_void_ptr_void_ptr_ulong_ulong *param_1,void *param_2)

{
  int iVar1;
  undefined2 *puVar2;
  long lVar3;
  
  puVar2 = (undefined2 *)(*param_1)(param_2,(void *)0x0,0,0x11c0);
  if (puVar2 != (undefined2 *)0x0) {
    *puVar2 = 0x909;
    *(undefined *)(puVar2 + 0x50) = 9;
    *(undefined *)(puVar2 + 1) = 0;
    *(undefined2 **)(puVar2 + 0xc) = puVar2 + 0x40;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined4 *)((long)puVar2 + 3) = 0;
    *(undefined2 **)(puVar2 + 0x584) = puVar2 + 0x57c;
    *(undefined2 **)(puVar2 + 0x588) = puVar2 + 0x57c;
    *(undefined8 *)(puVar2 + 0x24) = 0;
    *(undefined8 *)(puVar2 + 0x20) = 0;
    *(undefined8 *)(puVar2 + 0x2c) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x64c) = 1;
    *(_func_void_ptr_void_ptr_void_ptr_ulong_ulong **)(puVar2 + 0x48) = param_1;
    *(void **)(puVar2 + 0x4c) = param_2;
    *(undefined2 **)(puVar2 + 0x578) = puVar2;
    *(undefined4 *)(puVar2 + 0x640) = 0;
    *(undefined8 *)(puVar2 + 0x648) = 0;
    *(undefined8 *)(puVar2 + 0x644) = 0;
    *(undefined8 *)(puVar2 + 100) = 0x11c0;
    *(undefined8 *)(puVar2 + 0x60) = 0;
    *(undefined4 *)(puVar2 + 0x636) = 0;
    *(undefined4 *)(puVar2 + 0x63e) = 0;
    *(undefined *)((long)puVar2 + 0xa1) = 0;
    *(undefined8 *)(puVar2 + 0x3c) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x44) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x5c) = 0;
    *(undefined8 *)(puVar2 + 0x58) = 0;
    *(undefined8 *)(puVar2 + 0x54) = 0;
    *(undefined8 *)(puVar2 + 0x658) = 0;
    *(undefined8 *)(puVar2 + 0x654) = 0;
    *(undefined8 *)(puVar2 + 0x650) = 0;
    *(undefined8 *)(puVar2 + 0x68) = 0xc8000000c8;
    *(undefined4 *)(puVar2 + 0x6c) = 0x400;
    *(undefined8 *)(puVar2 + 0x594) = 0;
    *(undefined8 *)(puVar2 + 0x590) = 0;
    *(undefined8 *)(puVar2 + 0x59c) = 0;
    *(undefined8 *)(puVar2 + 0x598) = 0;
    *(undefined8 *)(puVar2 + 0x5a4) = 0;
    *(undefined8 *)(puVar2 + 0x5a0) = 0;
    *(undefined8 *)(puVar2 + 0x5ac) = 0;
    *(undefined8 *)(puVar2 + 0x5a8) = 0;
    *(undefined8 *)(puVar2 + 0x5b4) = 0;
    *(undefined8 *)(puVar2 + 0x5b0) = 0;
    memset(puVar2 + 0x65c,0,0x400);
    memset(puVar2 + 0x70,0,0xa10);
    *(undefined8 *)(puVar2 + 0x178) = 0x11c0;
    *(undefined8 *)(puVar2 + 0x860) = 0;
    *(undefined8 *)(puVar2 + 0x85c) = 0;
    *(undefined8 *)(puVar2 + 0x868) = 0;
    *(undefined8 *)(puVar2 + 0x864) = 0;
    *(undefined8 *)(puVar2 + 0x870) = 0;
    *(undefined8 *)(puVar2 + 0x86c) = 0;
    *(undefined8 *)(puVar2 + 0x878) = 0;
    *(undefined8 *)(puVar2 + 0x874) = 0;
    *(undefined8 *)(puVar2 + 0x880) = 0;
    *(undefined8 *)(puVar2 + 0x87c) = 0;
    *(undefined8 *)(puVar2 + 0x888) = 0;
    *(undefined8 *)(puVar2 + 0x884) = 0;
    *(undefined8 *)(puVar2 + 0x890) = 0;
    *(undefined8 *)(puVar2 + 0x88c) = 0;
    *(undefined8 *)(puVar2 + 0x898) = 0;
    *(undefined8 *)(puVar2 + 0x894) = 0;
    *(undefined8 *)(puVar2 + 0x8a0) = 0;
    *(undefined8 *)(puVar2 + 0x89c) = 0;
    *(undefined8 *)(puVar2 + 0x8a8) = 0;
    *(undefined8 *)(puVar2 + 0x8a4) = 0;
    *(undefined8 *)(puVar2 + 0x8b0) = 0;
    *(undefined8 *)(puVar2 + 0x8ac) = 0;
    *(undefined8 *)(puVar2 + 0x8b8) = 0;
    *(undefined8 *)(puVar2 + 0x8b4) = 0;
    *(undefined8 *)(puVar2 + 0x8c0) = 0;
    *(undefined8 *)(puVar2 + 0x8bc) = 0;
    *(undefined8 *)(puVar2 + 0x8c8) = 0;
    *(undefined8 *)(puVar2 + 0x8c4) = 0;
    *(undefined8 *)(puVar2 + 0x8d0) = 0;
    *(undefined8 *)(puVar2 + 0x8cc) = 0;
    *(undefined8 *)(puVar2 + 0x8d8) = 0;
    *(undefined8 *)(puVar2 + 0x8d4) = 0;
    *(undefined8 *)(puVar2 + 0x8dc) = 0;
    iVar1 = FUN_00f0a814(puVar2,FUN_00f1229c,0);
    if (iVar1 != 0) {
      lVar3 = *(long *)(puVar2 + 0xc);
      FUN_00f0bb9c(puVar2,*(undefined8 *)(puVar2 + 0x18));
      FUN_00f0bda4(puVar2);
      FUN_00f1043c(puVar2,**(undefined8 **)(puVar2 + 0xc),
                   (long)*(int *)((long)*(undefined8 **)(puVar2 + 0xc) + 0xc) << 3,0);
      FUN_00f1043c(puVar2,*(undefined8 *)(puVar2 + 0x20),(long)*(int *)(puVar2 + 0x26) * 0x28,
                   *(undefined *)(puVar2 + 1));
      FUN_00f1043c(puVar2,*(undefined8 *)(puVar2 + 0x18),(long)*(int *)(puVar2 + 0x24) << 4,
                   *(undefined *)(puVar2 + 1));
      (**(code **)(lVar3 + 0x10))(*(undefined8 *)(lVar3 + 0x18),puVar2,0x11c0,0);
      puVar2 = (undefined2 *)0x0;
    }
  }
  return puVar2;
}


