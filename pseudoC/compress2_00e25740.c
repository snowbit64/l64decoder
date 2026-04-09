// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: compress2
// Entry Point: 00e25740
// Size: 308 bytes
// Signature: undefined compress2(void)


void compress2(undefined8 param_1,ulong *param_2,undefined8 param_3,ulong param_4,undefined4 param_5
              )

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 local_b8;
  int local_b0;
  undefined8 local_a0;
  int local_98;
  ulong local_90;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  uVar5 = *param_2;
  *param_2 = 0;
  local_70 = 0;
  uStack_68 = 0;
  local_78 = 0;
  uVar4 = deflateInit_(&local_b8,param_5,"1.2.11",0x70);
  if ((int)uVar4 != 0) {
LAB_00e25848:
    if (*(long *)(lVar2 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar4);
    }
    return;
  }
  local_b0 = 0;
  local_b8 = param_3;
  local_a0 = param_1;
LAB_00e257e0:
  uVar4 = uVar5;
  if (0xfffffffe < uVar5) {
    uVar4 = 0xffffffff;
  }
  uVar5 = uVar5 - uVar4;
  local_98 = (int)uVar4;
  if (local_b0 != 0) goto LAB_00e257c4;
  do {
    uVar4 = param_4;
    if (0xfffffffe < param_4) {
      uVar4 = 0xffffffff;
    }
    param_4 = param_4 - uVar4;
    local_b0 = (int)uVar4;
    uVar3 = deflate(&local_b8,(ulong)(param_4 == 0) << 2);
    while( true ) {
      if (uVar3 != 0) {
        *param_2 = local_90;
        deflateEnd(&local_b8);
        uVar1 = 0;
        if (uVar3 != 1) {
          uVar1 = uVar3;
        }
        uVar4 = (ulong)uVar1;
        goto LAB_00e25848;
      }
      if (local_98 == 0) goto LAB_00e257e0;
      if (local_b0 == 0) break;
LAB_00e257c4:
      uVar3 = deflate(&local_b8,(ulong)(param_4 == 0) << 2);
    }
  } while( true );
}


