// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: stb_vorbis_seek_start
// Entry Point: 00e498b8
// Size: 296 bytes
// Signature: undefined stb_vorbis_seek_start(void)


int stb_vorbis_seek_start(long param_1)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (*(char *)(param_1 + 0x5c) == '\0') {
    *(undefined4 *)(param_1 + 0x98) = 0;
    uVar1 = *(uint *)(param_1 + 0x60);
    if (*(long *)(param_1 + 0x40) == 0) {
      uVar4 = (ulong)(*(uint *)(param_1 + 0x38) + uVar1);
      if (((int)uVar1 < 0) || (CARRY4(*(uint *)(param_1 + 0x38),uVar1) != false)) {
        uVar4 = 0x7fffffff;
        *(undefined4 *)(param_1 + 0x98) = 1;
      }
      iVar3 = fseek(*(FILE **)(param_1 + 0x30),uVar4,0);
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0x98) = 1;
        fseek(*(FILE **)(param_1 + 0x30),(ulong)*(uint *)(param_1 + 0x38),2);
      }
    }
    else {
      uVar4 = *(long *)(param_1 + 0x48) + (ulong)uVar1;
      if (uVar4 < *(ulong *)(param_1 + 0x50)) {
        *(ulong *)(param_1 + 0x40) = uVar4;
      }
      else {
        *(ulong *)(param_1 + 0x40) = *(ulong *)(param_1 + 0x50);
        *(undefined4 *)(param_1 + 0x98) = 1;
      }
    }
    *(undefined4 *)(param_1 + 0x4f8) = 0;
    *(undefined *)(param_1 + 0x6e5) = 1;
    *(undefined4 *)(param_1 + 0x6e8) = 0xffffffff;
    iVar3 = FUN_00e4589c(param_1,&local_3c,&local_44,&local_40);
    if (iVar3 != 0) {
      FUN_00e46748(param_1,local_3c,local_44,local_40);
    }
  }
  else {
    iVar3 = 0;
    *(undefined4 *)(param_1 + 0x9c) = 2;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


