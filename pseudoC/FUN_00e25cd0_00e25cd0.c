// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: FUN_00e25cd0
// Entry Point: 00e25cd0
// Size: 764 bytes
// Signature: undefined FUN_00e25cd0(void)


void FUN_00e25cd0(ulong param_1,ulong param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong local_230 [33];
  ulong local_128 [32];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if ((long)param_3 < 1) {
LAB_00e25fa8:
    if (*(long *)(lVar2 + 0x28) != local_28) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(param_1);
    }
    return;
  }
  lVar3 = 0;
  local_230[1] = 1;
  local_230[0] = 0xedb88320;
  local_230[3] = 4;
  local_230[2] = 2;
  local_230[5] = 0x10;
  local_230[4] = 8;
  local_230[7] = 0x40;
  local_230[6] = 0x20;
  local_230[9] = 0x100;
  local_230[8] = 0x80;
  local_230[11] = 0x400;
  local_230[10] = 0x200;
  local_230[13] = 0x1000;
  local_230[12] = 0x800;
  local_230[15] = 0x4000;
  local_230[14] = 0x2000;
  local_230[17] = 0x10000;
  local_230[16] = 0x8000;
  local_230[19] = 0x40000;
  local_230[18] = 0x20000;
  local_230[21] = 0x100000;
  local_230[20] = 0x80000;
  local_230[23] = 0x400000;
  local_230[22] = 0x200000;
  uVar4 = 0xedb88320;
  local_230[25] = 0x1000000;
  local_230[24] = 0x800000;
  local_230[27] = 0x4000000;
  local_230[26] = 0x2000000;
  local_230[29] = 0x10000000;
  local_230[28] = 0x8000000;
  local_230[31] = 0x40000000;
  local_230[30] = 0x20000000;
LAB_00e25db0:
  uVar6 = 0;
  puVar5 = local_230;
  do {
    if ((uVar4 & 1) != 0) {
      uVar6 = *puVar5 ^ uVar6;
    }
    puVar5 = puVar5 + 1;
    bVar1 = 1 < uVar4;
    uVar4 = uVar4 >> 1;
  } while (bVar1);
  while( true ) {
    local_128[lVar3] = uVar6;
    lVar3 = lVar3 + 1;
    if (lVar3 == 0x20) break;
    uVar4 = local_230[lVar3];
    uVar6 = 0;
    if (uVar4 != 0) goto LAB_00e25db0;
  }
  lVar3 = 0;
  do {
    if (local_128[lVar3] == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      puVar5 = local_128;
      uVar6 = local_128[lVar3];
      do {
        if ((uVar6 & 1) != 0) {
          uVar4 = *puVar5 ^ uVar4;
        }
        puVar5 = puVar5 + 1;
        bVar1 = 1 < uVar6;
        uVar6 = uVar6 >> 1;
      } while (bVar1);
    }
    local_230[lVar3] = uVar4;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x20);
  do {
    lVar3 = 0;
    do {
      if (local_230[lVar3] == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        uVar6 = local_230[lVar3];
        puVar5 = local_230;
        do {
          if ((uVar6 & 1) != 0) {
            uVar4 = *puVar5 ^ uVar4;
          }
          puVar5 = puVar5 + 1;
          bVar1 = 1 < uVar6;
          uVar6 = uVar6 >> 1;
        } while (bVar1);
      }
      local_128[lVar3] = uVar4;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    uVar4 = param_1;
    if (((param_3 & 1) != 0) && (uVar4 = 0, param_1 != 0)) {
      puVar5 = local_128;
      do {
        if ((param_1 & 1) != 0) {
          uVar4 = *puVar5 ^ uVar4;
        }
        puVar5 = puVar5 + 1;
        bVar1 = 1 < param_1;
        param_1 = param_1 >> 1;
      } while (bVar1);
    }
    if (param_3 < 2) break;
    lVar3 = 0;
    do {
      if (local_128[lVar3] == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        puVar5 = local_128;
        uVar7 = local_128[lVar3];
        do {
          if ((uVar7 & 1) != 0) {
            uVar6 = *puVar5 ^ uVar6;
          }
          puVar5 = puVar5 + 1;
          bVar1 = 1 < uVar7;
          uVar7 = uVar7 >> 1;
        } while (bVar1);
      }
      local_230[lVar3] = uVar6;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0x20);
    param_1 = uVar4;
    if ((((uint)param_3 >> 1 & 1) != 0) && (param_1 = 0, puVar5 = local_230, uVar4 != 0)) {
      do {
        if ((uVar4 & 1) != 0) {
          param_1 = *puVar5 ^ param_1;
        }
        bVar1 = 1 < uVar4;
        uVar4 = uVar4 >> 1;
        puVar5 = puVar5 + 1;
      } while (bVar1);
    }
    bVar1 = 3 < param_3;
    uVar4 = param_1;
    param_3 = (long)param_3 >> 2;
  } while (bVar1);
  param_1 = uVar4 ^ param_2;
  goto LAB_00e25fa8;
}


