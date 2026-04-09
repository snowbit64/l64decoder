// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00daaff8
// Entry Point: 00daaff8
// Size: 612 bytes
// Signature: undefined FUN_00daaff8(void)


void FUN_00daaff8(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,
                 undefined8 param_5)

{
  undefined uVar1;
  undefined uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint uVar10;
  undefined auStack_134 [24];
  undefined auStack_11c [5];
  undefined2 uStack_117;
  undefined auStack_115 [189];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  if (param_2 != 0) {
    *(ushort *)(param_2 + 0x4a) = *(ushort *)(param_2 + 0x4a) | 0x8000;
  }
  lVar5 = png_safecat(auStack_11c,0xc4,0,"profile \'");
  uVar6 = png_safecat(auStack_11c,lVar5 + 0x4f,lVar5,param_3);
  lVar5 = png_safecat(auStack_11c,0xc4,uVar6,&DAT_004f3625);
  uVar9 = param_4 >> 0x18;
  if ((((((uVar9 & 0xffffffffffffffdf) - 0x41 < 0x1a) || (uVar9 == 0x20)) || (uVar9 - 0x30 < 10)) &&
      (((((param_4 >> 0x10 & 0xdf) - 0x41 < 0x1a || (uVar9 = param_4 >> 0x10 & 0xff, uVar9 == 0x20))
        || (uVar9 - 0x30 < 10)) &&
       ((((param_4 >> 8 & 0xdf) - 0x41 < 0x1a || (uVar9 = param_4 >> 8 & 0xff, uVar9 == 0x20)) ||
        (uVar9 - 0x30 < 10)))))) &&
     ((((param_4 & 0xdf) - 0x41 < 0x1a || ((param_4 & 0xff) == 0x20)) ||
      ((param_4 & 0xff) - 0x30 < 10)))) {
    uVar3 = (uint)(param_4 >> 0x18) & 0xff;
    uVar10 = (uint)param_4;
    if (0x5e < uVar3 - 0x20) {
      uVar3 = 0x3f;
    }
    auStack_11c[lVar5] = 0x27;
    uVar1 = (undefined)(param_4 >> 0x10);
    if (0x5e < (uVar10 >> 0x10 & 0xff) - 0x20) {
      uVar1 = 0x3f;
    }
    uVar2 = (undefined)(param_4 >> 8);
    if (0x5e < (uVar10 >> 8 & 0xff) - 0x20) {
      uVar2 = 0x3f;
    }
    auStack_11c[lVar5 + 1] = (char)uVar3;
    if (0x5e < (uVar10 & 0xff) - 0x20) {
      uVar10 = 0x3f;
    }
    auStack_11c[lVar5 + 2] = uVar1;
    auStack_11c[lVar5 + 3] = uVar2;
    auStack_11c[lVar5 + 4] = (char)uVar10;
    lVar7 = lVar5 + 8;
    *(undefined2 *)(auStack_11c + lVar5 + 5) = 0x3a27;
    auStack_11c[lVar5 + 7] = 0x20;
  }
  else {
    uVar6 = png_format_number(auStack_134,auStack_11c,3,param_4);
    uVar6 = png_safecat(auStack_11c,0xc4,lVar5,uVar6);
    lVar7 = png_safecat(auStack_11c,0xc4,uVar6,&DAT_0050ee7c);
  }
  png_safecat(auStack_11c,0xc4,lVar7,param_5);
  uVar8 = 1;
  if (param_2 != 0) {
    uVar8 = 2;
  }
  png_chunk_report(param_1,auStack_11c,uVar8);
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


