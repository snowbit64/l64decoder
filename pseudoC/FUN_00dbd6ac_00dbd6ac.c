// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00dbd6ac
// Entry Point: 00dbd6ac
// Size: 364 bytes
// Signature: undefined FUN_00dbd6ac(void)


int FUN_00dbd6ac(long param_1,undefined4 param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  uint local_88 [16];
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  uVar2 = *(uint *)(param_1 + 0x170);
  if (uVar2 != 0) {
    uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
    local_88[0] = uVar2 >> 0x10 | uVar2 << 0x10;
    png_safecat(local_88,0x40,4," using zstream");
    png_chunk_warning(param_1,local_88);
    *(undefined4 *)(param_1 + 0x170) = 0;
  }
  lVar1 = param_1 + 0x178;
  *(undefined8 *)(param_1 + 0x178) = 0;
  *(undefined4 *)(param_1 + 0x180) = 0;
  bVar4 = (*(uint *)(param_1 + 0x3c0) & 0xc) != 0xc;
  *(undefined8 *)(param_1 + 400) = 0;
  uVar6 = 0xf;
  if (bVar4) {
    uVar6 = 0;
  }
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(bool *)(param_1 + 0x2a8) = bVar4;
  if ((*(byte *)(param_1 + 0x168) >> 1 & 1) == 0) {
    iVar5 = inflateInit2_(lVar1,uVar6,"1.2.11",0x70);
    if (iVar5 == 0) {
      *(uint *)(param_1 + 0x168) = *(uint *)(param_1 + 0x168) | 2;
      uVar2 = *(uint *)(param_1 + 0x3c0);
    }
    else {
      uVar2 = *(uint *)(param_1 + 0x3c0);
    }
  }
  else {
    iVar5 = inflateReset2(lVar1,uVar6);
    uVar2 = *(uint *)(param_1 + 0x3c0);
  }
  if ((~uVar2 & 0x300) == 0) {
    iVar5 = inflateValidate(lVar1,0);
  }
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x170) = param_2;
    if (*(long *)(lVar3 + 0x28) != local_48) goto LAB_00dbd814;
  }
  else {
    png_zstream_error(param_1,iVar5);
    if (*(long *)(lVar3 + 0x28) != local_48) {
LAB_00dbd814:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
  }
  return iVar5;
}


